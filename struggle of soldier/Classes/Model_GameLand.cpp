#include "Model_GameLand.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

CCSize LandTreeGrid::Size;
LandTreeGrid::LandTreeGrid()
{
	memset(sideGrids, 0, sizeof(sideGrids));
	showGrid = false;
#ifdef TEST_VIEWGRIDS
	gridView = NULL;
#endif
}
LandTreeGrid::~LandTreeGrid()
{
}

SoldierTroopsUnitGrid::SoldierTroopsUnitGrid()
{
	number = 0;
	troopID = 0;
	sType = SoldierType::unused;
	oType = GridOrientation::maxnum;
}


MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameLand)
	// 构造函数，代码写这里
	mLandGridRows = 0;
	mLandGridColumns = 0;
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameLand)
	// 析构函数，代码写这里
	this->clearLandData();
MODEL_TYPECLASS_DEFINE_BEGINING

bool GameLandModel::initImpl()
{
	return true;
}

bool GameLandModel::loadLandData(const std::string& landName)
{
	ViewModelManager::reloadLuaScript("luascript/models/gamelandmodel.lua");

	lua_State* L = mLuaEngine->getLuaStack()->getLuaState();
	tolua_getGlobalUserData_ByFieldName(L, "_LUALandGridSize", LandTreeGrid::Size);
	ScriptParamObject landGridsDatas;
	tolua_getLuaTableValue_ByTable(L, "_LUALandGrids", landGridsDatas);
	const ScriptParamObject* pLanGridsData = tolua_findNodeBySegmentName(&landGridsDatas, landName.c_str());
	if(NULL == pLanGridsData)
		return false;
	if(!tolua_findNumberValueBySegmentName(pLanGridsData, "rows", mLandGridRows))
		return false;
	if(!tolua_findNumberValueBySegmentName(pLanGridsData, "columns", mLandGridColumns))
		return false;
	typedef struct 
	{
		uint8 number;	// 部队编号
		uint8 troopID;	// 所属部队
		uint8 sType;		// 兵种
		uint8 oType;	// 默认朝向
	}TempTroopsUnit;
	typedef std::map<size_t, TempTroopsUnit> TroopDatas;
	TroopDatas tmpTroopDatas;
	const ScriptParamObject* pTroopData = tolua_findTableValueBySegmentName(pLanGridsData, "troops");
	for(ScriptParamObject::ScriptTableData::const_iterator it = pTroopData->tables.begin(); 
		it != pTroopData->tables.end(); ++ it)
	{
		std::string troopID = it->first;
		const ScriptParamObject& troop = it->second;
		for(ScriptParamObject::ScriptTableData::const_iterator it_t = troop.tables.begin();
			it_t != troop.tables.end(); ++ it_t)
		{
			std::string number = it_t->first;
			TempTroopsUnit unit;
			unit.number = atoi(number.c_str());
			unit.troopID = atoi(troopID.c_str());
			if(it_t->second.tables.size() != 3)
			{
				CCASSERT(false, "数据格式错误");
				CCLOG("部队信息应该是3个字段[%d]", unit.number);
				continue;
			}
			int index = -1;
			if(!tolua_findNumberValueBySegmentName(&it_t->second, "1", index) || -1 == index)
			{
				CCASSERT(false, "数据格式错误");
				CCLOG("部队信息应该是3个字段{格子编号，部队初始朝向，兵种}, 格子编号不是数值");
				continue;
			}
			if(!tolua_findNumberValueBySegmentName(&it_t->second, "2", unit.oType))
			{
				CCASSERT(false, "数据格式错误");
				CCLOG("部队信息应该是3个字段{格子编号，部队初始朝向，兵种}, 部队初始朝向不是数值");
				continue;
			}
			if(!tolua_findNumberValueBySegmentName(&it_t->second, "3", unit.sType))
			{
				CCASSERT(false, "数据格式错误");
				CCLOG("部队信息应该是3个字段{格子编号，部队初始朝向，兵种}, 兵种不是数值");
				continue;
			}
			tmpTroopDatas[index] = unit;
		}
	}
	
	int count = mLandGridRows*mLandGridColumns;
	mLandGridList.resize(count);
	for(int i = 1; i <= count; ++ i)
	{
		mLandGridList[i-1] = NULL;
        CCString* pIndex = CCString::createWithFormat("%d", i);
		int8 flag = 0;
		if(!tolua_findNumberValueBySegmentName(pLanGridsData, pIndex->getCString(), flag))
			return false;
		if(NULL != mLandGridList[i-1])
		{
			delete mLandGridList[i-1];
			mLandGridList[i-1] = NULL;
		}
		if(flag != 0)
		{
			TroopDatas::const_iterator it_t = tmpTroopDatas.find(i);
			if(tmpTroopDatas.end() != it_t)
			{
				const TempTroopsUnit& unit = it_t->second;
				SoldierTroopsUnitGrid* pSoldierGrid = new SoldierTroopsUnitGrid();
				pSoldierGrid->number = unit.number;
				pSoldierGrid->troopID = unit.troopID;
				pSoldierGrid->sType = static_cast<SoldierType>(unit.sType);
				pSoldierGrid->oType = static_cast<GridOrientation>(unit.oType);
				mLandGridList[i-1] = pSoldierGrid;
			}
			else
				mLandGridList[i-1] = new LandTreeGrid();
			mLandGridList[i-1]->showGrid = flag == 2;
		}
	}
	tmpTroopDatas.clear();
	CCPoint helfOff(LandTreeGrid::Size.width/2.0f, LandTreeGrid::Size.height/2.0f);
	CCPoint offsetPos(mLandGridColumns * helfOff.x / 2.0f, mLandGridRows * (helfOff.y + helfOff.y/2.0f));
	for(int j = 0; j < mLandGridColumns; ++ j)
	{
		for(int i = 0; i < mLandGridRows; ++ i)
		{
			int nowIndex = i * mLandGridColumns + j;
			if(NULL == mLandGridList[nowIndex])
				continue;
			int topIndex = (i - 1) * mLandGridColumns + j;
			int bottomIndex = (i + 1) * mLandGridColumns + j;
			int ltIndex = -1, lbIndex, rtIndex, rbIndex;
			float rowOff = j * helfOff.x;
			float colOff = (mLandGridRows - 1) * LandTreeGrid::Size.height - i * helfOff.y + j * helfOff.y;
			if((j % 2) == 0)
			{
				ltIndex = (i + 1) * mLandGridColumns + (j - 1);
				lbIndex = i * mLandGridColumns + (j - 1);
				rtIndex = (i + 1) * mLandGridColumns + (j + 1);
				rbIndex = i * mLandGridColumns + (j + 1);
				mLandGridList[nowIndex]->center = ccp(i * helfOff.x + rowOff - offsetPos.x, 
					colOff + helfOff.y - offsetPos.y);
			}
			else
			{
				ltIndex = i * mLandGridColumns + (j - 1);
				lbIndex = (i - 1) * mLandGridColumns + (j - 1);
				rtIndex = i * mLandGridColumns + (j + 1);
				rbIndex = (i - 1) * mLandGridColumns + (j + 1);
				mLandGridList[nowIndex]->center = ccp(i * helfOff.x + rowOff - offsetPos.x - helfOff.x/2.0f, 
					colOff + helfOff.y - offsetPos.y + helfOff.y/2.0f);
			}
			if(j == 0)
			{
				ltIndex = -1;
				lbIndex = -1;
			}
			if(j == mLandGridColumns-1)
			{
				rtIndex = -1;
				rbIndex = -1;
			}
			if(topIndex >= 0 && topIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation::topper] = mLandGridList[topIndex];
			if(bottomIndex >= 0 && bottomIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation::bottom] = mLandGridList[bottomIndex];
			if(ltIndex >= 0 && ltIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation::lefttop] = mLandGridList[ltIndex];
			if(lbIndex >= 0 && lbIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation::leftbottom] = mLandGridList[lbIndex];
			if(rtIndex >= 0 && rtIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation::righttop] = mLandGridList[rtIndex];
			if(rbIndex >= 0 && rbIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation::rightbottom] = mLandGridList[rbIndex];
		}
	}

	return true;
}

bool GameLandModel::clearLandData()
{
	for(size_t i = 0; i < mLandGridList.size(); ++ i)
	{
		delete mLandGridList[i];
	}
	mLandGridList.clear();
	return true;
}

const GameLandModel::LandGridList& GameLandModel::getLandGridList() const
{
	return mLandGridList;
}

void GameLandModel::updateImpl(float dt)
{

}

void GameLandModel::finalize()
{
	this->clearLandData();
}