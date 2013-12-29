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

function LUAGameSceneView_MonsterBeAttacked(monster)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			if v.mAnim:getAnimation():getCurrentMovementID() ~= 'beattack01' then
				v.mAnim:getAnimation():play('beattack01')
			end
			break
		end
	end
end

function LUAGameSceneView_MonsterAttackAnimEnded(monster)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			v.mAnim:getAnimation():play('stand01')
			break
		end
	end
end
function LUAGameSceneView_MonsterBeAttackAnimEnded(monster)
	local pMonster = LuaUserDataConversion:toMonster(monster)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		if v.mMonster == pMonster then
			v.mAnim:getAnimation():play('attack01')
			break
		end
	end
end

function LUAGameSceneView_Monster_Tick(dt)
	for i,v in pairs(_LUAGameSceneView_MonsterManager.MonsterList) do
		local monsterPos = v.mMonster:getMovedBodyPos()
		v.mAnim:setPositionX(monsterPos.x)
		v.mAnim:setPositionY(monsterPos.y)
	end
end
