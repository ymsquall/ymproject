_LUAGameSceneView_MonsterManager = _LUAGameSceneView_MonsterManager or {}
_LUAGameSceneView_MonsterManager.MonsterList = _LUAGameSceneView_MonsterManager.MonsterList or {}
_LUAGameSceneView_MonsterManager.MonsterIndex = _LUAGameSceneView_MonsterManager.MonsterIndex or 11
function LUAGameSceneView_Monster_init(monster)
	local nowIndex = _LUAGameSceneView_MonsterManager.MonsterIndex
	_LUAGameSceneView_MonsterManager.MonsterIndex = _LUAGameSceneView_MonsterManager.MonsterIndex + 1
	local monsterAnim = LUACreateAndPlayArmature("anim.major")
	monsterAnim:getAnimation():setSpeedScale(0.5)
	monsterAnim:setTag(_LUAGameSceneView_MonsterManager.MonsterIndex)
	_LUAGameSceneView.mTiledMap:addChild(monsterAnim)
	_LUAGameSceneView.mTiledMap:reorderChild(monsterAnim, _LUAGameSceneView_MonsterManager.MonsterIndex)
	_LUAGameSceneView_MonsterManager.MonsterList[nowIndex] = {
		mMonster = LuaUserDataConversion:toMonster(monster),
		mAnim = monsterAnim,
	}
	return monsterAnim
end

function LUAGameSceneView_MonsterBeAttackedEffect(monster, lostHP, hitPosX, hitPosY, beActName)
	beActName = beActName or ''
	local pMonster = LuaUserDataConversion:toMonster(monster)
	local pos = pMonster:getMovedBodyPos()
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
			_LUAGameSceneView.mTiledMap:removeChild(pLayer, true)
		end)))
	pLayer:runAction(cc.Sequence:create(delay,
		cc.CallFunc:create(function()
			pViwePanel:runFadeOutAction(1.0)
		end)))
	--blast effect
	local pEffect = LUACreateAndPlayBlastEffect('effect.blast', 'beattack04.point01', hitPosX, hitPosY, 1.0, 0.4)--hitPoint.x, hitPoint.y)
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

function LUAGameSceneView_MonsterBeAttacked(monster, clobber, beActName)
	beActName = beActName or ''
	clobber = clobber or false
	if beActName == 'assault01' then
		clobber = true
	end
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			if clobber then
				pMonster:changeAnimAction('clobber01')
				pMonster:move(-pMonster:getFaceNormalX(), __LUAEnvironmentVariable.clobber_power.x)
				pMonster:jump(__LUAEnvironmentVariable.clobber_power.y)
			else
				pMonster:changeAnimAction('beattack01')
			end
			break
		end
	end
end

function LUAGameSceneView_MonsterActiveAttack(monster, id)
	id = id or 0
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster and LUACreatureCanBeAttack(pMonster) then
			pMonster:changeAnimAction('attack')
			break
		end
	end
end
function LUAGameSceneView_MonsterAttackAnimEnded(monster)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			pMonster:changeAnimAction('stand01')
			break
		end
	end
end
function LUAGameSceneView_MonsterBeAttackAnimEnded(monster, isClobber)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			pMonster:changeAnimAction('stand01')
			break
		end
	end
end
function LUAGameSceneView_MonsterDeath(monster)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			pMonster:changeAnimAction('death01')
			break
		end
	end
end
function LUAGameSceneView_MonsterRelive(monster)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			pMonster:changeAnimAction('stand01')
			break
		end
	end
end
function LUAGameSceneView_Monster_Tick(dt)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		local monsterPos = v.mMonster:getMovedBodyPos()
		v.mAnim:setPositionX(monsterPos.x)
		v.mAnim:setPositionY(monsterPos.y)
		v.mMonster:onCreaturePosChanged(monsterPos)
	end
end
