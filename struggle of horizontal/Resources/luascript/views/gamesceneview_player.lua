function LUAGameSceneView_LocalPlayerBeAttackedEffect(lostHP, hitPoint)
	local pPlayer = LocalPlayer:instance()
	local pos = pPlayer:getMovedBodyPos()
	local posFlying = CCPoint(pos.x - 20, pos.y + 220)
	local pViwePanel = engine.uiview.StackPanel:createWithFrame(posFlying)
	local hpStr = tostring(lostHP)
	local len = string.len(hpStr)
	for i = 1,len,1 do
		local imageName ='number01_0'..string.sub(hpStr,i,i)..'.png'
		pViwePanel:createSpriteWithPlist(imageName)
	end
	local pLayer = LuaCocoStudioHelper:toUILayer(pViwePanel)
	_LUAGameSceneView.mTiledMap:addChild(pLayer, 101)
	local moveEndPos = cc.p(posFlying.x, posFlying.y + 100.0)
	local moveup = cc.MoveTo:create(2.0, moveEndPos)
	local delay = cc.DelayTime:create(1.0)
	local fadeout = cc.FadeTo:create(1.0, 0)
	pLayer:runAction(cc.Sequence:create(moveup,
		cc.CallFunc:create(function()
			print('moving ended')
			_LUAGameSceneView.mTiledMap:removeChild(pLayer, true)
		end)))
	pLayer:runAction(cc.Sequence:create(delay,
		cc.CallFunc:create(function()
			print('begin fadeout')
			pViwePanel:runFadeOutAction(1.0)
		end)))
	--blast effect
	local pEffect = LUACreateAndPlayBlastEffect('effect.blast', 'beattack02.point01', hitPoint.x, hitPoint.y)
	_LUAGameSceneView.mTiledMap:addChild(pEffect, 101)
    pEffect:getAnimation():setMovementEventCallFunc(
		function(armatureBack,movementType,movementID)
			print('blast effect status:'..movementID..'-'..tostring(movementType))
			if movementType == ccs.MovementEventType.COMPLETE then
				_LUAGameSceneView.mTiledMap:removeChild(pEffect, true)
			end
		end
		)
end

function LUAGameSceneView_LocalPlayerBeAttacked(clobber)
	clobber = clobber or false
	local actionName = 'beattack01'
	if clobber then actionName = 'clobber01' end
	if _LUAGameSceneView.mHeroAnim:getAnimation():getCurrentMovementID() ~= actionName then
		_LUAGameSceneView.mHeroAnim:getAnimation():play(actionName)
	end
	_LUAGameSceneView.mBeAttacking = true
	_LUAGameSceneView.mMoveDirection = 0.0
	_LUAGameSceneView.mMoveSpeedScale = 0.0
	LocalPlayer:instance():move(0.0, 0.0)
end

function LUAGameSceneView_LocalPlayerAttackAnimEnded()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
        _LUAGameSceneView.mHeroAnim:getAnimation():play('stand01')
    else
        _LUAGameSceneView.mHeroAnim:getAnimation():play('run01')
    end
end

function LUAGameSceneView_LocalPlayerBeAttackAnimEnded()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
        _LUAGameSceneView.mHeroAnim:getAnimation():play('stand01')
    else
        _LUAGameSceneView.mHeroAnim:getAnimation():play('run01')
    end
	_LUAGameSceneView.mBeAttacking = false
end

function LUAGameSceneView_LocalPlayerDeath()
	_LUAGameSceneView.mHeroAnim:getAnimation():play('death01')
end

function LUAGameSceneView_LocalPlayerRelive()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
        _LUAGameSceneView.mHeroAnim:getAnimation():play('stand01')
    else
        _LUAGameSceneView.mHeroAnim:getAnimation():play('run01')
    end
end

function LUAGameSceneView_LocalPlayerAssaultSkillEnded()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
        _LUAGameSceneView.mHeroAnim:getAnimation():play('stand01')
		LocalPlayer:instance():move(0.0, 0.0)
    else
        _LUAGameSceneView.mHeroAnim:getAnimation():play('run01')
		LocalPlayer:instance():move(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
    end
end
