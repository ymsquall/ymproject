#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

#define TEST_VIEWGRIDS

enum class SoldierType : uint8
{
	Saber = 1	// ����
	,Rider		// ���
	,Lancer		// ǹ��
	,Archer		// ����
	,unused
};
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
1,1,1,
0,1,1,
1,0,0,
*/
// 6�����ͽṹ�ĵ�������
typedef struct LandTreeGrid
{
	LandTreeGrid();
	virtual ~LandTreeGrid();
	static CCSize Size;
	CCPoint center;
	LandTreeGrid* sideGrids[GridOrientation::maxnum];	// ���ڵĸ���
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
#pragma pack(pop)

// class GameLandModel
MODEL_TYPECLASS_DECLARE_HEADER(GameLand)
	// �����Ӧ����
	public:
		typedef std::vector<LandTreeGridPtr> LandGridList;

		bool loadLandData(const std::string& landName);
		bool clearLandData();
		const LandGridList& getLandGridList() const;

	private:

	private:
		uint8 mLandGridRows;
		uint8 mLandGridColumns;
		LandGridList mLandGridList;
MODEL_TYPECLASS_DECLARE_END 