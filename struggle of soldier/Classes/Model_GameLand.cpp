#include "Model_GameLand.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "View_GameLand.h"
#include "unity/datablock.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(GameLand),IsLive(this),ActiveTroopID(this),ActiveSoldierID(this){
	// 构造函数，代码写这里
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(GameLand)
	// 析构函数，代码写这里
MODEL_TYPECLASS_DEFINE_BEGINING

bool GameLandModel::initImpl()
{
	return true;
}

void GameLandModel::luaSetBoolProperty(GameLandModel::PropertyType type, bool b)
{
	switch(type)
	{
	case EPTT_IsLive: this->IsLive = b; break;
	}
}
void GameLandModel::luaSetNumberProperty(GameLandModel::PropertyType type, int v)
{
	switch(type)
	{
	case EPTT_ActiveTroopID: this->ActiveTroopID = (uint8)v; break;
	case EPTT_ActiveSoldierID: this->ActiveSoldierID = (uint8)v; break;
	}
}
GameLandView* GameLandModel::luaGetViewBinding()
{
	return static_cast<GameLandView*>(mBindingTarget);
}

std::string GameLandModel::getTroopName() const
{
	uint8 troopID = this->ActiveTroopID;
	CCString* pStr = CCString::createWithFormat("%d's troop", troopID);
	return pStr->getCString();
}

void GameLandModel::updateImpl(float dt)
{

}

void GameLandModel::finalize()
{
	callLuaFuncNoResult("LUAGameLandModelOnFinalize");
}

/*
bool GameLandModel::playAction(const int8* data, uint32 length)
{
while(!mLiveActionQueue.empty())
{
delete mLiveActionQueue.front();
mLiveActionQueue.pop();
}
unity::blockreader block(data, length);
uint32 actNum = 0;
if(!block.read(actNum) || actNum <= 0)
return false;
uint8 actType = (uint8)LiveActionType::unused;
while(!block.eof())
{
actType = (uint8)LiveActionType::unused;
if(!block.read(actType))
return false;
ILiveAction* pAction = NULL;
switch(actType)
{
case LiveActionType::change:
{
LiveActionChange* pRetImpl = new LiveActionChange();
if(block.read(pRetImpl->troopID))
pAction = pRetImpl;
}
break;
case LiveActionType::select:
{
LiveActionSelect* pRetImpl = new LiveActionSelect();
if(block.read(pRetImpl->number))
pAction = pRetImpl;
}
break;
case LiveActionType::moveto:
{
uint8 moveNum = 0;
if(!block.read(moveNum) || moveNum <= 0)
return false;
LiveActionMoveTo* pRetImpl = new LiveActionMoveTo();
for(uint8 i = 0; i < moveNum; ++ i)
{
if(block.read(pRetImpl->to))
pAction = pRetImpl;
}
}
break;
case LiveActionType::attack:
{
uint8 attackCount = 0;
if(!block.read(attackCount) || attackCount <= 0)
return false;
LiveActionAttack* pRetImpl = new LiveActionAttack();
for(uint8 i = 0; i < attackCount; ++ i)
{
if(block.read(pRetImpl->grid))
pAction = pRetImpl;
}
}
break;
case LiveActionType::skill:
{
uint8 skillCount = 0;
if(!block.read(skillCount) || skillCount <= 0)
return false;
LiveActionSkill* pRetImpl = new LiveActionSkill();
for(uint8 i = 0; i < skillCount; ++ i)
{
if(block.read(pRetImpl->skillID) && block.read(pRetImpl->grid))
pAction = pRetImpl;
}
}
break;
}
mLiveActionQueue.push(pAction);
}
GameLandView* pView = dynamic_cast<GameLandView*>(this->mBindingTarget);
pView->Event_OnActionStepOvered += EVENT_HANDLE_SCHEDULE(GameLandView*, this, ActionStepOveredEventParams*, GameLandModel::onActionStepOvered);
this->playOneStep();
return true;
}

void GameLandModel::playOneStep()
{
ILiveAction* pAction = mLiveActionQueue.front();
mLiveActionQueue.pop();
if(NULL == pAction)
{
this->playOneStep();
return;
}
if(pAction->type() == LiveActionType::change)
{
const LiveActionChange* pAct = dynamic_cast<const LiveActionChange*>(pAction);
this->ActiveTroopID = pAct->troopID;
this->playOneStep();
return;
}
if(pAction->type() == LiveActionType::select)
{
const LiveActionSelect* pAct = dynamic_cast<const LiveActionSelect*>(pAction);
this->ActiveSoldierID = pAct->number;
// wait onActionStepOvered event
return;
}
GameLandView* pView = dynamic_cast<GameLandView*>(this->mBindingTarget);
if(pAction->type() == LiveActionType::moveto)
{
const LiveActionMoveTo* pAct = dynamic_cast<const LiveActionMoveTo*>(pAction);
// wait onActionStepOvered event
return;
}
if(pAction->type() == LiveActionType::attack)
{
const LiveActionAttack* pAct = dynamic_cast<const LiveActionAttack*>(pAction);
// wait onActionStepOvered event
return;
}
if(pAction->type() == LiveActionType::skill)
{
const LiveActionSkill* pAct = dynamic_cast<const LiveActionSkill*>(pAction);
// wait onActionStepOvered event
return;
}
}

void GameLandModel::onActionStepOvered(GameLandView* sender, ActionStepOveredEventParams* args)
{
if(mLiveActionQueue.empty())
{
GameLandView* pView = dynamic_cast<GameLandView*>(this->mBindingTarget);
pView->Event_OnActionStepOvered -= EVENT_HANDLE_SCHEDULE(GameLandView*, this, ActionStepOveredEventParams*, GameLandModel::onActionStepOvered);
return;
}
this->playOneStep();
}
this->clearLandData();
mLandGridRows = 0;
mLandGridColumns = 0;
this->clearLandData();
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
CCPoint LandTreeGrid::getCenter()
{
	return center;
}
SoldierTroopsUnitGrid::SoldierTroopsUnitGrid()
{
	number = 0;
	troopID = 0;
	sType = SoldierType_unused;
	oType = GridOrientation_maxnum;
}
*/
/*
bool GameLandModel::loadLandData(const std::string& landName)
{
	ViewModelManager::reloadLuaScript("luascript/models/gamelandmodel.lua");
	this->clearLandData();

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
	GameLandView* pView = dynamic_cast<GameLandView*>(this->mBindingTarget);
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
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation_topper] = mLandGridList[topIndex];
			if(bottomIndex >= 0 && bottomIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation_bottom] = mLandGridList[bottomIndex];
			if(ltIndex >= 0 && ltIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation_lefttop] = mLandGridList[ltIndex];
			if(lbIndex >= 0 && lbIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation_leftbottom] = mLandGridList[lbIndex];
			if(rtIndex >= 0 && rtIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation_righttop] = mLandGridList[rtIndex];
			if(rbIndex >= 0 && rbIndex < count)
				mLandGridList[nowIndex]->sideGrids[(size_t)GridOrientation_rightbottom] = mLandGridList[rbIndex];

			pView->initLandGrid(mLandGridList[nowIndex]);
			const SoldierTroopsUnitGrid* pUnit = dynamic_cast<const SoldierTroopsUnitGrid*>(mLandGridList[nowIndex]);
			if(NULL != pUnit)
			{
				SoldierTroops::iterator it_s = mSoldierTroops.find(pUnit->troopID);
				if(mSoldierTroops.end() == it_s)
				{
					mSoldierTroops.insert(SoldierTroops::value_type(pUnit->troopID, TroopSoldiers()));
					it_s = mSoldierTroops.find(pUnit->troopID);
				}
				TroopSoldiers& soldiers = it_s->second;
				soldiers[pUnit->number] = pUnit;
			}
			
		}
	}

	return true;
}

bool GameLandModel::clearLandData()
{
	IsLive.mValue = false;
	ActiveTroopID.mValue = 0;
	ActiveSoldierID.mValue = 0;
	for(size_t i = 0; i < mLandGridList.size(); ++ i)
	{
		delete mLandGridList[i];
	}
	mLandGridList.clear();
	return true;
}

const SoldierTroopsUnitGrid* GameLandModel::getSoldierByTroopAndNumber(uint8 t, uint8 n) const
{
	uint8 troopID = t == 0 ? this->ActiveTroopID : t;
	uint8 number = n == 0 ? this->ActiveSoldierID : n;
	SoldierTroops::const_iterator it_s = mSoldierTroops.find(troopID);
	if(mSoldierTroops.end() != it_s)
	{
		const TroopSoldiers& soldiers = it_s->second;
		TroopSoldiers::const_iterator it_t = soldiers.find(number);
		if(soldiers.end() != it_t)
		{
			return it_t->second;
		}
	}
	return NULL;
}
*/