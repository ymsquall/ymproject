#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

#define TEST_VIEWGRIDS

enum class SoldierType : uint8
{
	Saber = 1	// 步兵
	,Rider		// 骑兵
	,Lancer		// 枪兵
	,Archer		// 弓兵
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
	,maxnum			// 数量
};
/* 格子每一列以交错方式排列 0：不可能有东西 1：可以有东西但是不显示格子 2: 显示格子
1,1,1,
0,1,1,
1,0,0,
*/
// 6叉树型结构的单个格子
typedef struct LandTreeGrid
{
	LandTreeGrid();
	virtual ~LandTreeGrid();
	static CCSize Size;
	CCPoint center;
	LandTreeGrid* sideGrids[GridOrientation::maxnum];	// 相邻的格子
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
	uint8 number;	// 部队编号
	uint8 troopID;	// 所属部队
	SoldierType sType;		// 兵种
	GridOrientation oType;	// 默认朝向
};
#pragma pack(pop)

// class GameLandModel
MODEL_TYPECLASS_DECLARE_HEADER(GameLand)
	// 添加相应代码
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