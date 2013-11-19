_LUAGameLandView =_LUAGameLandView or {}
function LUALoadGameLandView(self, viewWideh, viewHeight)
	LUALoadGameLandViewResources()
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
		pAnime:getAnimation():play('01.dj')
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
