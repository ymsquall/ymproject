function LUAOnWin32KeyDownMsgProc(wp, lp, hiwp, lowp, hilp, lolp)
	if VK_UP == wp then _LUAGameSceneView.self:screenScroll(CCPoint(0, 10)) end
	if VK_DOWN == wp then _LUAGameSceneView.self:screenScroll(CCPoint(0, -10)) end
	if VK_LEFT == wp then _LUAGameSceneView.self:screenScroll(CCPoint(-10, 0)) end
	if VK_RIGHT == wp then _LUAGameSceneView.self:screenScroll(CCPoint(10, 0)) end
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
	return false
end

function LUAOnWin32MouseMiddleDBClick(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseMoveing(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end

function LUAOnWin32MouseWheeling(wp, lp, hiwp, lowp, hilp, lolp)
	return false
end
