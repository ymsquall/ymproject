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
		end
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
					if dist > 0 then
						tmpMoveDir = 1.0
						_LUAGameSceneView.mHeroAnim:setRotationY(0)
					else
						tmpMoveDir = -1.0
						_LUAGameSceneView.mHeroAnim:setRotationY(180)
					end
					_LUAGameSceneView.mMoveing = true
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
				if _LUAGameSceneView.mMoveSpeedScale ~= tmpSpeed or _LUAGameSceneView.mMoveDirection ~= tmpMoveDir then
					-- set move dist to box2d herobody
					_LUAGameSceneView.mMoveDirection = tmpMoveDir
					_LUAGameSceneView.mMoveSpeedScale = tmpSpeed
				end
			else
				if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "loading" then
					_LUAGameSceneView.mHeroAnim:getAnimation():play("loading")
				end
				_LUAGameSceneView.mMoveing = false
				_LUAGameSceneView.mMoveDirection = 0.0
				_LUAGameSceneView.mMoveSpeedScale = 0.0
			end
		else
			if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "loading" then
				_LUAGameSceneView.mHeroAnim:getAnimation():play("loading")
			end
		end
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
		end
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
end

print('game scene view loaded')
