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

	local innerSize = _LUAGameLandView.mMapDragPanel:getInnerContainerSize()
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
	_LUAGameLandView.mLastSelectedGrids = {}

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
	local realPos = CCPoint(centerPos.x - bkSize.width/2.0-2.0, centerPos.y - bkSize.height/2.0)
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
	local pAnime = LUACreateSoldierAnimationWithTypeAndOrientation(gridData['data'].sType, gridData['data'].oType, realPos.x, realPos.y)
	local pAnimeNode = LuaUserDataConversion:toNode(pAnime)
	_LUAGameLandView.mAnimeList[gridData] = pAnime
	_LUAGameLandView.mMapBGImageView:addRenderer(pAnimeNode, 1)
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

function LUAGameLandView_doLiveChanged(view, isLive)
	--[[
	if isLive == true then
		_LUAGameLandView.mDebugText:setVisible(false)
	else
		_LUAGameLandView.mDebugText:setVisible(true)
	end
	--]]
	--_LUAGameLandView.mMapDragPanel:setTouchEnable(false)
end

function LUAGameLandView_doTroopChanged(view, troopID)
	_LUAGameLandView.mSelectTroopID = troopID
end

function LUAGameLandView_doSelectGrid(view, soldierID)
	_LUAGameLandView.mSelectSoldierID = soldierID
	local gridNumber = _LUASelectedLandGridDatas.troopDatas[_LUAGameLandView.mSelectTroopID][soldierID]
	if _LUAGameLandView.mLastSelectedGrids.c ~= nil then _LUAGameLandView.mLastSelectedGrids.c:setColor(Color3B(255,255,255)) end
	local gridData = _LUASelectedLandGridDatas.grids[gridNumber]
	local gridImage = _LUAGameLandView.mGridRenderList[gridData]
	gridImage:setColor(Color3B(255,255,0));
	_LUAGameLandView.mLastSelectedGrids.c = gridImage
	local innerSize = _LUAGameLandView.mMapDragPanel:getInnerContainerSize()
	local innerPos = CCPoint(gridData['center'].x - innerSize.width/2.0, gridData['center'].y - innerSize.height/2.0)
	print(tostring(_LUAGameLandView.mSelectTroopID)..', '..soldierID..', '..gridNumber..'('..gridData['center'].x..','..gridData['center'].y..')'..'('..innerSize.width..','..innerSize.height..')'..
		'('..innerPos.x..','..innerPos.y..')')
	_LUAGameLandView.mMapDragPanel:setInnerContainerPosition(innerPos,true);
end

