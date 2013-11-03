#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

// 6叉树型结构的格子
typedef struct LandTreeGrid
{
	LandTreeGrid();
	~LandTreeGrid();
	static CCSize Size;
	CCPoint center;
	LandTreeGrid* leftTop;
	LandTreeGrid* leftBottom;
	LandTreeGrid* rightTop;
	LandTreeGrid* rightBottom;
	LandTreeGrid* top;
	LandTreeGrid* bottom;
	CCObject* gridView;
	bool testShowBing;

}*LandTreeGridPTR;
/* 格子每一列以交错方式排列 0：没有格子 1：有格子
1,1,1,
0,1,1,
1,0,0,
*/
// class GameLandModel
MODEL_TYPECLASS_DECLARE_HEADER(GameLand)
	// 添加相应代码
	public:
		typedef std::vector<LandTreeGridPTR> LandGridList;

		bool loadLandData(const std::string& landName);
		bool clearLandData();
		const LandGridList& getLandGridList() const;

	private:

	private:
		uint8 mLandGridRows;
		uint8 mLandGridColumns;
		LandGridList mLandGridList;
MODEL_TYPECLASS_DECLARE_END 