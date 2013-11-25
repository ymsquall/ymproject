_LUAWin32KeyboardInfo = _LUAWin32KeyboardInfo or {}
_LUAWin32MouseInfo = _LUAWin32MouseInfo or {}
function LUAOnWin32KeyDownMsgProc(key)
	if _LUAGameSceneView == nil or _LUAGameSceneView.self == nil then return false end
	if VK_UP == key then _LUAGameSceneView.self:screenScroll(CCPoint(0, 10)) end
	if VK_DOWN == key then _LUAGameSceneView.self:screenScroll(CCPoint(0, -10)) end
	if VK_LEFT == key then _LUAGameSceneView.self:screenScroll(CCPoint(-10, 0)) end
	if VK_RIGHT == key then _LUAGameSceneView.self:screenScroll(CCPoint(10, 0)) end
	if VK_1 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('loading') end
	if VK_2 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('run') end
	if VK_3 == key or VK_SPACE == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('attack') end
	if VK_4 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('smitten') end
	if VK_5 == key then _LUAGameSceneView.mHeroAnim:getAnimation():play('death') end
end

function LUAOnWin32KeyUpMsgProc(key)
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
