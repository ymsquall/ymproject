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
	_LUAGameSceneView.mUILayout = ccs.GUIReader:getInstance():widgetFromJsonFile('Operations/Operations.json')
	local layoutSize = _LUAGameSceneView.mUILayout:getContentSize()
	_LUAGameSceneView.mUILayout:setPosition(cc.p((viewWideh-layoutSize.width)/2.0, (viewHeight-layoutSize.height)/2.0))
	_LUAGameSceneView.mMoveStickBG = LuaCocoStudioConversion:getChildUIImageViewByName("mMoveStickBG", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mMoveStick = LuaCocoStudioConversion:getChildUIImageViewByName("mMoveStick", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mMoveStickBGShowing = LuaCocoStudioConversion:getChildUIImageViewByName("mMoveStickBGShowing", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mMoveStickShowing = LuaCocoStudioConversion:getChildUIImageViewByName("mMoveStickShowing", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mJumpBtn = LuaCocoStudioConversion:getChildUIButtonByName("mJumpBtn", _LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mAttackBtn = LuaCocoStudioConversion:getChildUIButtonByName("mAttackBtn", _LUAGameSceneView.mUILayout)
	local oBtntnPos = _LUAGameSceneView.mJumpBtn:getPosition()
	_LUAGameSceneView.mJumpBtn:setPosition(cc.p(oBtntnPos.x + __LUADeviceOffsetPos.x, oBtntnPos.y - __LUADeviceOffsetPos.y))
	oBtntnPos = _LUAGameSceneView.mAttackBtn:getPosition()
	_LUAGameSceneView.mAttackBtn:setPosition(cc.p(oBtntnPos.x + __LUADeviceOffsetPos.x, oBtntnPos.y - __LUADeviceOffsetPos.y))
	oBtntnPos = _LUAGameSceneView.mMoveStickBGShowing:getPosition()
	_LUAGameSceneView.mMoveStickBGShowing:setPosition(cc.p(oBtntnPos.x - __LUADeviceOffsetPos.x, oBtntnPos.y - __LUADeviceOffsetPos.y))
	_LUAGameSceneView.mUILayout:setTag(202)
	_LUAGameSceneView.mUILayer:addWidget(_LUAGameSceneView.mUILayout)
	_LUAGameSceneView.mMoveStickBG:setVisible(false)
	_LUAGameSceneView.mHeroPlayAttactAnimIndex = 1
	_LUAGameSceneView.mMoveDirection = _LUAGameSceneView.mMoveDirection or 0.0
	_LUAGameSceneView.mMoveSpeedScale = _LUAGameSceneView.mMoveSpeedScale or 0.0
	_LUAGameSceneView.mTouchIndex = -1
    _LUAGameSceneView.mJumpBtn:addTouchEventListener(function(sender, eventType)
			if eventType == 0 then
				local physics = _LUAGameSceneView.self:getPhysics()
				physics:jump(25.0)
			end
		end)
    _LUAGameSceneView.mAttackBtn:addTouchEventListener(function(sender, eventType)
			if eventType == 0 then
				local movementName = _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID()
				if movementName ~= 'attack01' and movementName ~= 'attack02' then
					if _LUAGameSceneView.mHeroPlayAttactAnimIndex == 1 then
						_LUAGameSceneView.mHeroAnim:getAnimation():play('attack01')
						_LUAGameSceneView.mHeroPlayAttactAnimIndex = 2
					elseif _LUAGameSceneView.mHeroPlayAttactAnimIndex == 2 then
						_LUAGameSceneView.mHeroAnim:getAnimation():play('attack02')
						_LUAGameSceneView.mHeroPlayAttactAnimIndex = 1
					end
				end
			end
		end)
	--[[
    _LUAGameSceneView.self:registerScriptTouchHandler(function(eventType, tableArray)
			if eventType == "began" then
				return onTouchesBegan(tableArray)
			elseif eventType == "moved" then
				return onTouchesMoved(tableArray)
			elseif eventType == "ended" then
				return onTouchesEnded(tableArray)
			end
			return false
		end,true)
	--]]

	return _LUAGameSceneView.mTiledMap
end

function LUAGameSceneViewAttackAnimEnded()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
        _LUAGameSceneView.mHeroAnim:getAnimation():play('stand01')
    else
        _LUAGameSceneView.mHeroAnim:getAnimation():play('run01')
    end
end
-- touchs event
function LUAGameSceneViewTouchesBegan(touchID, x, y)
	if _LUAGameSceneView.mTouchIndex ~= -1 then return false end
	local pos = cc.p(x, y)
	if pos.x < __LUADeviceCenterPos.x then
		_LUAGameSceneView.mTouchMoveBeginPos = pos
		_LUAGameSceneView.mTouchIndex = touchID
		_LUAGameSceneView.mMoveing = false
		_LUAGameSceneView.mMoveStickBG:setPosition(cc.p(pos.x - 30, pos.y - 65))
		_LUAGameSceneView.mMoveStickBG:setVisible(true)
		return true
	end
	return false
end
function LUAGameSceneViewTouchesMoved(touchID, x, y)
	if touchID == _LUAGameSceneView.mTouchIndex then
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
			else
				tmpMoveDir = -1.0
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
				_LUAGameSceneView.self:getPhysics():changeMoveDirection(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
				if _LUAGameSceneView.mMoveDirection > 0.0 then
					_LUAGameSceneView.mHeroAnim:setRotationY(0)
				elseif _LUAGameSceneView.mMoveDirection < 0.0 then
					_LUAGameSceneView.mHeroAnim:setRotationY(180)
				end
			end
		else
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "stand01" then
				_LUAGameSceneView.mHeroAnim:getAnimation():play("stand01")
			end
			_LUAGameSceneView.mMoveing = false
			_LUAGameSceneView.mMoveDirection = 0.0
			_LUAGameSceneView.mMoveSpeedScale = 0.0
			_LUAGameSceneView.self:getPhysics():changeMoveDirection(0.0, 0.0)
		end
		local distY = pos.y - _LUAGameSceneView.mTouchMoveBeginPos.y
		if distY > 100 then distY = 100 end
		if distY < -100 then distY = -100 end
		_LUAGameSceneView.mMoveStick:setPosition(cc.p(dist, distY))
		_LUAGameSceneView.mMoveStickShowing:setPosition(cc.p(dist, distY))
		return true
    --[[
	else
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "stand" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("stand")
		end
		_LUAGameSceneView.self:getPhysics():changeMoveDirection(0.0, 0.0)
    --]]
	end
	return false
end
function LUAGameSceneViewTouchesEnded(touchID, x, y)
	if touchID == _LUAGameSceneView.mTouchIndex then
		_LUAGameSceneView.mTouchIndex = -1
		_LUAGameSceneView.mMoveing = false
		_LUAGameSceneView.mMoveDirection = 0.0
		_LUAGameSceneView.mMoveSpeedScale = 0.0
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "stand01" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("stand01")
		end
		_LUAGameSceneView.self:getPhysics():changeMoveDirection(0.0, 0.0)
		_LUAGameSceneView.mMoveStickBG:setVisible(false)
		_LUAGameSceneView.mMoveStick:setPosition(cc.p(0, 0))
		_LUAGameSceneView.mMoveStickShowing:setPosition(cc.p(0, 0))
		return true
	end
	return false
end

function LUAGameScenePhysicsHeroHitWall()
	--_LUAGameSceneView.mTouchIndex = -1
	--_LUAGameSceneView.mMoveing = false
	_LUAGameSceneView.mHeroHitWall = true
	_LUAGameSceneView.mMoveDirection = 0.0
	_LUAGameSceneView.mMoveSpeedScale = 0.0
	if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "jumping01" then
		_LUAGameSceneView.mHeroAnim:getAnimation():play("jumping01")
	end
	_LUAGameSceneView.self:getPhysics():changeMoveDirection(0.0, 0.0)
	--_LUAGameSceneView.mMoveStickBG:setVisible(false)
	--_LUAGameSceneView.mMoveStick:setPosition(cc.p(0, 0))
	--_LUAGameSceneView.mMoveStickShowing:setPosition(cc.p(0, 0))
end

function LUAGameSceneViewOnEnter()
	_LUAGameSceneView = _LUAGameSceneView or {}
	local foreground = _LUAGameSceneView.mTiledMap:getLayer("foreground")
	local background = _LUAGameSceneView.mTiledMap:getLayer("background")
	local fgImageSize = LuaTiledHelper:getTMXLayerImageSize(foreground)
	_LUAGameSceneView.self:screenScrollTo(CCPoint(0, 0--[[fgImageSize.height/2.0--]]))
	_LUAGameSceneView.mOnTickScriptHandlerID = CCDirector:getInstance():getScheduler():scheduleScriptFunc(LUAGameSceneViewOnTick, 0, false)
end

function LUAGameSceneViewOnExit()
	CCDirector:getInstance():getScheduler():unscheduleScriptEntry(_LUAGameSceneView.mOnTickScriptHandlerID)
	_LUAGameSceneView = nil
end

function LUAGameSceneViewOnTick(dt)
	local physics = _LUAGameSceneView.self:getPhysics()
	local heroPos = physics:getHeroBodyPos()
	_LUAGameSceneView.mHeroAnim:setPositionX(heroPos.x)
	_LUAGameSceneView.mHeroAnim:setPositionY(heroPos.y)

	if nil == physics:getHeroBodyContactList() then
		_LUAGameSceneView.mHeroHitWall = false
		physics:setIsHeroDorping(true)
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "jumping01" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("jumping01")
		end
	else
		if physics:getIsHeroDorping() then
			local animName = 'stand01'
			if math.abs(_LUAGameSceneView.mMoveDirection) > 0.001 then
				animName = 'run01'
			end
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= animName then
				_LUAGameSceneView.mHeroAnim:getAnimation():play(animName)
			end
		end
		physics:setIsHeroDorping(false)
	end
end

print('game scene view loaded')
