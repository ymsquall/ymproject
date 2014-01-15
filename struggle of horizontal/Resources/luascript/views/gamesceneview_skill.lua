_LUAGameSceneView_SkillManager = _LUAGameSceneView_MonsterManager or {}
_LUAGameSceneView_SkillManager.SkillList = _LUAGameSceneView_SkillManager.SkillList or {}
_LUAGameSceneView_SkillManager.SkillIndex = _LUAGameSceneView_SkillManager.SkillIndex  or 10011
function LUAGameSceneView_Skill_init(skill, animName)
	local nowIndex = _LUAGameSceneView_SkillManager.SkillIndex
	_LUAGameSceneView_SkillManager.SkillIndex = _LUAGameSceneView_SkillManager.SkillIndex + 1
	local animView = LUACreateAndPlayArmature(animName)
	animView:getAnimation():setSpeedScale(0.5)
	animView:setTag(_LUAGameSceneView_SkillManager.SkillIndex)
	_LUAGameSceneView.mTiledMap:addChild(animView, _LUAGameSceneView_SkillManager.SkillIndex, _LUAGameSceneView_SkillManager.SkillIndex)
	_LUAGameSceneView_SkillManager.SkillList[nowIndex] = {
		mIndex = nowIndex,
		mSkillObject = LuaUserDataConversion:toSkillObject(skill),
		mAnimView = animView,
	}
	return animView
end

function LUAGameSceneView_Skill_GetAnimView(skill)
	local i = 0
	for i,v in pairs(_LUAGameSceneView_SkillManager.SkillList) do
		if skill == v.mSkillObject then
			return v.mAnimView
		end
	end
	return nil
end

function LUAGameSceneView_Skill_Destoryed(skill)
	local skillObj = tolua.cast(skill, 'SkillObject')
	local i = 0
	for i,v in pairs(_LUAGameSceneView_SkillManager.SkillList) do
		if skillObj == v.mSkillObject then
			_LUAGameSceneView_SkillManager.SkillList[v.mIndex] = nil
			print(v.mIndex..'skill object destoryed!')
			skillObj:destory()
			break
		end
	end
end

function LUAGameSceneView_Skill_Tick(dt)
	for i,v in pairs(_LUAGameSceneView_SkillManager.SkillList) do
		local pos = v.mSkillObject:getMovedBodyPos()
		v.mAnimView:setPositionX(pos.x)
		v.mAnimView:setPositionY(pos.y)
	end
end

function LUAGameSceneView_SkillPhysicsStepBefore(settings)
	for i,v in pairs(_LUAGameSceneView_SkillManager.SkillList) do
		v.mSkillObject:StepBefore(tolua.cast(settings,'engine::physics::ObjectSettings'))
	end
end

function LUAGameSceneView_SkillPhysicsStepAfter(settings)
	for i,v in pairs(_LUAGameSceneView_SkillManager.SkillList) do
		v.mSkillObject:StepAfter()
	end
end
