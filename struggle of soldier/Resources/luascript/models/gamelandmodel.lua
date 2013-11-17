--格子每一列以交错方式排列 0：不可能有东西 1：可以有东西但是不显示格子 2: 显示格子
--部队朝向：上=0，左上=1，左下=2，下=3，右下=4，右上=5
--兵种：步兵=1，骑兵=2，枪兵=3，弓兵=4
_LUALandGridSize = CCSize(120, 60)
_LUALandGrids = {}
_LUALandGrids['hlg'] =
{
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--1
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--2
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--3
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--4
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--5
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--6
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--7
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--8
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--9
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--10
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--11
	0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,0,0,0,	--12
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--13
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--14
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,	--15
	--阵营:{阵型1，阵营2，...阵营n}
	['troops'] = { --部队信息:{格子编号，部队初始朝向，兵种}
		[1] = {
			{131,5,2},
			{150,5,1},{151,5,1},{152,5,2},
			{170,5,1},{171,5,1},{172,5,2},
			{190,5,1},{191,5,1},{192,5,2},
			{211,5,2}
		},
		[2] = {
			{115,2,2},
			{135,2,1},
			{154,2,2},{155,2,1},{156,2,1},
			{174,2,2},{175,2,1},{176,2,1},
			{195,2,1},{196,2,1},
			{215,2,2}
		}
	},
	--格子数
	['rows'] = 15,
	['columns'] = 20,
}

LUALog("game land model required")
