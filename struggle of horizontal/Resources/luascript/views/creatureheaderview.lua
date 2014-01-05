_LUACreatureHeaderViewList = _LUACreatureHeaderViewList or {}
function LUALoadCreatureHeaderView(viewWideh, viewHeight, self)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(self)
	_LUACreatureHeaderViewList[pCreatureHeaderView] = {
		mLayer = ccs.UILayer:create(),
		mProgressBar = ccs.UILoadingBar:create(),
		mProgressBG = ccs.UIImageView:create(),
		mNameLabel = ccs.UILabel:create(),
		--mHPShowLabel = ccs.UILabel:create(),
		mMaxHP = 8000.0,
		mNowHP = 8000.0,
	}
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	pView.mProgressBar:setName("ProgressBar")
	pView.mProgressBG:setName("ProgressBG")
	pView.mNameLabel:setName("NameLabel")
	--pView.mHPShowLabel:setName("HPShowLabel")

    pView.mProgressBar:loadTexture("image/progress01_bar.png")
    pView.mProgressBG:loadTexture("image/progress01_bg.png")

	pView.mProgressBar:setScale9Enabled(true)
	pView.mProgressBar:setCapInsets(cc.rect(7, 4, 116, 5))
	pView.mProgressBar:setSize(cc.size(140, 12))
	pView.mProgressBar:setPercent(100)

	pView.mProgressBG:setScale9Enabled(true)
	pView.mProgressBG:setSize(cc.size(150, 20))

    pView.mNameLabel:setFontSize(30)
	pView.mNameLabel:setColor(cc.c3b(0, 255, 0))
    --pView.mHPShowLabel:setFontSize(14)
	--pView.mHPShowLabel:setColor(cc.c3b(255, 0, 0))

	pView.mProgressBar:setPosition(cc.p(0,221))
	pView.mProgressBG:setPosition(cc.p(0,220))
	pView.mNameLabel:setPosition(cc.p(0,250))
	--pView.mHPShowLabel:setPosition(cc.p(0,220))

	pView.mLayer:addWidget(pView.mProgressBG)
	pView.mLayer:addWidget(pView.mProgressBar)
	pView.mLayer:addWidget(pView.mNameLabel)
	--pView.mLayer:addWidget(pView.mHPShowLabel)

	return pView.mLayer
end

function LUACreatureHeaderView_NameTextChanged(view, name)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature name changeing, can not find creature header view!')
		return
	end
	pView.mNameLabel:setText(name)
end
function LUACreatureHeaderView_NameTextColorChanged(view,r,g,b)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature name color changeing, can not find creature header view!')
		return
	end
	pView.mNameLabel:setColor(cc.c3b(r,g,b))
end
function LUACreatureHeaderView_HPTextChanged(view, text)
	--[[
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature hp text changeing, can not find creature header view!')
		return
	end
	pView.mHPShowLabel:setText(text)
	--]]
end
function LUACreatureHeaderView_HPTextColorChanged(view,r,g,b)
	--[[
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature hp text color changeing, can not find creature header view!')
		return
	end
	pView.mHPShowLabel:setColor(cc.c3b(r,g,b))
	--]]
end

function LUACreatureHeaderView_NowHPChanged(view, hp)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature hp changeing, can not find creature header view!')
		return
	end
	pView.mNowHP = hp
	local percent = pView.mNowHP / pView.mMaxHP
	if percent < 0.03 then
		pView.mProgressBar:setVisible(false)
	else
		pView.mProgressBar:setVisible(true)
		pView.mProgressBar:setPercent(percent*100)
	end
end

function LUACreatureHeaderView_MaxHPChanged(view, maxHP)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature max hp changeing, can not find creature header view!')
		return
	end
	pView.mMaxHP = maxHP
	local percent = pView.mNowHP / pView.mMaxHP
	pView.mProgressBar:setPercent(percent*100)
end

function LUACreatureHeaderView_VisibleChanged(view, visible)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature header view visible changeing, can not find creature header view!')
		return
	end
	pView.mLayer:setVisible(visible)
end

function LUACreatureHeaderView_PositionChanged(view, posX, posY)
	local pCreatureHeaderView = LuaUserDataConversion:toCreatureHeaderView(view)
	local pView = _LUACreatureHeaderViewList[pCreatureHeaderView]
	if pView == nil then
		error('creature header view position changeing, can not find creature header view!')
		return
	end
	local uiLayer = LuaCocoStudioConversion:toUILayer(view)
	uiLayer:setPosition(cc.p(posX, posY))
end
