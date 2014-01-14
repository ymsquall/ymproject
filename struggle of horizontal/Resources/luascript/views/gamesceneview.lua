_LUAGameSceneView = _LUAGameSceneView or {}
_LUAHeroMoveSpeed = 3.0
function LUALoadGameSceneView(self, viewWideh, viewHeight)
	LUALoadGameSceneViewResources()
	_LUAGameSceneView.self = LuaUserDataConversion:toGameSceneView(self)
	_LUAGameSceneView.mTiledMap = CCTMXTiledMap:create("scene0001.tmx")
	_LUAGameSceneView.self:addChild(_LUAGameSceneView.mTiledMap)
	_LUAGameSceneView.mHeroAnim = LUACreateAndPlayArmature("anim.major")
	_LUAGameSceneView.mHeroAnim:getAnimation():setSpeedScale(0.5)
	_LUAGameSceneView.mHeroAnim:setTag(101)
	_LUAGameSceneView.mTiledMap:addChild(_LUAGameSceneView.mHeroAnim)
	_LUAGameSceneView.mTiledMap:reorderChild(_LUAGameSceneView.mHeroAnim, 101)
    _LUAGameSceneView.mUILayer = ccs.UILayer:create()
	_LUAGameSceneView.mUILayer:setTag(201)
    _LUAGameSceneView.self:addChild(_LUAGameSceneView.mUILayer)
	_LUAGameSceneView.mUILayer:setTouchEnabled(true)
	_LUAGameSceneView.mUILayout = ccs.GUIReader:getInstance():widgetFromJsonFile('GameSceneUI.json')
	local layoutSize = _LUAGameSceneView.mUILayout:getContentSize()
	_LUAGameSceneView.mUILayout:setSize(cc.size(viewWideh, viewHeight))
	_LUAGameSceneView.mRightBottomPanel = LuaCocoStudioHelper:getChildLayoutByName("mRightBottomPanel", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mRightBottomPanel:setPosition(cc.p(viewWideh-_LUAGameSceneView.mRightBottomPanel:getContentSize().width, _LUAGameSceneView.mRightBottomPanel:getPosition().y))
	_LUAGameSceneView.mStickLeftBtn = LuaCocoStudioHelper:getChildUIButtonByName("mStickLeftBtn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mStickRightBtn = LuaCocoStudioHelper:getChildUIButtonByName("mStickRightBtn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mJumpBtn = LuaCocoStudioHelper:getChildUIButtonByName("mJumpBtn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mAttackBtn = LuaCocoStudioHelper:getChildUIButtonByName("mAttackBtn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mSkill1Btn = LuaCocoStudioHelper:getChildUIButtonByName("mSkill1Btn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mSkill2Btn = LuaCocoStudioHelper:getChildUIButtonByName("mSkill2Btn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mUILayout:setTag(202)
	_LUAGameSceneView.mUILayer:addWidget(_LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mHeroPlayAttactAnimIndex = 1
	_LUAGameSceneView.mMoveDirection = _LUAGameSceneView.mMoveDirection or 0.0
	_LUAGameSceneView.mMoveSpeedScale = _LUAGameSceneView.mMoveSpeedScale or 0.0
	_LUAGameSceneView.mTouchIndex = -1
	_LUAGameSceneView.mBeAttacking = false
    _LUAGameSceneView.mJumpBtn:addTouchEventListener(function(sender, eventType)
			if eventType == 0 then
				LocalPlayer:instance():jump(25.0)
			end
		end)
    _LUAGameSceneView.mAttackBtn:addTouchEventListener(function(sender, eventType)
			if eventType == 0 then
				local movementName = _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID()
				if movementName ~= 'attack01' and movementName ~= 'attack02' and
					movementName ~= 'beattack01' and movementName ~= 'clobber01' then
					if _LUAGameSceneView.mHeroPlayAttactAnimIndex == 1 then
						_LUAGameSceneView.mHeroAnim:getAnimation():play('attack01')
						_LUAGameSceneView.mHeroPlayAttactAnimIndex = 2
					elseif _LUAGameSceneView.mHeroPlayAttactAnimIndex == 2 then
						_LUAGameSceneView.mHeroAnim:getAnimation():play('attack02')
						_LUAGameSceneView.mHeroPlayAttactAnimIndex = 1
					end
					_LUAGameSceneView.mMoveDirection = 0.0
					_LUAGameSceneView.mMoveSpeedScale = 0.0
					LocalPlayer:instance():move(0.0, 0.0)
				end
			end
		end)
    _LUAGameSceneView.mSkill1Btn:addTouchEventListener(function(sender, eventType)
			if eventType == 0 then
				local localPlayer = LocalPlayer:instance()
				if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= 'assault01' then
					_LUAGameSceneView.mHeroAnim:getAnimation():play('assault01')
				end
				_LUAGameSceneView.mMoveDirection = 0.0
				_LUAGameSceneView.mMoveSpeedScale = 0.0
				localPlayer:move(localPlayer:getFaceNormalX(), 1500.0)
			end
		end)
    _LUAGameSceneView.mSkill2Btn:addTouchEventListener(function(sender, eventType)
			if eventType == 0 then
				LocalPlayer:instance():jump(25.0)
			end
		end)
	return _LUAGameSceneView.mTiledMap
end
-- touchs event
function LUAGameSceneViewTouchesBegan(touchID, x, y)
	if _LUAGameSceneView.mTouchIndex ~= -1 then return false end
	local pos = cc.p(x, y)
	if pos.x < __LUADeviceCenterPos.x then
		_LUAGameSceneView.mTouchMoveBeginPos = pos
		_LUAGameSceneView.mTouchIndex = touchID
		_LUAGameSceneView.mMoveing = false
		return true
	end
	return false
end
function LUAGameSceneViewTouchesMoved(touchID, x, y)
	if touchID == _LUAGameSceneView.mTouchIndex and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "attack01" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "attack02" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "attack03" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "beattack01" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "clobber01" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "death01" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "assault01" then
		local pos = cc.p(x, y)
		local dist = pos.x - _LUAGameSceneView.mTouchMoveBeginPos.x
		if math.abs(dist) > 20.0 then
			local tmpMoveDir = 0
			if _LUAGameSceneView.mMoveing == false then
				if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "run01" then
					_LUAGameSceneView.mHeroAnim:getAnimation():play("run01")
				end
				_LUAGameSceneView.mMoveing = true
			end
			if dist > 0 then
				tmpMoveDir = 1.0
				LuaCocoStudioHelper:setButtonPressState(_LUAGameSceneView.mStickRightBtn)
				LuaCocoStudioHelper:setButtonNormalState(_LUAGameSceneView.mStickLeftBtn)
			else
				tmpMoveDir = -1.0
				LuaCocoStudioHelper:setButtonPressState(_LUAGameSceneView.mStickLeftBtn)
				LuaCocoStudioHelper:setButtonNormalState(_LUAGameSceneView.mStickRightBtn)
			end
			--[[
			local tmpSpeed = 0.0
			if math.abs(dist) < 30.0 then
				tmpSpeed = 0.2
			elseif math.abs(dist) < 40.0 then
				tmpSpeed = 0.3
			elseif math.abs(dist) < 50.0 then
				tmpSpeed = 0.5
			elseif math.abs(dist) < 60.0 then
				tmpSpeed = 0.6
			elseif math.abs(dist) < 80.0 then
				tmpSpeed = 0.8
			elseif math.abs(dist) < 100.0 then
				tmpSpeed = 1.0
			end
			if dist > 100.0 then dist = 100.0 end
			if dist < -100.0 then dist = -100.0 end
			tmpSpeed = math.abs(dist) * 3.0
			--]]
			local tmpSpeed = 300.0
			if _LUAGameSceneView.mMoveSpeedScale ~= tmpSpeed or _LUAGameSceneView.mMoveDirection ~= tmpMoveDir then
				-- set move dist to box2d herobody
				_LUAGameSceneView.mMoveDirection = tmpMoveDir
				_LUAGameSceneView.mMoveSpeedScale = tmpSpeed
				LocalPlayer:instance():move(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
				if _LUAGameSceneView.mMoveDirection > 0.0 then
					LocalPlayer:instance():setFaceNormalX(1.0)
				elseif _LUAGameSceneView.mMoveDirection < 0.0 then
					LocalPlayer:instance():setFaceNormalX(-1.0)
				end
			end
		else
			LuaCocoStudioHelper:setButtonNormalState(_LUAGameSceneView.mStickLeftBtn)
			LuaCocoStudioHelper:setButtonNormalState(_LUAGameSceneView.mStickRightBtn)
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "stand01" then
				_LUAGameSceneView.mHeroAnim:getAnimation():play("stand01")
			end
			_LUAGameSceneView.mMoveing = false
			_LUAGameSceneView.mMoveDirection = 0.0
			_LUAGameSceneView.mMoveSpeedScale = 0.0
			LocalPlayer:instance():move(0.0, 0.0)
		end
		return true
	end
	return false
end
function LUAGameSceneViewTouchesEnded(touchID, x, y)
	if touchID == _LUAGameSceneView.mTouchIndex and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "attack01" and
		_LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "attack02" then
		_LUAGameSceneView.mTouchIndex = -1
		_LUAGameSceneView.mMoveing = false
		_LUAGameSceneView.mMoveDirection = 0.0
		_LUAGameSceneView.mMoveSpeedScale = 0.0
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "stand01" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("stand01")
		end
		LocalPlayer:instance():move(0.0, 0.0)
		LuaCocoStudioHelper:setButtonNormalState(_LUAGameSceneView.mStickLeftBtn)
		LuaCocoStudioHelper:setButtonNormalState(_LUAGameSceneView.mStickRightBtn)
		return true
	end
	return false
end

function LUAGameScenePhysicsHeroHitWall()
	_LUAGameSceneView.mHeroHitWall = true
	_LUAGameSceneView.mMoveDirection = 0.0
	_LUAGameSceneView.mMoveSpeedScale = 0.0
	if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "jumping01" then
		_LUAGameSceneView.mHeroAnim:getAnimation():play("jumping01")
	end
	LocalPlayer:instance():move(0.0, 0.0)
end

function LUAGameSceneViewOnEnter()
	_LUAGameSceneView = _LUAGameSceneView or {}
	local fg1 = _LUAGameSceneView.mTiledMap:getLayer("foreground_01")
	local fg2 = _LUAGameSceneView.mTiledMap:getLayer("foreground_02")
	local background = _LUAGameSceneView.mTiledMap:getLayer("background")
	local fgSize1 = LuaTiledHelper:getTMXLayerImageSize(fg1)
	local fgSize2 = LuaTiledHelper:getTMXLayerImageSize(fg2)
	local fgImageSize = CCSize(fgSize1.width + fgSize2.width, fgSize1.height)
	if fgSize1.height < fgSize2.height then fgImageSize.height = fgSize2.height end
	_LUAGameSceneView.self:screenScrollTo(CCPoint(0, 0--[[fgImageSize.height/2.0--]]))
	_LUAGameSceneView.mOnTickScriptHandlerID = CCDirector:getInstance():getScheduler():scheduleScriptFunc(LUAGameSceneViewOnTick, 0, false)
end

function LUAGameSceneViewOnExit()
	CCDirector:getInstance():getScheduler():unscheduleScriptEntry(_LUAGameSceneView.mOnTickScriptHandlerID)
	_LUAGameSceneView = nil
end

function LUAGameSceneViewOnTick(dt)
	local localPlayer = LocalPlayer:instance()
	local heroPos = localPlayer:getMovedBodyPos()
	_LUAGameSceneView.mHeroAnim:setPositionX(heroPos.x)
	_LUAGameSceneView.mHeroAnim:setPositionY(heroPos.y)
	localPlayer:onCreaturePosChanged(heroPos)
	if nil == LocalPlayer:instance():getHeroBodyContactList() then
		_LUAGameSceneView.mHeroHitWall = false
		LocalPlayer:instance():setIsHeroDorping(true)
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "jumping01" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("jumping01")
		end
	else
		if LocalPlayer:instance():getIsHeroDorping() then
			local animName = 'stand01'
			if math.abs(_LUAGameSceneView.mMoveDirection) > 0.001 then
				animName = 'run01'
			end
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= animName then
				_LUAGameSceneView.mHeroAnim:getAnimation():play(animName)
			end
		end
		LocalPlayer:instance():setIsHeroDorping(false)
	end
	-- auto scroll map
	local animPos = cc.p(_LUAGameSceneView.mHeroAnim:getPositionX(), _LUAGameSceneView.mHeroAnim:getPositionY())
	local mapPos = cc.p(_LUAGameSceneView.mTiledMap:getPositionX(), _LUAGameSceneView.mTiledMap:getPositionY())
	local offset = cc.p(animPos.x + mapPos.x, animPos.y + mapPos.y)
	offset.x = offset.x - __LUADeviceHelfWinSize.width
	offset.y = offset.y - __LUADeviceHelfWinSize.height
	if offset.x < -100 then
		mapPos.x = (mapPos.x - (offset.x + 100.0)) - __LUADeviceHelfWinSize.width
	elseif offset.x > 100 then
		mapPos.x = (mapPos.x - (offset.x - 100.0)) - __LUADeviceHelfWinSize.width
	else
		mapPos.x = mapPos.x - __LUADeviceHelfWinSize.width
	end
	if offset.y < -30 then
		mapPos.y = (mapPos.y - (offset.y + 180.0)) - __LUADeviceHelfWinSize.height
	elseif offset.y > 100 then
		mapPos.y = (mapPos.y - (offset.y - 100.0)) - __LUADeviceHelfWinSize.height
	else
		mapPos.y = mapPos.y - __LUADeviceHelfWinSize.height
	end
	_LUAGameSceneView.self:screenScrollTo(CCPoint(mapPos.x, mapPos.y))
	-- monster tick
	LUAGameSceneView_Monster_Tick(dt)
end

print('game scene view loaded')
