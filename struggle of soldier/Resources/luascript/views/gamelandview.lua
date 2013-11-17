_LUAGameLandView =_LUAGameLandView or {}
function LUALoadGameLandView(self, viewWideh, viewHeight)
	_LUAGameLandView.self = self
	_LUAGameLandView.mLayout = UIHelper:instance():createWidgetFromJsonFile('studioui/GameLand/SOSGameLand_BG.json')
	local layoutSize = _LUAGameLandView.mLayout:getContentSize()
	_LUAGameLandView.mLayout:setPosition(CCPoint((viewWideh-layoutSize.width)/2.0, (viewHeight-layoutSize.height)/2.0))
	_LUAGameLandView.mMapDragPanel = LuaCocoStudioConversion:getChildUIDragPanelByName("mMapDragPanel", _LUAGameLandView.mLayout)
	_LUAGameLandView.mBackButton = LuaCocoStudioConversion:getChildUIButtonByName("mBackButton", _LUAGameLandView.mLayout)
	_LUAGameLandView.mDebugText = LuaCocoStudioConversion:getChildUITextAreaByName("mDebugText", _LUAGameLandView.mLayout)
	_LUAGameLandView.mMapBGImageView = LuaCocoStudioConversion:getChildUIImageViewByName("mMapBGImageView", _LUAGameLandView.mLayout)
	_LUAGameLandView.mMapBGPanel = LuaCocoStudioConversion:getChildLayoutByName("mMapBGPanel", _LUAGameLandView.mLayout)
	_LUAGameLandView.mMapDragPanel:setSize(__LUADeviceWinSize)

	local pos = _LUAGameLandView.mMapDragPanel:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x + 4.0
	pos.y = pos.y - __LUADeviceOffsetPos.y
	_LUAGameLandView.mMapDragPanel:setPosition(pos)
	pos = _LUAGameLandView.mBackButton:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x
	pos.y = pos.y - __LUADeviceOffsetPos.y
	_LUAGameLandView.mBackButton:setPosition(pos)
	pos = _LUAGameLandView.mDebugText:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x
	pos.y = pos.y + __LUADeviceOffsetPos.y
	_LUAGameLandView.mDebugText:setPosition(pos)

	local imageSize = _LUAGameLandView.mMapBGImageView:getSize()
	local innerSize = CCSize(imageSize.width, imageSize.height)
	_LUAGameLandView.mMapDragPanel:setInnerContainerSize(innerSize)
	if innerSize.width > __LUADeviceWinSize.width then
		innerSize.width = innerSize.width - __LUADeviceWinSize.width
	else
		innerSize.width = __LUADeviceWinSize.width - innerSize.width
	end
	if innerSize.height > __LUADeviceWinSize.height then
		innerSize.height = innerSize.height - __LUADeviceWinSize.height
	else
		innerSize.height = __LUADeviceWinSize.height - innerSize.height
	end
	local centerPos = CCPoint(-innerSize.width/2.0, -innerSize.height/2.0)
	_LUAGameLandView.mMapDragPanel:setInnerContainerPosition(centerPos,false)
	local imageBgPos = CCPoint(innerSize.width/2.0 + (__LUADeviceWinSize.width - imageSize.width)/2.0, innerSize.height/2.0 + (__LUADeviceWinSize.height - imageSize.height)/2.0)
	_LUAGameLandView.mMapBGPanel:setPosition(imageBgPos)
	_LUAGameLandView.mLastSelectedGrids = {}
	_LUAGameLandView.mLastSelectedGrids.target = {}

	return _LUAGameLandView.mLayout
end

function LUAGameLandViewOnEnter()
	_LUAGameLandView = _LUAGameLandView or {}
	_LUAGameLandView.mOnTickScriptHandlerID = CCDirector:getInstance():getScheduler():scheduleScriptFunc(LUAGameLandViewOnTick, 0, false)
end

function LUAGameLandViewOnExit()
	CCDirector:getInstance():getScheduler():unscheduleScriptEntry(_LUAGameLandView.mOnTickScriptHandlerID)
	_LUAGameLandView = nil
end

function LUAGameLandViewOnTick(dt)
	local dragPos = _LUAGameLandView.mMapDragPanel:getInnerContainerPosition()
	_LUAGameLandView.mSelectTroopID = _LUAGameLandView.mSelectTroopID or -1
	local posText = string.format("(%d)[%.02f, %.02f]", _LUAGameLandView.mSelectTroopID, dragPos.x, dragPos.y)
	_LUAGameLandView.mDebugText:setText(posText)
end

function LUALoadLandGridView(view, gridData)
	local bkSize = _LUAGameLandView.mMapBGImageView:getSize()
	local centerPos = gridData['center']
	local realPos = CCPoint(centerPos.x - bkSize.width/2.0, centerPos.y - bkSize.height/2.0)
	local pGridImage = nil
	if gridData['show'] == 2 then
		_LUAGameLandView.mGridRenderList = _LUAGameLandView.mGridRenderList or {}
		pGridImage = LUACreateUIImageView("picture/land/grid25d.png", realPos.x, realPos.y)
		_LUAGameLandView.mGridRenderList[gridData] = pGridImage
		_LUAGameLandView.mMapBGImageView:addChild(pGridImage)
        pGridImage:registerScriptTouchHandler(LUAGridImageTouchHandler)
        pGridImage:setTouchEnabled(true)
	end
	_LUAGameLandView.mAnimeList = _LUAGameLandView.mAnimeList or {}
	if gridData['data'] ~= nil then
		local pAnime = LUACreateSoldierAnimationWithTypeAndOrientation(gridData['data'].sType, gridData['data'].oType, realPos.x, realPos.y)
		local pAnimeNode = LuaUserDataConversion:toNode(pAnime)
		_LUAGameLandView.mAnimeList[gridData] = pAnime
		_LUAGameLandView.mMapBGImageView:addRenderer(pAnimeNode, 1)
	end
	return pGridImage
end

function LUAGridImageTouchHandler(eventType, sender, x, y)
	function onTouchBegan(sender, x, y)
	end
	function onTouchMoved(sender, x, y)
	end
	function onTouchEnded(sender, x, y)
		if _LUAGameLandView.mLastSelectedGrids.c ~= nil then _LUAGameLandView.mLastSelectedGrids.c:setColor(Color3B(255,255,255)) end
		if _LUAGameLandView.mLastSelectedGrids.t ~= nil then _LUAGameLandView.mLastSelectedGrids.t:setColor(Color3B(255,255,255)) end
		if _LUAGameLandView.mLastSelectedGrids.lt ~= nil then _LUAGameLandView.mLastSelectedGrids.lt:setColor(Color3B(255,255,255)) end
		if _LUAGameLandView.mLastSelectedGrids.lb ~= nil then _LUAGameLandView.mLastSelectedGrids.lb:setColor(Color3B(255,255,255)) end
		if _LUAGameLandView.mLastSelectedGrids.b ~= nil then _LUAGameLandView.mLastSelectedGrids.b:setColor(Color3B(255,255,255)) end
		if _LUAGameLandView.mLastSelectedGrids.rb ~= nil then _LUAGameLandView.mLastSelectedGrids.rb:setColor(Color3B(255,255,255)) end
		if _LUAGameLandView.mLastSelectedGrids.rt ~= nil then _LUAGameLandView.mLastSelectedGrids.rt:setColor(Color3B(255,255,255)) end
		for _,v in pairs(_LUAGameLandView.mLastSelectedGrids.target) do
			v:setColor(Color3B(255,255,255))
		end
		_LUAGameLandView.mLastSelectedGrids.target = {}

		local pImgaeView = LuaCocoStudioConversion:toUIImageView(sender)
		pImgaeView:setColor(Color3B(255,255,0));
		_LUAGameLandView.mLastSelectedGrids.c = pImgaeView
		for k,v in pairs(_LUAGameLandView.mGridRenderList) do
			if v == pImgaeView then
				local sideIndex = k['side']
				local gridData = _LUASelectedLandGridDatas.grids[sideIndex[GridOrientation_topper]]
				_LUAGameLandView.mLastSelectedGrids.t = _LUAGameLandView.mGridRenderList[gridData]
				gridData = _LUASelectedLandGridDatas.grids[sideIndex[GridOrientation_lefttop]]
				_LUAGameLandView.mLastSelectedGrids.lt = _LUAGameLandView.mGridRenderList[gridData]
				gridData = _LUASelectedLandGridDatas.grids[sideIndex[GridOrientation_leftbottom]]
				_LUAGameLandView.mLastSelectedGrids.lb = _LUAGameLandView.mGridRenderList[gridData]
				gridData = _LUASelectedLandGridDatas.grids[sideIndex[GridOrientation_bottom]]
				_LUAGameLandView.mLastSelectedGrids.b = _LUAGameLandView.mGridRenderList[gridData]
				gridData = _LUASelectedLandGridDatas.grids[sideIndex[GridOrientation_rightbottom]]
				_LUAGameLandView.mLastSelectedGrids.rb = _LUAGameLandView.mGridRenderList[gridData]
				gridData = _LUASelectedLandGridDatas.grids[sideIndex[GridOrientation_righttop]]
				_LUAGameLandView.mLastSelectedGrids.rt = _LUAGameLandView.mGridRenderList[gridData]
				if _LUAGameLandView.mLastSelectedGrids.t ~= nil then _LUAGameLandView.mLastSelectedGrids.t:setColor(Color3B(255,0,255)) end
				if _LUAGameLandView.mLastSelectedGrids.lt ~= nil then _LUAGameLandView.mLastSelectedGrids.lt:setColor(Color3B(255,0,255)) end
				if _LUAGameLandView.mLastSelectedGrids.lb ~= nil then _LUAGameLandView.mLastSelectedGrids.lb:setColor(Color3B(255,0,255)) end
				if _LUAGameLandView.mLastSelectedGrids.b ~= nil then _LUAGameLandView.mLastSelectedGrids.b:setColor(Color3B(255,0,255)) end
				if _LUAGameLandView.mLastSelectedGrids.rb ~= nil then _LUAGameLandView.mLastSelectedGrids.rb:setColor(Color3B(255,0,255)) end
				if _LUAGameLandView.mLastSelectedGrids.rt ~= nil then _LUAGameLandView.mLastSelectedGrids.rt:setColor(Color3B(255,0,255)) end
				LUAGameLandView_moveGridToCenter(k['center'])
				break
			end
		end
	end
	if eventType == "began" then
		--print('LUAGridImageTouchHandler began: '..x..', '..y)
		return onTouchBegan(sender, x, y)
	elseif eventType == "moved" then
		--print('LUAGridImageTouchHandler moved: '..x..', '..y)
		return onTouchMoved(sender, x, y)
	else
		--print('LUAGridImageTouchHandler ended: '..x..', '..y)
		return onTouchEnded(sender, x, y)
	end
end

function LUAGameLandView_moveGridToCenter(gridCenter, anim)
	if anim == nil then anim = true end
	local startPos = _LUAGameLandView.mMapDragPanel:getInnerContainerPosition()
	local imageBgPos = _LUAGameLandView.mMapBGPanel:getPosition()
	local gridWorldPos = CCPoint(imageBgPos.x + gridCenter.x, imageBgPos.y + gridCenter.y)
	local innerPos = CCPoint(-(gridWorldPos.x - __LUADeviceWinSize.width/2.0), -(gridWorldPos.y - __LUADeviceWinSize.height/2.0))
	print('start('..startPos.x..','..startPos.y..') end('..innerPos.x..','..innerPos.y..')')
	_LUAGameLandView.mMapDragPanel:setInnerContainerPosition(innerPos,anim)
end

function LUALUAGameLandView_PlayStruggleBegining()
	print('struggle playing begining')
	_LUAGameLandView.mMapDragPanel:setTouchEnable(false)
end
function LUALUAGameLandView_PlayStruggleEnded()
	print('struggle playing ended')
	_LUAGameLandView.mMapDragPanel:setTouchEnable(true)
end


function LUAGameLandView_doLiveChanged(view, isLive)
	--[[
	if isLive == true then
		_LUAGameLandView.mDebugText:setVisible(false)
	else
		_LUAGameLandView.mDebugText:setVisible(true)
	end
	--]]
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
	local bkSize = _LUAGameLandView.mMapBGImageView:getSize()
	local beginPos = CCPoint(nowGridData['center'].x - bkSize.width/2.0, nowGridData['center'].y - bkSize.height/2.0)
	local endPos = CCPoint(toGridData['center'].x - bkSize.width/2.0, toGridData['center'].y - bkSize.height/2.0)
	local act1 = CCMoveTo:create(2, endPos)
	local act2 = CCCallFunc:create(function()
			if _LUAGameLandView.mLastSelectedGrids.c ~= nil then _LUAGameLandView.mLastSelectedGrids.c:setColor(Color3B(255,255,255)) end
			local gridImage = _LUAGameLandView.mGridRenderList[toGridData]
			gridImage:setColor(Color3B(255,255,0))
			_LUAGameLandView.mLastSelectedGrids.c = gridImage
		end)
	local act3 = CCDelayTime:create(0.2)
	local act4 = CCCallFunc:create(function()
			print('move action ended')
			local troopsData = _LUASelectedLandGridDatas.grids[nowGridNumber]['data']
			_LUASelectedLandGridDatas.grids[toGridNimber]['data'] = troopsData
			_LUASelectedLandGridDatas.grids[nowGridNumber]['data'] = {}
			_LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID] = toGridNimber
			_LUAGameLandView.mAnimeList[toGridData] = soldierView
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	actList:addObject(act3)
	actList:addObject(act4)
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
	LUAGameLandView_moveGridToCenter(targetGridData['center'])

	for _,v in pairs(_LUAGameLandView.mLastSelectedGrids.target) do
		v:setColor(Color3B(255,255,255))
	end
	_LUAGameLandView.mLastSelectedGrids.target = {}
	targetGridView:setColor(Color3B(255,0,0))
	table.insert(_LUAGameLandView.mLastSelectedGrids.target, targetGridView)

	local act1 = CCDelayTime:create(1)
	local act2 = CCCallFunc:create(function()
			print('attack action ended')
			LUAPlayStruggleRecordOneStep(view)
		end)
	local actList = CCArray:create()
	actList:addObject(act1)
	actList:addObject(act2)
	view:runAction(CCSequence:create(actList))
end

function LUAGameLandView_doSkillToGrid(view, skillID, gridNumber)
	print('skill action starting')
	local nowGridNumber = _LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][_LUAGameLandView.mSelectSoldierID]
	local nowGridData = _LUASelectedLandGridDatas.grids[nowGridNumber]
	local targetGridData = _LUASelectedLandGridDatas.grids[gridNumber]
	local targetGridView = _LUAGameLandView.mGridRenderList[targetGridData]LUAGameLandView_moveGridToCenter(targetGridData['center'])

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
