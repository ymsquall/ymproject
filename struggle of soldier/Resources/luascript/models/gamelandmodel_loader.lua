_LUASelectedLandGridDatas = _LUASelectedLandGridDatas or {}

function LUAGameLandLoadDataWithMapName(pModel, mapName)
	local pGameLandModel = LuaUserDataConversion:toGameLandModle(pModel)
	local pView = pGameLandModel:luaGetViewBinding()
	_LUASelectedLandGridDatas = {}
	_LUASelectedLandGridDatas.troopDatas = {}
	_LUASelectedLandGridDatas.name = mapName
	local troops = _LUALandGrids[mapName]['troops']
	local troopDatas = {}
	for id,troop in pairs(troops) do
		troopDatas[id] = {}
		_LUASelectedLandGridDatas.troopDatas[id] = {}
		for i,unit in pairs(troop) do
			troopDatas[unit[1]] = { troopID = id, oType = unit[2], sType = unit[3] }
			_LUASelectedLandGridDatas.troopDatas[id][i] = unit[1]
		end
	end
	local mLandGridRows = _LUALandGrids[mapName]['rows']
	local mLandGridColumns = _LUALandGrids[mapName]['columns']
	local count = mLandGridRows*mLandGridColumns
	local helfOff = CCPoint(_LUALandGridSize.width/2.0, _LUALandGridSize.height/2.0);
	local offsetPos = CCPoint(mLandGridColumns * helfOff.x / 2.0, mLandGridRows * (helfOff.y + helfOff.y/2.0));
	_LUASelectedLandGridDatas.grids = {}
	for j = 0,mLandGridColumns-1,1 do
		for i = 0,mLandGridRows-1,1 do
			local nowIndex = i * mLandGridColumns + j
			if _LUALandGrids[mapName][nowIndex+1] > 0 then
				_LUASelectedLandGridDatas.grids[nowIndex+1] = {
					['show'] = _LUALandGrids[mapName][nowIndex+1],
					['data'] = troopDatas[nowIndex+1],
					['center'] = nil,
					['side'] = {}
				}
				local topIndex = (i - 1) * mLandGridColumns + j
				local bottomIndex = (i + 1) * mLandGridColumns + j
				local ltIndex = -1, lbIndex, rtIndex, rbIndex
				local rowOff = j * helfOff.x
				local colOff = (mLandGridRows - 1) * _LUALandGridSize.height - i * helfOff.y + j * helfOff.y
				if (j % 2) == 0 then
					ltIndex = (i + 1) * mLandGridColumns + (j - 1)
					lbIndex = i * mLandGridColumns + (j - 1)
					rtIndex = (i + 1) * mLandGridColumns + (j + 1)
					rbIndex = i * mLandGridColumns + (j + 1)
					_LUASelectedLandGridDatas.grids[nowIndex+1]['center'] = CCPoint(i * helfOff.x + rowOff - offsetPos.x, colOff + helfOff.y - offsetPos.y)
				else
					ltIndex = i * mLandGridColumns + (j - 1);
					lbIndex = (i - 1) * mLandGridColumns + (j - 1);
					rtIndex = i * mLandGridColumns + (j + 1);
					rbIndex = (i - 1) * mLandGridColumns + (j + 1);
					_LUASelectedLandGridDatas.grids[nowIndex+1]['center'] = CCPoint(i * helfOff.x + rowOff - offsetPos.x - helfOff.x/2.0, colOff + helfOff.y - offsetPos.y + helfOff.y/2.0)
				end
				if j == 0 then
					ltIndex = -1
					lbIndex = -1
				end
				if j == mLandGridColumns-1 then
					rtIndex = -1
					rbIndex = -1
				end
				if topIndex >= 0 and topIndex < count then
					_LUASelectedLandGridDatas.grids[nowIndex+1]['side'][GridOrientation_topper] = topIndex+1
				end
				if bottomIndex >= 0 and bottomIndex < count then
					_LUASelectedLandGridDatas.grids[nowIndex+1]['side'][GridOrientation_bottom] = bottomIndex+1
				end
				if ltIndex >= 0 and ltIndex < count then
					_LUASelectedLandGridDatas.grids[nowIndex+1]['side'][GridOrientation_lefttop] = ltIndex+1
				end
				if lbIndex >= 0 and lbIndex < count then
					_LUASelectedLandGridDatas.grids[nowIndex+1]['side'][GridOrientation_leftbottom] = lbIndex+1
				end
				if rtIndex >= 0 and rtIndex < count then
					_LUASelectedLandGridDatas.grids[nowIndex+1]['side'][GridOrientation_righttop] = rtIndex+1
				end
				if rbIndex >= 0 and rbIndex < count then
					_LUASelectedLandGridDatas.grids[nowIndex+1]['side'][GridOrientation_rightbottom] = rbIndex+1
				end
				LUALoadLandGridView(pView, _LUASelectedLandGridDatas.grids[nowIndex+1])
			end
		end
	end
end

function LUAGameLandModelOnFinalize()
	_LUASelectedLandGridDatas = nil
end

