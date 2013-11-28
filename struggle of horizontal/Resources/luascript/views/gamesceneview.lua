_LUAGameSceneView = _LUAGameSceneView or {}
function LUALoadGameSceneView(self, viewWideh, viewHeight)
	LUALoadGameSceneViewResources()
	_LUAGameSceneView.self = LuaUserDataConversion:toGameSceneView(self)
	_LUAGameSceneView.mTiledMap = CCTMXTiledMap:create("scene0001.tmx")
	_LUAGameSceneView.self:addChild(_LUAGameSceneView.mTiledMap)
	_LUAGameSceneView.mHeroAnim = LUACreateAndPlayArmature("hero_animations")
	_LUAGameSceneView.mHeroAnim:getAnimation():setSpeedScale(0.4)
	_LUAGameSceneView.mHeroAnim:setTag(101)
	_LUAGameSceneView.mTiledMap:addChild(_LUAGameSceneView.mHeroAnim)
	_LUAGameSceneView.mTiledMap:reorderChild(_LUAGameSceneView.mHeroAnim, 101)
	--[[
	    local function onTouchesEnded(tableArray)
        local x,y = tableArray[1],tableArray[2]
        local armature = self._hero._mount and self._hero._mount  or self._hero
        if x < armature:getPositionX() then
            armature:setScaleX(-1)
        else
            armature:setScaleX(1)
        end

        local move = cc.MoveTo:create(2, cc.p(x,y))
        armature:stopAllActions()
        armature:runAction(cc.Sequence:create(move))
    end

    local function onTouch(eventType, tableArray)
        if eventType == "ended" then
            return onTouchesEnded(tableArray)
        end
    end

    self:registerScriptTouchHandler(onTouch,true)
	--]]
	return _LUAGameSceneView.mTiledMap
end

function LUAGameSceneViewOnEnter()
	_LUAGameSceneView = _LUAGameSceneView or {}
	local foreground = _LUAGameSceneView.mTiledMap:getLayer("foreground")
	local background = _LUAGameSceneView.mTiledMap:getLayer("background")
	--background:setVisible(false)
	--foreground:setVisible(false)
	local fgImageSize = LuaTiledHelper:getTMXLayerImageSize(foreground)
	_LUAGameSceneView.self:screenScrollTo(CCPoint(0, 0--[[fgImageSize.height/2.0--]]))
	_LUAGameSceneView.mOnTickScriptHandlerID = CCDirector:getInstance():getScheduler():scheduleScriptFunc(LUAGameSceneViewOnTick, 0, false)
end

function LUAGameSceneViewOnExit()
	CCDirector:getInstance():getScheduler():unscheduleScriptEntry(_LUAGameSceneView.mOnTickScriptHandlerID)
	_LUAGameSceneView = nil
end

function LUAGameSceneViewOnTick(dt)
	--local dragPos = _LUAGameSceneView.mMapDragPanel:getInnerContainerPosition()
	--_LUAGameSceneView.mSelectTroopID = _LUAGameSceneView.mSelectTroopID or -1
	--local posText = string.format("(%d)[%.02f, %.02f]", _LUAGameSceneView.mSelectTroopID, dragPos.x, dragPos.y)
	--_LUAGameSceneView.mDebugText:setText(posText)
end
