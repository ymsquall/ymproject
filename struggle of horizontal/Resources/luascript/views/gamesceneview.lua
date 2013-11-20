_LUAGameSceneView = _LUAGameSceneView or {}
function LUALoadGameSceneView(self, viewWideh, viewHeight)
	LUALoadGameSceneViewResources()
	_LUAGameSceneView.self = LuaUserDataConversion:toGameSceneView(self)
	local map = CCTMXTiledMap:create("scene0001.tmx")
	map:setScale(0.5)
	_LUAGameSceneView.mTiledMap = map
	_LUAGameSceneView.self:addChild(map)
	return _LUAGameSceneView.mTiledMap
end

function LUAGameSceneViewOnEnter()
	_LUAGameSceneView = _LUAGameSceneView or {}
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
