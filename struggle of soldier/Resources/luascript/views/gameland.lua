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

	mMapDragPanel:setInnerContainerPosition(CCPoint(-568,-384),true)

	return pLayout
end
