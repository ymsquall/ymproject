_LUACreatureActionInfo = _LUACreatureActionInfo or {}

function LUACreatureCanBeMoveOrStand(creature)
	local canbe = false
	local animView = tolua.cast(creature:getAnimView(), "Armature")
	local nowAction = animView:getAnimation():getCurrentMovementID()
	if nowAction == 'stand01' or nowAction == 'run01' then
		canbe = true
	end
	return canbe
end

function LUACreatureCanBeInAirMove(creature)
	local canbe = false
	local animView = tolua.cast(creature:getAnimView(), "Armature")
	local nowAction = animView:getAnimation():getCurrentMovementID()
	if nowAction == 'jumpattack01' or nowAction == 'jumping01' or
		nowAction == 'jumpup01' or nowAction == 'landdown01' then
		canbe = true
	end
	return canbe
end

function LUACreatureCanBePlayJumpAction(creature)
	local canbe = false
	local animView = tolua.cast(creature:getAnimView(), "Armature")
	local nowAction = animView:getAnimation():getCurrentMovementID()
	if nowAction ~= 'clobber01' then
		canbe = true
	end
	return canbe
end

function LUACreatureCanBeDropInLand(creature)
	return (LUACreatureCanBeMoveOrStand(creature) or LUACreatureCanBeInAirMove(creature)) and LUACreatureCanBePlayJumpAction(creature)
end

function LUACreatureCanBeJump(creature)
	local canbe = false

	return canbe
end

function LUACreatureCanBeAttack(creature)
	local canbe = false
	local animView = tolua.cast(creature:getAnimView(), "Armature")
	local nowAction = animView:getAnimation():getCurrentMovementID()
	if nowAction == 'stand01' or nowAction == 'run01' or nowAction == 'jumpattack01' or
		nowAction == 'jumping01' or nowAction == 'jumpup01' or nowAction == 'landdown01' then
		canbe = true
	end
	return canbe
end

function LUACreatureCanBeSkillByID(creature, skill)
	local canbe = false
	canbe = skill.canBeSkill(skill,creature)
	return canbe
end
function LUACreatureDoSkill(creature, skillID)
	local skill = _LUASkillMetaData[skillID]
	if LUACreatureCanBeSkillByID(creature, skill) == false then
		return false
	end
	print(skillID..'doSkill')
	return skill.doSkill(skill,creature)
end

function LUACreatureHitWallPlayAction(creature)
	local animView = tolua.cast(creature:getAnimView(), "Armature")
	local nowAction = animView:getAnimation():getCurrentMovementID()
	if nowAction == 'run01' then
		return 'run01'
	elseif nowAction == 'assault01' then
		return 'assault01'
	end
	return 'jumping01'
end
