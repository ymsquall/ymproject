_LUAGameLandView = nil or _LUAGameLandView
function LUALoadGameLandView(viewWideh, viewHeight)
	_LUAGameLandView = {}
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
	return _LUAGameLandView.mLayout
end

function LUALoadLandGridView(gridData)
	local pGrid = LuaUserDataConversion:toLandTreeGrid(gridData)
	local bkSize = _LUAGameLandView.mMapBGImageView:getSize()
	local centerPos = pGrid:getCenter()
	local realPos = CCPoint(centerPos.x - bkSize.width/2.0-2.0, centerPos.y - bkSize.height/2.0)
	local pGridImage = nil
	if pGrid.showGrid == true then
		if _LUAGameLandView.mGridRenderList == nil then _LUAGameLandView.mGridRenderList = {} end
		pGridImage = LUACreateUIImageView("picture/land/grid25d.png", realPos.x, realPos.y)
		_LUAGameLandView.mGridRenderList[pGrid] = pGridImage
		_LUAGameLandView.mMapBGImageView:addChild(pGridImage)
	end
	local pTroopGrid = LuaUserDataConversion:toSoldierTroopsUnitGrid(pGrid)
	if nil ~= pTroopGrid then
		if _LUAGameLandView.mAnimeList == nil then _LUAGameLandView.mAnimeList = {} end
		local pAnime = LUACreateSoldierAnimationWithTypeAndOrientation(pTroopGrid.sType, pTroopGrid.oType, realPos.x, realPos.y)
		local pAnimeNode = LuaUserDataConversion:toNode(pAnime)
		_LUAGameLandView.mAnimeList[pTroopGrid] = pAnime
		_LUAGameLandView.mMapBGImageView:addRenderer(pAnimeNode, 1)
	end
	return pGridImage
end

function LUAGameLandView_doLiveChanged(view, isLive)
	_LUAGameLandView.mMapDragPanel:setTouchEnable(false)
end

function LUAGameLandView_doTroopChanged(view, troopName)

end

function LUAGameLandView_doSelectGrid(view, gridNum)

end

