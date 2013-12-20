_LUAWin32KeyboardInfo = _LUAWin32KeyboardInfo or {}
_LUAWin32MouseInfo = _LUAWin32MouseInfo or {}
function LUAOnWin32KeyDownMsgProc(key)
	if _LUAGameSceneView == nil or _LUAGameSceneView.self == nil then return false end
	if VK_UP == key then _LUAGameSceneView.self:screenScroll(CCPoint(0, -10)) end
	if VK_DOWN == key then _LUAGameSceneView.self:screenScroll(CCPoint(0, 10)) end
	if VK_LEFT == key then _LUAGameSceneView.self:screenScroll(CCPoint(-10, 0)) end
	if VK_RIGHT == key then _LUAGameSceneView.self:screenScroll(CCPoint(10, 0)) end
	if VK_1 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('stand01') end
	if VK_2 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('run01') end
	if VK_3 == key or VK_SPACE == key then _LUAGameSceneView.self:getPhysics():jump(25.0) end
	if VK_4 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('attack01') end
	if VK_5 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('attack02') end
	if VK_W == key then end
	if VK_S == key then end
	if VK_A == key or VK_D == key then
		if VK_A == key then _LUAGameSceneView.mMoveDirection = -1 _LUAGameSceneView.mHeroAnim:setRotationY(180) else _LUAGameSceneView.mMoveDirection = 1 _LUAGameSceneView.mHeroAnim:setRotationY(0) end
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "run01" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("run01")
		end
		_LUAGameSceneView.mMoveSpeedScale = 300
		_LUAGameSceneView.self:getPhysics():changeMoveDirection(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
	end
	if VK_F9 == key then
		ViewModelManager:reloadLuaScript("luascript/debug/win32handler.lua")
		ViewModelManager:reloadLuaScript("luascript/luautility.lua")
		ViewModelManager:reloadLuaScript("luascript/toolkit.lua")
		ViewModelManager:reloadLuaScript("luascript/models/gamescenemodel.lua")
		ViewModelManager:reloadLuaScript("luascript/models/gamescenemodel_loader.lua")
		ViewModelManager:reloadLuaScript("luascript/models/playstruggle_var01.lua")
		ViewModelManager:reloadLuaScript("luascript/views/helper.lua")
		ViewModelManager:reloadLuaScript("luascript/views/login.lua")
		ViewModelManager:reloadLuaScript("luascript/views/selecthero.lua")
		ViewModelManager:reloadLuaScript("luascript/views/gamesceneview.lua")
		ViewModelManager:reloadLuaScript("luascript/views/gamesceneview_playing.lua")
	end
end

function LUAOnWin32KeyUpMsgProc(key)
	if VK_A == key or VK_D == key then
		_LUAGameSceneView.mMoveDirection = 0
		_LUAGameSceneView.mMoveSpeedScale = 0
		_LUAGameSceneView.self:getPhysics():changeMoveDirection(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
		if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= "stand01" then
			_LUAGameSceneView.mHeroAnim:getAnimation():play("stand01")
		end
	end
end

function LUAOnWin32CharMsgProc(char)
end

function LUAOnWin32MouseLeftDown(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseLeftUp(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseLeftDBClick(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseRightDown(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseRightUp(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseRightDBClick(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseMiddleDown(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseMiddleUp(wp, lp, hiwp, lowp, hilp, lolp)
	if _LUAGameSceneView == nil or _LUAGameSceneView.self == nil then return false end
	_LUAGameSceneView.self:setScale(1.0)
	return false
end

function LUAOnWin32MouseMiddleDBClick(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseMoveing(posX, posY)
	return false
end

function LUAOnWin32MouseWheeling(scrX, scrY, key)
	if _LUAGameSceneView == nil or _LUAGameSceneView.self == nil then return false end
	local scale = _LUAGameSceneView.self:getScale()
	scale = scale - scrY * 0.01;
	_LUAGameSceneView.self:setScale(scale)
	return false
end
