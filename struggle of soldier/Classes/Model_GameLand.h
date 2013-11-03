#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;

// 6�����ͽṹ�ĸ���
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
/* ����ÿһ���Խ���ʽ���� 0��û�и��� 1���и���
1,1,1,
0,1,1,
1,0,0,
*/
// class GameLandModel
MODEL_TYPECLASS_DECLARE_HEADER(GameLand)
	// �����Ӧ����
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