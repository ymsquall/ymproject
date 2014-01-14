_LUACreatureActionInfo = _LUACreatureActionInfo or {}

function LUACreatureCanBeMove(creature)
	local canbe = false

	return canbe
end

function LUACreatureCanBeJump(creature)
	local canbe = false

	return canbe
end

function LUACreatureCanBeAttack(creature)
	local canbe = false

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
	return skill.doSkill(skill,creature)
end
