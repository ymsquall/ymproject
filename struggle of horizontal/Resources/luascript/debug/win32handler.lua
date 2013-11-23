_LUAWin32KeyboardInfo = _LUAWin32KeyboardInfo or {}
_LUAWin32MouseInfo = _LUAWin32MouseInfo or {}
function LUAOnWin32KeyDownMsgProc(wp, lp, hiwp, lowp, hilp, lolp)
	if _LUAGameSceneView == nil or _LUAGameSceneView.self == nil then return false end
	if VK_W == wp then _LUAGameSceneView.self:screenScroll(CCPoint(0, 10)) end
	if VK_S == wp then _LUAGameSceneView.self:screenScroll(CCPoint(0, -10)) end
	if VK_A == wp then _LUAGameSceneView.self:screenScroll(CCPoint(-10, 0)) end
	if VK_D == wp then _LUAGameSceneView.self:screenScroll(CCPoint(10, 0)) end
end

function LUAOnWin32KeyUpMsgProc(wp, lp, hiwp, lowp, hilp, lolp)
end

function LUAOnWin32CharMsgProc(wp, lp, hiwp, lowp, hilp, lolp)
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

function LUAOnWin32MouseMoveing(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseWheeling(wp, lp, hiwp, lowp, hilp, lolp)
	if _LUAGameSceneView == nil or _LUAGameSceneView.self == nil then return false end
	local scale = _LUAGameSceneView.self:getScale()
	scale = scale + hiwp / WHEEL_DELTA * 0.01;
	_LUAGameSceneView.self:setScale(scale)
	return false
end
