#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

#define TEST_VIEWGRIDS

#pragma pack(push,1)
// 兵种类型
enum SoldierType
{
	SoldierType_Saber = 1	// 步兵
	,SoldierType_Rider		// 骑兵
	,SoldierType_Lancer		// 枪兵
	,SoldierType_Archer		// 弓兵
	,SoldierType_unused
};
// 方向类型
enum GridOrientation
{
	GridOrientation_topper = 0
	,GridOrientation_lefttop
	,GridOrientation_leftbottom
	,GridOrientation_bottom
	,GridOrientation_rightbottom
	,GridOrientation_righttop
	,GridOrientation_maxnum			// 数量
};

// 直播（或录像）动作类型，数据结构：动作数量（uint32) 动作类型（uint8） 参数1...参数n
enum LiveActionType
{
	LiveActionType_change = 1		// 切换阵营：			参数1（阵营ID uint8）
	,LiveActionType_select			// 选中部队：			参数1（部队编号 uint8）
	,LiveActionType_moveto			// 移动到相邻格子：		参数1（移动格数n uint8） 参数2...参数n（GridOrientation）
	,LiveActionType_attack			// 攻击某阵营某号部队：	参数1（攻击次数n uint8） 参数2（阵营ID uint8）参数3(部队编号 uint8） ...参数n
	,LiveActionType_skill			// 指定某格释放技能：	参数1（释放次数n uint8） 参数2（技能ID uint16）参数3（格子编号 uint16）...参数n
	,LiveActionType_unused
};
#pragma pack(pop)

class GameLandView;
struct ActionStepOveredEventParams;
// class GameLandModel
MODEL_TYPECLASS_DECLARE_HEADER(GameLand)
	// 添加相应代码
	public:
		enum PropertyType
		{
			EPTT_IsLive = 1,
			EPTT_ActiveTroopID = 2,
			EPTT_ActiveSoldierID = 3,
		};
		bool playAction(const int8* data, uint32 length);
		std::string getTroopName() const;
		// lua call
		void luaSetBoolProperty(PropertyType type, bool b);
		void luaSetNumberProperty(PropertyType type, int v);
		GameLandView* luaGetViewBinding();

	private:
		void playOneStep();
		void onActionStepOvered(GameLandView* sender, ActionStepOveredEventParams* args);

		// property
		PROPERTY_DEFINED_SETTER_DEFINED(IsLive, bool, GameLandModel);
		PROPERTY_DEFINED_SETTER_DEFINED(ActiveTroopID, uint8, GameLandModel);
		PROPERTY_DEFINED_SETTER_DEFINED(ActiveSoldierID, uint8, GameLandModel);

	private:
		/*
		//const SoldierTroopsUnitGrid* getSoldierByTroopAndNumber(uint8 t = 0, uint8 n = 0) const;
		LiveActionQueue mLiveActionQueue;
		typedef std::vector<LandTreeGrid*> LandGridList;
		bool loadLandData(const std::string& landName);
		bool clearLandData();
		uint8 mLandGridRows;
		uint8 mLandGridColumns;
		LandGridList mLandGridList;
		SoldierTroops mSoldierTroops;
		*/
MODEL_TYPECLASS_DECLARE_END 
//// 兵种类型
//enum class SoldierType : uint8
//{
//	Saber = 1	// 步兵
//	,Rider		// 骑兵
//	,Lancer		// 枪兵
//	,Archer		// 弓兵
//	,unused
//};
//// 方向类型
//enum class GridOrientation : uint8
//{
//	topper = 0
//	,lefttop
//	,leftbottom
//	,bottom
//	,rightbottom
//	,righttop
//	,maxnum			// 数量
//};
/* 格子每一列以交错方式排列 0：不可能有东西 1：可以有东西但是不显示格子 2: 显示格子
1,1,2,
0,1,2,
1,0,0,
*/
/*
// 6叉树型结构的单个格子
typedef struct LandTreeGrid
{
	LandTreeGrid();
	virtual ~LandTreeGrid();
	CCPoint getCenter();
	static CCSize Size;
	CCPoint center;
	LandTreeGrid* sideGrids[GridOrientation_maxnum];	// 相邻的格子（6个）
	bool showGrid;
#ifdef TEST_VIEWGRIDS
	CCObject* gridView;
#endif
}*LandTreeGridPtr;

#pragma pack(push,1)
// 单个部队的格子
struct SoldierTroopsUnitGrid : public LandTreeGrid
{
	SoldierTroopsUnitGrid();
	~SoldierTroopsUnitGrid(){}
	uint8 number;	// 部队编号
	uint8 troopID;	// 所属部队
	SoldierType sType;		// 兵种
	GridOrientation oType;	// 默认朝向
};
typedef std::map<uint8, const SoldierTroopsUnitGrid*> TroopSoldiers;
typedef std::map<uint8, TroopSoldiers> SoldierTroops;
enum class LiveActionType : uint8
{
change = 1		// 切换阵营：			参数1（阵营ID uint8）
,select			// 选中部队：			参数1（部队编号 uint8）
,moveto			// 移动到相邻格子：		参数1（移动格数n uint8） 参数2...参数n（GridOrientation）
,attack			// 攻击某格部队：		参数1（攻击次数n uint8） 参数2...参数n（格子编号 uint16）
,skill			// 技能攻击某格部队：	参数1（攻击次数n uint8） 参数2（技能ID uint16）参数3（格子编号 uint16）...参数n
,unused
};
class ILiveAction
{
public:
virtual LiveActionType type() const = 0;
};
template<LiveActionType typeValue>
class LiveAction : public ILiveAction, public MAKER_ENUM2BTRTTI_TYPE((uint16)typeValue)
{
public:
virtual LiveActionType type() const{ return (LiveActionType)this->eType(); }
};
class LiveActionChange : public LiveAction<LiveActionType::change>
{
public:
LiveActionChange(){ troopID = 0; }
uint8 troopID;
};
class LiveActionSelect : public LiveAction<LiveActionType::select>
{
public:
LiveActionSelect(){ number = 0; }
uint8 number;
};
class LiveActionMoveTo : public LiveAction<LiveActionType::moveto>
{
public:
LiveActionMoveTo(){ to = GridOrientation_maxnum; }
GridOrientation to;
};
class LiveActionAttack : public LiveAction<LiveActionType::attack>
{
public:
LiveActionAttack(){ grid = 0; }
uint16 grid;
};
class LiveActionSkill : public LiveAction<LiveActionType::skill>
{
public:
LiveActionSkill(){ skillID = 0; grid = 0; }
uint16 skillID;
uint16 grid;
};
typedef std::queue<ILiveAction*> LiveActionQueue;
#pragma pack(pop)
*/