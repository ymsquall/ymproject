_LUASkillMetaData = {}
-- ³å·æ
_LUASkillMetaData[1001] = {
	id = 1001,
	name = 'assault',
	cdTimer = 3,
	timeLength = 0.4,
	moveDist = 1000.0,

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
			cdNumber:loadTexture('number02_0'..self.cdTimer..'.png', 1)
			local size = cdNumber:getSize()
			cdNumber:setPosition(cc.p(0, 0))
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
						cdNumber:loadTexture('number02_0'..cooldownInfo.nowTimer..'.png', 1)
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
			print('1002 canBeSkill')
			return true
		end
		local cooldownInfo = _LUACreatureActionInfo[creature][self.id]
		if nil == cooldownInfo or nil == cooldownInfo.nowTimer then
			return true
		end
			print('1002 canBeSkill '..cooldownInfo.nowTimer)
		return cooldownInfo.nowTimer <= 0
	end,

	doSkill = function(self,creature)
		_LUACreatureActionInfo[creature] = _LUACreatureActionInfo[creature] or {}
		if nil ~= _LUACreatureActionInfo[creature][self.id] then
			local scheduler = cc.Director:getInstance():getScheduler()
			scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature][self.id].cdScheduler)
		end
		_LUACreatureActionInfo[creature][self.id] = {
			cdScheduler = -1,
			nowTimer = 0,
		}
		local function doCooldown(dt)
			_LUACreatureActionInfo[creature][self.id].nowTimer = _LUACreatureActionInfo[creature][self.id].nowTimer - 1
			if _LUACreatureActionInfo[creature][self.id].nowTimer <= 0 then
				print(self.name..' skill cooldown overed!')
				local scheduler = cc.Director:getInstance():getScheduler()
				scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature][self.id].cdScheduler)
				--cooldownInfo.cdScheduler = -1
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
					cdNumber:loadTexture('number02_0'.._LUACreatureActionInfo[creature][self.id].nowTimer..'.png', 1)
				end
			end
			print(self.name..' skill cooldown timer ['.._LUACreatureActionInfo[creature][self.id].nowTimer..']!')
		end
		local function waitActionEnded()
			-- flying
			print('flying')
			local skillPos = creature:getMovedBodyPos()
			local skillObject = SkillObject:create(creature:getFaceNormal(), CCPoint(skillPos.x, skillPos.y + 100.0), self.speed, "effect.cutmoon")
		end
		-- action
		creature:changeAnimAction('cutmoon01')
		creature:move(0,0)
		local animView = tolua.cast(creature:getAnimView(), "Armature")
		local delayTime = cc.DelayTime:create(0.2)
		local seqAct = cc.Sequence:create(delayTime, cc.CallFunc:create(waitActionEnded))
		animView:runAction(seqAct)
		-- cd
		_LUACreatureActionInfo[creature][self.id].nowTimer = self.cdTimer
		if creature == LocalPlayer:instance() then
			_LUAGameSceneView.mSkill2Btn:setOpacity(180)
			--_LUAGameSceneView.mSkill2Btn:setEnabled(false)
			local cdNumber = ccs.UIImageView:create()
			cdNumber:setName('cdNumber')
			cdNumber:loadTexture('number02_0'..self.cdTimer..'.png', 1)
			local size = cdNumber:getSize()
			cdNumber:setPosition(cc.p(0, 0))
			_LUAGameSceneView.mSkill2Btn:addChild(cdNumber)
		end
		local scheduler = cc.Director:getInstance():getScheduler()
		_LUACreatureActionInfo[creature][self.id].cdScheduler = scheduler:scheduleScriptFunc(doCooldown, 1.0, false)
	end,
}
