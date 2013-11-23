_LUAGameSceneView = _LUAGameSceneView or {}
function LUALoadGameSceneView(self, viewWideh, viewHeight)
	LUALoadGameSceneViewResources()
	_LUAGameSceneView.self = LuaUserDataConversion:toGameSceneView(self)
	_LUAGameSceneView.mTiledMap = CCTMXTiledMap:create("scene0001.tmx")
	_LUAGameSceneView.self:addChild(_LUAGameSceneView.mTiledMap)
	_LUAGameSceneView.mHeroAnim = LUACreateAndPlayArmature("hero_animations", -1, 0, 0, 0, 1, 1)
	_LUAGameSceneView.mHeroAnim:setTag(101)
	_LUAGameSceneView.self:addChild(_LUAGameSceneView.mHeroAnim)
	--_LUAGameSceneView.self:reorderChild(_LUAGameSceneView.mHeroAnim, 101)
	_LUAGameSceneView.mHeroAnim:getAnimation():play('run')
	return _LUAGameSceneView.mTiledMap
end

function LUAGameSceneViewOnEnter()
	_LUAGameSceneView = _LUAGameSceneView or {}
	local foreground = _LUAGameSceneView.mTiledMap:getLayer("foreground")
	local fgImageSize = LuaTiledHelper:getTMXLayerImageSize(foreground)
	_LUAGameSceneView.self:screenScrollTo(CCPoint(0, fgImageSize.height/2.0))
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
