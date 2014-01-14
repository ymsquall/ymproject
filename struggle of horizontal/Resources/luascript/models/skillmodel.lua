_LUASkillMetaData = {}
local scheduler = cc.Director:getInstance():getScheduler()
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
		_LUACreatureActionInfo[creature][self.id] = _LUACreatureActionInfo[creature][self.id] or {}
		creature:changeAnimAction('assault01')
		creature:move(creature:getFaceNormalX(), self.moveDist)
		_LUACreatureActionInfo[creature][self.id].skillScheduler = scheduler:scheduleScriptFunc(function(dt)
				if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
					creature:changeAnimAction('stand01')
					creature:move(0.0, 0.0)
				else
					creature:changeAnimAction('run01')
					creature:move(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
				end
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
		cooldownInfo.cdScheduler = scheduler:scheduleScriptFunc(function(dt)
				cooldownInfo.nowTimer = cooldownInfo.nowTimer - 1
				if cooldownInfo.nowTimer <= 0 then
					print(self.name..' skill cooldown overed!')
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
		_LUACreatureActionInfo[creature] = _LUACreatureActionInfo[creature] or {}
		_LUACreatureActionInfo[creature][self.id] = _LUACreatureActionInfo[creature][self.id] or {}
		creature:changeAnimAction('cutmoon01')
		if _LUAGameSceneView.mMoveSpeedScale < 0.001 then
			creature:changeAnimAction('stand01')
			creature:move(0.0, 0.0)
		else
			creature:changeAnimAction('run01')
			creature:move(_LUAGameSceneView.mMoveDirection, _LUAGameSceneView.mMoveSpeedScale)
		end
		-- action
		_LUACreatureActionInfo[creature][self.id].skillScheduler = scheduler:scheduleScriptFunc(function(dt)
			scheduler:unscheduleScriptEntry(_LUACreatureActionInfo[creature][self.id].skillScheduler)
			_LUACreatureActionInfo[creature][self.id].skillScheduler = nil
			end, 0.5, false)
		if nil == _LUACreatureActionInfo[creature][self.id].skillScheduler then
			-- flying



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
			cooldownInfo.cdScheduler = scheduler:scheduleScriptFunc(function(dt)
					cooldownInfo.nowTimer = cooldownInfo.nowTimer - 1
					if cooldownInfo.nowTimer <= 0 then
						print(self.name..' skill cooldown overed!')
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
		end

	end,
}
