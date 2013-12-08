_LUAGameSceneView = _LUAGameSceneView or {}
_LUAHeroMoveSpeed = 3.0
function LUALoadGameSceneView(self, viewWideh, viewHeight)
	LUALoadGameSceneViewResources()
	_LUAGameSceneView.self = LuaUserDataConversion:toGameSceneView(self)
	_LUAGameSceneView.mTiledMap = CCTMXTiledMap:create("scene0001.tmx")
	_LUAGameSceneView.self:addChild(_LUAGameSceneView.mTiledMap)
	_LUAGameSceneView.mHeroAnim = LUACreateAndPlayArmature("hero_animations")
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
    _LUAGameSceneView.mJumpBtn:addTouchEventListener(function(sender, eventType)
			if eventType == 2 then
				local physics = _LUAGameSceneView.self:getPhysics()
				physics:jump(25.0)
			end
		end)
    _LUAGameSceneView.mAttackBtn:addTouchEventListener(function(sender, eventType)
			print('mAttackBtn touch ended')
			if eventType == 2 then
				if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "attack" or _LUAGameSceneView.mHeroAnim:getAnimation():isComplete() then
					_LUAGameSceneView.mHeroAnim:getAnimation():play('attack')
				end
			end
		end)

	_LUAGameSceneView.mMoveDirection = _LUAGameSceneView.mMoveDirection or 0.0
	_LUAGameSceneView.mMoveSpeedScale = _LUAGameSceneView.mMoveSpeedScale or 0.0
	-- touchs event
	local function onTouchesBegan(tableArray)
		local index = 1
		local pos = cc.p(tableArray[1], tableArray[2])
		if pos.x < __LUADeviceCenterPos.x then
			_LUAGameSceneView.mTouchMoveBeginPos = pos
			_LUAGameSceneView.mTouchIndex = index
			_LUAGameSceneView.mMoveing = false
			_LUAGameSceneView.mMoveStickBG:setPosition(cc.p(pos.x - 30, pos.y - 65))
			_LUAGameSceneView.mMoveStickBG:setVisible(true)
		end
		_LUAGameSceneView.self:onTouchBegan(CCPoint(tableArray[1], tableArray[2]))
		return true
	end
	local function onTouchesMoved(tableArray)
		if nil ~= _LUAGameSceneView.mTouchIndex then
			local pos = cc.p(tableArray[1], tableArray[2])
			local dist = pos.x - _LUAGameSceneView.mTouchMoveBeginPos.x
			if math.abs(dist) > 20.0 then
				local tmpMoveDir = 0
				if _LUAGameSceneView.mMoveing == false then
					if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "run" then
						_LUAGameSceneView.mHeroAnim:getAnimation():play("run")
					end
					_LUAGameSceneView.mMoveing = true
				end
				if dist > 0 then
					tmpMoveDir = 1.0
				else
					tmpMoveDir = -1.0
				end
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
				if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "loading" then
					_LUAGameSceneView.mHeroAnim:getAnimation():play("loading")
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
		else
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "loading" then
				_LUAGameSceneView.mHeroAnim:getAnimation():play("loading")
			end
			_LUAGameSceneView.self:getPhysics():changeMoveDirection(0.0, 0.0)
		end
		_LUAGameSceneView.self:onTouchMoved(CCPoint(tableArray[1], tableArray[2]))
		return false
	end
	local function onTouchesEnded(tableArray)
		local index = 1
		if index == _LUAGameSceneView.mTouchIndex then
			_LUAGameSceneView.mTouchIndex = nil
			_LUAGameSceneView.mMoveing = false
			_LUAGameSceneView.mMoveDirection = 0.0
			_LUAGameSceneView.mMoveSpeedScale = 0.0
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "loading" then
				_LUAGameSceneView.mHeroAnim:getAnimation():play("loading")
			end
			_LUAGameSceneView.self:getPhysics():changeMoveDirection(0.0, 0.0)
			_LUAGameSceneView.mMoveStickBG:setVisible(false)
			_LUAGameSceneView.mMoveStick:setPosition(cc.p(0, 0))
			_LUAGameSceneView.mMoveStickShowing:setPosition(cc.p(0, 0))
		end
		_LUAGameSceneView.self:onTouchEnded(CCPoint(tableArray[1], tableArray[2]))
		return true
    end
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

	return _LUAGameSceneView.mTiledMap
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
		physics:setIsHeroDorping(true)
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "loading" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("loading")
		end
	else
		if physics:getIsHeroDorping() and math.abs(_LUAGameSceneView.mMoveDirection) > 0.001 then
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "run" then
				_LUAGameSceneView.mHeroAnim:getAnimation():play("run")
			end
		end
		physics:setIsHeroDorping(false)
	end
end

print('game scene view loaded')
