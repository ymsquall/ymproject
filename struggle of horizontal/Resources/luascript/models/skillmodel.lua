_LUASkillMetaData = {}
-- ³å·æ
_LUASkillMetaData[1001] = {
	id = 1001,
	name = 'assault',
	cdTimer = 3,
	timeLength = 0.6,
	moveDist = 600.0,

	canBeSkill = function(self, creature)
		if nil == _LUACreatureActionInfo[creature] then
			return true
		end
		local cooldownInfo = _LUACreatureActionInfo[creature][self.id]
		if nil == cooldownInfo or nil == cooldownInfo.nowTimer then
			return true
		end
		return cooldownInfo.nowTimer <= 0
	end,

	doSkill = function(self, creature)
		_LUACreatureActionInfo[creature] = _LUACreatureActionInfo[creature] or {}
		_LUACreatureActionInfo[creature][self.id] = {}
		creature:changeAnimAction('assault01')
		creature:move(creature:getFaceNormalX(), self.moveDist)
		local scheduler = cc.Director:getInstance():getScheduler()
		_LUACreatureActionInfo[creature][self.id].skillScheduler = scheduler:scheduleScriptFunc(function(dt)
				if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
					creature:changeAnimAction('stand01')
					creature:move(0.0, 0.0)
				else
					creature:changeAnimAction('run01')
					creature:move(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
				end
				local scheduler = cc.Director:getInstance():getScheduler()
				scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature][self.id].skillScheduler)
				_LUACreatureActionInfo[creature][self.id].skillScheduler = nil
			end, self.timeLength, false)
		-- cd
		_LUACreatureActionInfo[creature][self.id].nowTimer = self.cdTimer
		local cooldownInfo = _LUACreatureActionInfo[creature][self.id]
		if creature == LocalPlayer:instance() then
			_LUAGameSceneView.mSkill1Btn:setOpacity(180)
			--_LUAGameSceneView.mSkill1Btn:setEnabled(false)
			local cdNumber = ccs.UIImageView:create()
			cdNumber:setName('cdNumber')
			cdNumber:loadTexture('number01_0'..self.cdTimer..'.png', 1)
			local size = cdNumber:getSize()
			cdNumber:setPosition(cc.p(size.width/4.0, -size.height/4.0))
			_LUAGameSceneView.mSkill1Btn:addChild(cdNumber)
		end
		local scheduler = cc.Director:getInstance():getScheduler()
		cooldownInfo.cdScheduler = scheduler:scheduleScriptFunc(function(dt)
				cooldownInfo.nowTimer = cooldownInfo.nowTimer - 1
				if cooldownInfo.nowTimer <= 0 then
					print(self.name..' skill cooldown overed!')
					local scheduler = cc.Director:getInstance():getScheduler()
					scheduler:unscheduleScriptEntry(cooldownInfo.cdScheduler)
					cooldownInfo.cdScheduler = nil
					_LUACreatureActionInfo[creature][self.id] = nil
					if creature == LocalPlayer:instance() then
						local cdNumber = _LUAGameSceneView.mSkill1Btn:getChildByName('cdNumber')
						if nil ~= cdNumber then
							_LUAGameSceneView.mSkill1Btn:removeChild(cdNumber)
						end
						_LUAGameSceneView.mSkill1Btn:setOpacity(255)
						--_LUAGameSceneView.mSkill1Btn:setEnabled(true)
					end
				end
				if creature == LocalPlayer:instance() then
					local cdNumber = tolua.cast(_LUAGameSceneView.mSkill1Btn:getChildByName('cdNumber'), 'UIImageView')
					if nil ~= cdNumber then
						cdNumber:loadTexture('number01_0'..cooldownInfo.nowTimer..'.png', 1)
					end
				end
				print(self.name..' skill cooldown timer ['..cooldownInfo.nowTimer..']!')
			end, 1.0, false)
	end,
}
-- °ëÔÂÕ¶
_LUASkillMetaData[1002] = {
	id = 1002,
	name = 'cutmoon.helf',
	cdTimer = 3,
	speed = 1500,

	canBeSkill = function(self,creature)
		if nil == _LUACreatureActionInfo[creature] then
			return true
		end
		local cooldownInfo = _LUACreatureActionInfo[creature][self.id]
		if nil == cooldownInfo or nil == cooldownInfo.nowTimer then
			return true
		end
		return cooldownInfo.nowTimer <= 0
	end,

	doSkill = function(self,creature)
		-- call back
		local function doEffectFlying(dt)
			if nil == _LUACreatureActionInfo[creature][self.id] or nil == _LUACreatureActionInfo[creature][self.id].skillObj then
				print(self.id)
				return
			end
			local skillObj = _LUACreatureActionInfo[creature][self.id].skillObj
			if skillObj:isHitTarget() then
				local scheduler = cc.Director:getInstance():getScheduler()
				scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature][self.id].flyingScheduler)
				_LUACreatureActionInfo[creature][self.id].flyingScheduler = -1
				LUAGameSceneView_Skill_Destoryed(skillObj)
				_LUACreatureActionInfo[creature][self.id].skillObj = nil
				if nil == _LUACreatureActionInfo[creature][self.id].cdScheduler then
					print('isHitTarget')
					_LUACreatureActionInfo[creature][self.id] = nil
				end
			end
		end
		local function doCooldown(dt)
			local cooldownInfo = _LUACreatureActionInfo[creature][self.id]
			cooldownInfo.nowTimer = cooldownInfo.nowTimer - 1
			if cooldownInfo.nowTimer <= 0 then
				print(self.name..' skill cooldown overed!')
				local scheduler = cc.Director:getInstance():getScheduler()
				scheduler:unscheduleScriptEntry(cooldownInfo.cdScheduler)
				cooldownInfo.cdScheduler = -1
				if nil == _LUACreatureActionInfo[creature][self.id].skillObj then
					print('cd overed')
					_LUACreatureActionInfo[creature][self.id] = nil
				end
				if creature == LocalPlayer:instance() then
					local cdNumber = _LUAGameSceneView.mSkill2Btn:getChildByName('cdNumber')
					if nil ~= cdNumber then
						_LUAGameSceneView.mSkill2Btn:removeChild(cdNumber)
					end
					_LUAGameSceneView.mSkill2Btn:setOpacity(255)
					--_LUAGameSceneView.mSkill2Btn:setEnabled(true)
				end
			end
			if creature == LocalPlayer:instance() then
				local cdNumber = tolua.cast(_LUAGameSceneView.mSkill2Btn:getChildByName('cdNumber'), 'UIImageView')
				if nil ~= cdNumber then
					cdNumber:loadTexture('number01_0'..cooldownInfo.nowTimer..'.png', 1)
				end
			end
			print(self.name..' skill cooldown timer ['..cooldownInfo.nowTimer..']!')
			print(_LUACreatureActionInfo[creature][self.id].skillObj)
		end
		local function waitAction(dt)
			if nil == _LUACreatureActionInfo[creature][self.id] or -1 == _LUACreatureActionInfo[creature][self.id].skillScheduler then
				print('error('..type(creature)..')['..self.id..']:waitAction can not removed!')
				PrintTable(_LUACreatureActionInfo)
				return
			end
			-- flying
			print('flying')
			local skillPos = creature:getMovedBodyPos()
			_LUACreatureActionInfo[creature][self.id].skillObj = SkillObject:create(creature:getFaceNormal(), CCPoint(skillPos.x, skillPos.y + 50.0), self.speed, "effect.cutmoon")
			local scheduler = cc.Director:getInstance():getScheduler()
			_LUACreatureActionInfo[creature][self.id].flyingScheduler = scheduler:scheduleScriptFunc(doEffectFlying, 0.0, false)
			-- cd
			_LUACreatureActionInfo[creature][self.id].nowTimer = self.cdTimer
			local cooldownInfo = _LUACreatureActionInfo[creature][self.id]
			if creature == LocalPlayer:instance() then
				_LUAGameSceneView.mSkill2Btn:setOpacity(180)
				--_LUAGameSceneView.mSkill2Btn:setEnabled(false)
				local cdNumber = ccs.UIImageView:create()
				cdNumber:setName('cdNumber')
				cdNumber:loadTexture('number01_0'..self.cdTimer..'.png', 1)
				local size = cdNumber:getSize()
				cdNumber:setPosition(cc.p(size.width/4.0, -size.height/4.0))
				_LUAGameSceneView.mSkill2Btn:addChild(cdNumber)
			end
			local scheduler = cc.Director:getInstance():getScheduler()
			cooldownInfo.cdScheduler = scheduler:scheduleScriptFunc(doCooldown, 1.0, false)
			-- removed scheduler
			local scheduler = cc.Director:getInstance():getScheduler()
			scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature][self.id].skillScheduler)
			_LUACreatureActionInfo[creature][self.id].skillScheduler = -1
		end
		-- action
		_LUACreatureActionInfo[creature] = _LUACreatureActionInfo[creature] or {}
		_LUACreatureActionInfo[creature][self.id] = {
			flyingScheduler = -1,
			skillScheduler = -1,
			cdScheduler = -1,
			nowTimer = 0,
			skillObj,
		}
		creature:changeAnimAction('cutmoon01')
		local scheduler = cc.Director:getInstance():getScheduler()
		_LUACreatureActionInfo[creature][self.id].skillScheduler = scheduler:scheduleScriptFunc(waitAction, 0.3, false)
	end,
}
