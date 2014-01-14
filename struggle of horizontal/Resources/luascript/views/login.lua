function LUALoadLoginView(viewWideh, viewHeight)
	local pLayout = UIHelper:instance():createWidgetFromJsonFile('studioui/LoginView/LoginView.json')
	local layoutSize = pLayout:getContentSize()
	pLayout:setPosition(cc.p((viewWideh-layoutSize.width)/2.0, (viewHeight-layoutSize.height)/2.0))

	local mTopBar = LuaCocoStudioHelper:getChildUIImageViewByName("mTopBar", pLayout)
	local mBottonBar = LuaCocoStudioHelper:getChildUIImageViewByName("mBottonBar", pLayout)

	local pos = mTopBar:getPosition()
	pos.y = pos.y + __LUADeviceOffsetPos.y
	mTopBar:setPosition(pos)
	pos = mBottonBar:getPosition()
	pos.y = pos.y - __LUADeviceOffsetPos.y
	mBottonBar:setPosition(pos)

	return pLayout
end
