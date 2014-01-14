_LUASkillMetaData = {}
local scheduler = cc.Director:getInstance():getScheduler()
-- ³å·æ
_LUASkillMetaData[1001] = {
	id = 1001,
	name = 'assault',
	cdTimer = 2,
	canBeSkill = function(self, creature)
		local cooldownInfo = _LUACreatureActionInfo[creature]
		if nil == cooldownInfo or nil == cooldownInfo.nowTimer then
			return true
		end
		return cooldownInfo.nowTimer <= 0
	end,
	doSkill = function(self, creature)
		_LUACreatureActionInfo[creature] = _LUACreatureActionInfo[creature] or {}
		--local animView = tolua.cast(creature:getAnimView(), "Armature")
		creature:changeAnimAction('assault01')
		--if animView:getAnimation():getCurrentMovementID() ~= 'assault01' then
		--	animView:getAnimation():play('assault01')
		--end
		creature:move(creature:getFaceNormalX(), 1000.0)
		_LUACreatureActionInfo[creature].skillScheduler = scheduler:scheduleScriptFunc(function(dt)
				if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
					--animView:getAnimation():play('stand01')
					creature:changeAnimAction('stand01')
					creature:move(0.0, 0.0)
				else
					--animView:getAnimation():play('run01')
					creature:changeAnimAction('run01')
					creature:move(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
				end
				scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature].skillScheduler)
				_LUACreatureActionInfo[creature].skillScheduler = nil
			end, 0.3, false)
		-- cd
		_LUACreatureActionInfo[creature].nowTimer = self.cdTimer
		local cooldownInfo = _LUACreatureActionInfo[creature]
		cooldownInfo.cdScheduler = scheduler:scheduleScriptFunc(function(dt)
				cooldownInfo.nowTimer = cooldownInfo.nowTimer - 1
				if cooldownInfo.nowTimer <= 0 then
					print(self.name..' skill cooldown overed!')
					scheduler:unscheduleScriptEntry(cooldownInfo.cdScheduler)
					cooldownInfo.cdScheduler = nil
					_LUACreatureActionInfo[creature] = nil
				end
				print(self.name..' skill cooldown timer ['..cooldownInfo.nowTimer..']!')
			end, 1.0, false)
	end,
}
-- °ëÔÂÕ¶
_LUASkillMetaData[1002] = {
	id = 1002,
	name = 'qwe',
	canBeSkill = function(creature)
		return true
	end,
	doSkill = function(creature)
	end,
}
