function LUALoadGameLandView(viewWideh, viewHeight)
	local pLayout = UIHelper:instance():createWidgetFromJsonFile('studioui/GameLandView/GameLandView.ExportJson')
	local layoutSize = pLayout:getContentSize()
	pLayout:setPosition(CCPoint((viewWideh-layoutSize.width)/2.0, (viewHeight-layoutSize.height)/2.0));


	return pLayout
end
