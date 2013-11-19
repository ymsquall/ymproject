-- 负责动画播放的表现展示
-- 动作类型(actionType): 1 = 01.dj 2 = 02.yd 3 = 03.bj 4 = 04.gj 5 = 05.sw
function LUAGameLandGetSoldierFullAnimName(orientation, actionType)
	local orient
	if GridOrientation_topper == orientation then
		orient = 'top_'
	elseif GridOrientation_lefttop == orientation then
		orient = 'lefttop_'
	elseif GridOrientation_leftbottom == orientation then
		orient = 'leftbottom_'
	elseif GridOrientation_bottom == orientation then
		orient = 'bottom_'
	elseif GridOrientation_rightbottom == orientation then
		orient = 'rightbottom_'
	elseif GridOrientation_righttop == orientation then
		orient = 'righttop_'
	elseif GridOrientation_left == orientation then
		orient = 'left_'
	elseif GridOrientation_right == orientation then
		orient = 'right_'
	end
	local actionName
	if 1 == actionType then
		solder = '01.dj'
	elseif 2 == actionType then
		solder = '02.yd'
	elseif 3 == actionType then
		solder = '03.bj'
	elseif 4 == actionType then
		solder = '04.gj'
	elseif 5 == actionType then
		solder = '05.sw'
	end
	return orient..actionName
end

function LUAGameLandView_PlayStruggleBegining(isLive)
	print('struggle playing begining')
	--[[
	if isLive == true then
		_LUAGameLandView.mDebugText:setVisible(false)
	else
		_LUAGameLandView.mDebugText:setVisible(true)
	end
	--]]
	_LUAGameLandView.mMapDragPanel:setTouchEnable(false)
end

function LUAGameLandView_doTroopChanged(view, troopID)
	print('changed action starting')
	_LUAGameLandView.mSelectTroopID = troopID
	local act1 = CCDelayTime:create(1)
	local act2 = CCCallFunc:create(function()
			print('changed action ended')
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	view:runAction(CCSequence:create(actList))
end

function LUAGameLandView_doSelectGrid(view, soldierID)
	print('select action starting')
	_LUAGameLandView.mSelectSoldierID = soldierID
	local gridNumber = _LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID]
	if _LUAGameLandView.mLastSelectedGrids.c ~= nil then _LUAGameLandView.mLastSelectedGrids.c:setColor(Color3B(255,255,255)) end
	local gridData = _LUASelectedLandGridDatas.grids[gridNumber]
	local gridImage = _LUAGameLandView.mGridRenderList[gridData]
	gridImage:setColor(Color3B(255,255,0));
	_LUAGameLandView.mLastSelectedGrids.c = gridImage
	LUAGameLandView_moveGridToCenter(gridData['center'])
	local act1 = CCDelayTime:create(1)
	local act2 = CCCallFunc:create(function()
			print('select action ended')
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	view:runAction(CCSequence:create(actList))
end

function LUAGameLandView_doMoveStep(view, oType)
	print('move action starting')
	local nowGridNumber = _LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID]
	local nowGridData = _LUASelectedLandGridDatas.grids[nowGridNumber]
	local toGridNimber = nowGridData['side'][oType]
	local toGridData = _LUASelectedLandGridDatas.grids[toGridNimber]
	local soldierView = _LUAGameLandView.mAnimeList[nowGridData]
	soldierView:getAnimation():play('02.yd')
	local bkSize = _LUAGameLandView.mMapBGImageView:getSize()
	local beginPos = CCPoint(nowGridData['center'].x - bkSize.width/2.0, nowGridData['center'].y - bkSize.height/2.0)
	local endPos = CCPoint(toGridData['center'].x - bkSize.width/2.0, toGridData['center'].y - bkSize.height/2.0)
	local act1 = CCDelayTime:create(0.2)
	local act2 = CCCallFunc:create(function()
		end)
	local act3 = CCMoveTo:create(1.7, endPos)
	local act4 = CCCallFunc:create(function()
			if _LUAGameLandView.mLastSelectedGrids.c ~= nil then _LUAGameLandView.mLastSelectedGrids.c:setColor(Color3B(255,255,255)) end
			local gridImage = _LUAGameLandView.mGridRenderList[toGridData]
			gridImage:setColor(Color3B(255,255,0))
			_LUAGameLandView.mLastSelectedGrids.c = gridImage
		end)
	local act5 = CCDelayTime:create(0.1)
	local act6 = CCCallFunc:create(function()
			print('move action ended')
			local troopsData = _LUASelectedLandGridDatas.grids[nowGridNumber]['data']
			_LUASelectedLandGridDatas.grids[toGridNimber]['data'] = troopsData
			_LUASelectedLandGridDatas.grids[nowGridNumber]['data'] = {}
			_LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID] = toGridNimber
			_LUAGameLandView.mAnimeList[toGridData] = soldierView
			soldierView:getAnimation():play('01.dj')
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	actList:addObject(act3)
	actList:addObject(act4)
	actList:addObject(act5)
	actList:addObject(act6)
	soldierView:runAction(CCSequence:create(actList))
	--local actF = CCSequence:create(actList)
	--CCDirector:getInstance():getActionManager():addAction(actF, gridImage, false)
end

function LUAGameLandView_doAttackToGrid(view, troopID, soldierID)
	print('attack action starting')
	local nowGridNumber = _LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID]
	local nowGridData = _LUASelectedLandGridDatas.grids[nowGridNumber]
	local targetGridNumber = _LUASelectedLandGridDatas.troopDatas[troopID][soldierID]
	local targetGridData = _LUASelectedLandGridDatas.grids[targetGridNumber]
	local targetGridView = _LUAGameLandView.mGridRenderList[targetGridData]
	local soldierView = _LUAGameLandView.mAnimeList[nowGridData]
	local targetSoldierView = _LUAGameLandView.mAnimeList[targetGridData]
	local pBeAttackedEffect = nil
	--LUAGameLandView_moveGridToCenter(nowGridData['center'])

	for _,v in pairs(_LUAGameLandView.mLastSelectedGrids.target) do
		v:setColor(Color3B(255,255,255))
	end
	_LUAGameLandView.mLastSelectedGrids.target = {}
	targetGridView:setColor(Color3B(255,0,0))
	table.insert(_LUAGameLandView.mLastSelectedGrids.target, targetGridView)
	-- a攻击b
	local act1 = CCDelayTime:create(0.2)
	local act2 = CCCallFunc:create(function()
			soldierView:getAnimation():play('04.gj')
		end)
	local act3 = CCDelayTime:create(0.5)
	local act4 = CCCallFunc:create(function()
			local effectPos = CCPoint(targetSoldierView:getPositionX(), targetSoldierView:getPositionY())
			pBeAttackedEffect = LUACreateAndPlayArmature('beattacked', 0, effectPos.x, effectPos.y)
			local effectNode = LuaUserDataConversion:toNode(pBeAttackedEffect)
			_LUAGameLandView.mMapBGImageView:addRenderer(effectNode, 2)
			targetSoldierView:getAnimation():play('03.bj')
		end)
	local act5 = CCDelayTime:create(1)
	local act6 = CCCallFunc:create(function()
			soldierView:getAnimation():play('01.dj')
			targetSoldierView:getAnimation():play('01.dj')
			pBeAttackedEffect:getParent():removeChild(pBeAttackedEffect, true)
		end)
	-- b反击a
	local act7 = CCDelayTime:create(0.3)
	local act8 = CCCallFunc:create(function()
			targetSoldierView:getAnimation():play('04.gj')
		end)
	local act9 = CCDelayTime:create(0.5)
	local act10 = CCCallFunc:create(function()
			local effectPos = CCPoint(soldierView:getPositionX(), soldierView:getPositionY())
			pBeAttackedEffect = LUACreateAndPlayArmature('beattacked', 0, effectPos.x, effectPos.y)
			local effectNode = LuaUserDataConversion:toNode(pBeAttackedEffect)
			_LUAGameLandView.mMapBGImageView:addRenderer(effectNode, 2)
			soldierView:getAnimation():play('03.bj')
		end)
	local act11 = CCDelayTime:create(1)
	local act12 = CCCallFunc:create(function()
			print('attack action ended')
			soldierView:getAnimation():play('01.dj')
			targetSoldierView:getAnimation():play('01.dj')
			pBeAttackedEffect:getParent():removeChild(pBeAttackedEffect, true)
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	actList:addObject(act3)
	actList:addObject(act4)
	actList:addObject(act5)
	actList:addObject(act6)
	actList:addObject(act7)
	actList:addObject(act8)
	actList:addObject(act9)
	actList:addObject(act10)
	actList:addObject(act11)
	actList:addObject(act12)
	view:runAction(CCSequence:create(actList))
end

function LUAGameLandView_doSkillToGrid(view, skillID, gridNumber)
	print('skill action starting')
	local nowGridNumber = _LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID]
	local nowGridData = _LUASelectedLandGridDatas.grids[nowGridNumber]
	local targetGridData = _LUASelectedLandGridDatas.grids[gridNumber]
	local targetGridView = _LUAGameLandView.mGridRenderList[targetGridData]
	--LUAGameLandView_moveGridToCenter(targetGridData['center'])

	for _,v in pairs(_LUAGameLandView.mLastSelectedGrids.target) do
		v:setColor(Color3B(255,255,255))
	end
	_LUAGameLandView.mLastSelectedGrids.target = {}
	targetGridView:setColor(Color3B(255,0,0))
	table.insert(_LUAGameLandView.mLastSelectedGrids.target, targetGridView)

	local act1 = CCDelayTime:create(1)
	local act2 = CCCallFunc:create(function()
			print('skill action ended')
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	view:runAction(CCSequence:create(actList))
end

function LUAGameLandView_PlayStruggleEnded()
	print('struggle playing ended')
	_LUAGameLandView.mMapDragPanel:setTouchEnable(true)
end
