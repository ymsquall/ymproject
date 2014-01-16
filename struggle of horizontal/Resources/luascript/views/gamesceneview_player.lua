function LUAGameSceneView_LocalPlayerBeAttackedEffect(lostHP, hitPosX, hitPosY)
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
	local pEffect = LUACreateAndPlayBlastEffect('effect.blast', 'beattack03.point01', hitPosX, hitPosY, 1.0, 0.4)
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

function LUAGameSceneView_LocalPlayerBeAttacked(clobber, beActName)
	beActName = beActName or ''
	clobber = clobber or false
	if beActName == 'assault01' then
		clobber = true
	end
	local localPlayer = LocalPlayer:instance()
	_LUAGameSceneView.mBeAttacking = true
	_LUAGameSceneView.mMoveDirection = 0.0
	_LUAGameSceneView.mMoveSpeedScale = 0.0
	localPlayer:move(0.0, 0.0)
	if clobber then
		localPlayer:changeAnimAction('clobber01')
		localPlayer:move(-localPlayer:getFaceNormalX(), 100.0)
		localPlayer:jump(15.0)
	else
		localPlayer:changeAnimAction('beattack01')
	end
end

function LUAGameSceneView_LocalPlayerAttackAnimEnded()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
		LocalPlayer:instance():changeAnimAction('stand01')
    else
		LocalPlayer:instance():changeAnimAction('run01')
    end
end

function LUAGameSceneView_LocalPlayerBeAttackAnimEnded(isClobber)
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
		LocalPlayer:instance():changeAnimAction('stand01')
    else
		LocalPlayer:instance():changeAnimAction('run01')
    end
	_LUAGameSceneView.mBeAttacking = false
end

function LUAGameSceneView_LocalPlayerDeath()
	local localUser = LocalPlayer:instance()
	_LUAGameSceneView.mMoveDirection = 0.0
	_LUAGameSceneView.mMoveSpeedScale = 0.0
	localUser:move(0.0, 0.0)
	localUser:changeAnimAction('death01')
end

function LUAGameSceneView_LocalPlayerRelive()
    if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
		LocalPlayer:instance():changeAnimAction('stand01')
    else
		LocalPlayer:instance():changeAnimAction('run01')
    end
end

