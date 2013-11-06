#include "Model_GameLand.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"

CCSize LandTreeGrid::Size;
LandTreeGrid::LandTreeGrid()
{
	leftTop = NULL;
	leftBottom = NULL;
	rightTop = NULL;
	rightBottom = NULL;
	top = NULL;
	bottom = NULL;
	gridView = NULL;
	testShowNumber = 0;
}

LandTreeGrid::~LandTreeGrid()
{
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
	int count = mLandGridRows*mLandGridColumns;
	mLandGridList.resize(count);
	for(int i = 1; i <= count; ++ i)
	{
		mLandGridList[i-1] = NULL;
        CCString* pIndex = CCString::createWithFormat("%d", i);
		int8 flag = 0;
		if(!tolua_findNumberValueBySegmentName(pLanGridsData, pIndex->getCString(), flag))
			return false;
		if(flag != 0)
		{
			if(NULL == mLandGridList[i-1])
				mLandGridList[i-1] = new LandTreeGrid();
			mLandGridList[i-1]->testShowNumber = flag;
		}
		else if(flag == 0)
		{
			if(NULL != mLandGridList[i-1])
			{
				delete mLandGridList[i-1];
				mLandGridList[i-1] = NULL;
			}
		}
	}
	CCPoint helfOff(LandTreeGrid::Size.width/2.0f, LandTreeGrid::Size.height/2.0f);
	//float lineWidth = sqrtf(helfOff.x*helfOff.x + helfOff.y*helfOff.y);
	//float helfLineWidth = lineWidth / 2.0f;
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
				mLandGridList[nowIndex]->top = mLandGridList[topIndex];
			if(bottomIndex >= 0 && bottomIndex < count)
				mLandGridList[nowIndex]->bottom = mLandGridList[bottomIndex];
			if(ltIndex >= 0 && ltIndex < count)
				mLandGridList[nowIndex]->leftTop = mLandGridList[ltIndex];
			if(lbIndex >= 0 && lbIndex < count)
				mLandGridList[nowIndex]->leftBottom = mLandGridList[lbIndex];
			if(rtIndex >= 0 && rtIndex < count)
				mLandGridList[nowIndex]->rightTop = mLandGridList[rtIndex];
			if(rbIndex >= 0 && rbIndex < count)
				mLandGridList[nowIndex]->rightBottom = mLandGridList[rbIndex];
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