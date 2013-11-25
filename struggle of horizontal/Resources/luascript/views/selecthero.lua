function LUALoadSelectHeroView(viewWideh, viewHeight)
	local pLayout = UIHelper:instance():createWidgetFromJsonFile('studioui/SelectHeroView/SelectHeroView.json')
	local layoutSize = pLayout:getContentSize()
	pLayout:setPosition(cc.p((viewWideh-layoutSize.width)/2.0, (viewHeight-layoutSize.height)/2.0));

	local mHeroHeadScrollView = LuaCocoStudioConversion:getChildUIScrollViewByName("mHeroHeadScrollView", pLayout)
	local mTitleTextBar = LuaCocoStudioConversion:getChildUIImageViewByName("mTitleTextBar", pLayout)
	local mBottomBar = LuaCocoStudioConversion:getChildUIImageViewByName("mBottomBar", pLayout)

	local pos = mTitleTextBar:getPosition()
	pos.x = pos.x - __LUADeviceOffsetPos.x
	pos.y = pos.y + __LUADeviceOffsetPos.y
	mTitleTextBar:setPosition(pos)
	pos = mBottomBar:getPosition()
	pos.y = pos.y - __LUADeviceOffsetPos.y
	mBottomBar:setPosition(pos)

	local pHeadImage1 = LUACreateUIImageView("picture/heroface/2160-1.png")
	local pHeadImage2 = LUACreateUIImageView("picture/heroface/2105-1.png")
	local pHeadImage3 = LUACreateUIImageView("picture/heroface/2161-1.png")
	local pHeadImage4 = LUACreateUIImageView("picture/heroface/15-1.png")
	local pHeadImage5 = LUACreateUIImageView("picture/heroface/667-1.png")
	local pHeadImage6 = LUACreateUIImageView("picture/heroface/531-1.png")

	local headSize = pHeadImage1:getContentSize()
	local pos = cc.p(headSize.width/2.0 + 20, headSize.height/2.0 + 7.0)
	pHeadImage1:setPosition(pos)
	pos.x = pos.x + headSize.width + 20
	pHeadImage2:setPosition(pos)
	pos.x = pos.x + headSize.width + 20
	pHeadImage3:setPosition(pos)
	pos.x = pos.x + headSize.width + 20
	pHeadImage4:setPosition(pos)
	pos.x = pos.x + headSize.width + 20
	pHeadImage5:setPosition(pos)
	pos.x = pos.x + headSize.width + 20
	pHeadImage6:setPosition(pos)

	mHeroHeadScrollView:addChild(pHeadImage1)
	mHeroHeadScrollView:addChild(pHeadImage2)
	mHeroHeadScrollView:addChild(pHeadImage3)
	mHeroHeadScrollView:addChild(pHeadImage4)
	mHeroHeadScrollView:addChild(pHeadImage5)
	mHeroHeadScrollView:addChild(pHeadImage6)

	local innerSize = CCSize(headSize.width+pos.x-headSize.width/2.0+20, headSize.height)
	mHeroHeadScrollView:setInnerContainerSize(innerSize)

	return pLayout
end
