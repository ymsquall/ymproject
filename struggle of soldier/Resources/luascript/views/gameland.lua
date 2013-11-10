function LUALoadGameLandView(viewWideh, viewHeight)
	local pLayout = UIHelper:instance():createWidgetFromJsonFile('studioui/GameLand/SOSGameLand_BG.json')
	local layoutSize = pLayout:getContentSize()
	pLayout:setPosition(CCPoint((viewWideh-layoutSize.width)/2.0, (viewHeight-layoutSize.height)/2.0))
	local mMapDragPanel = LuaCocoStudioConversion:getChildUIDragPanelByName("mMapDragPanel", pLayout)
	local mBackButton = LuaCocoStudioConversion:getChildUIButtonByName("mBackButton", pLayout)
	local mDebugText = LuaCocoStudioConversion:getChildUITextAreaByName("mDebugText", pLayout)

	mMapDragPanel:setSize(__LUADeviceWinSize)

	local pos = mMapDragPanel:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x + 4.0
	pos.y = pos.y - __LUADeviceOffsetPos.y
	mMapDragPanel:setPosition(pos)
	pos = mBackButton:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x
	pos.y = pos.y - __LUADeviceOffsetPos.y
	mBackButton:setPosition(pos)
	pos = mDebugText:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x
	pos.y = pos.y + __LUADeviceOffsetPos.y
	mDebugText:setPosition(pos)

	local innerSize = mMapDragPanel:getInnerContainerSize()
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
	mMapDragPanel:setInnerContainerPosition(centerPos,false)
	return pLayout
end
