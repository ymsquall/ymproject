#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

#define TEST_VIEWGRIDS

// ��������
enum class SoldierType : uint8
{
	Saber = 1	// ����
	,Rider		// ���
	,Lancer		// ǹ��
	,Archer		// ����
	,unused
};
// ��������
enum class GridOrientation : uint8
{
	topper = 0
	,lefttop
	,leftbottom
	,bottom
	,rightbottom
	,righttop
	,maxnum			// ����
};
/* ����ÿһ���Խ���ʽ���� 0���������ж��� 1�������ж������ǲ���ʾ���� 2: ��ʾ����
1,1,2,
0,1,2,
1,0,0,
*/
// 6�����ͽṹ�ĵ�������
typedef struct LandTreeGrid
{
	LandTreeGrid();
	virtual ~LandTreeGrid();
	static CCSize Size;
	CCPoint center;
	LandTreeGrid* sideGrids[GridOrientation::maxnum];	// ���ڵĸ��ӣ�6����
	bool showGrid;
#ifdef TEST_VIEWGRIDS
	CCObject* gridView;
#endif
}*LandTreeGridPtr;

#pragma pack(push,1)
// �������ӵĸ���
struct SoldierTroopsUnitGrid : public LandTreeGrid
{
	SoldierTroopsUnitGrid();
	uint8 number;	// ���ӱ��
	uint8 troopID;	// ��������
	SoldierType sType;		// ����
	GridOrientation oType;	// Ĭ�ϳ���
};
typedef std::map<uint8, const SoldierTroopsUnitGrid*> TroopSoldiers;
typedef std::map<uint8, TroopSoldiers> SoldierTroops;

// ֱ������¼�񣩶������ͣ����ݽṹ������������uint32) �������ͣ�uint8�� ����1...����n
enum class LiveActionType : uint8
{
	change = 1		// �л���Ӫ��			����1����ӪID uint8��
	,select			// ѡ�в��ӣ�			����1�����ӱ�� uint8��
	,moveto			// �ƶ������ڸ��ӣ�		����1���ƶ�����n uint8�� ����2...����n��GridOrientation��
	,attack			// ����ĳ�񲿶ӣ�		����1����������n uint8�� ����2...����n�����ӱ�� uint16��
	,skill			// ���ܹ���ĳ�񲿶ӣ�	����1����������n uint8�� ����2������ID uint16������3�����ӱ�� uint16��...����n
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
	LiveActionMoveTo(){ to = GridOrientation::maxnum; }
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

class GameLandView;
struct ActionStepOveredEventParams;
// class GameLandModel
MODEL_TYPECLASS_DECLARE_HEADER(GameLand)
	// �����Ӧ����
	public:
		typedef std::vector<LandTreeGrid*> LandGridList;

		bool loadLandData(const std::string& landName);
		bool clearLandData();
		bool playAction(const int8* data, uint32 length);
		const SoldierTroopsUnitGrid* getSoldierByTroopAndNumber(uint8 t = 0, uint8 n = 0) const;
		std::string getTroopName() const;

	private:
		void playOneStep(const ILiveAction* action);
		void onActionStepOvered(GameLandView* sender, ActionStepOveredEventParams* args);

		// property
		PROPERTY_DEFINED_SETTER_DEFINED(IsLive, bool, GameLandModel);
		PROPERTY_DEFINED_SETTER_DEFINED(ActiveTroopID, uint8, GameLandModel);
		PROPERTY_DEFINED_SETTER_DEFINED(ActiveSoldierID, uint8, GameLandModel);

	private:
		uint8 mLandGridRows;
		uint8 mLandGridColumns;
		LandGridList mLandGridList;
		SoldierTroops mSoldierTroops;
		LiveActionQueue mLiveActionQueue;
MODEL_TYPECLASS_DECLARE_END 