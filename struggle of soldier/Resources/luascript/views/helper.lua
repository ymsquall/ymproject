function LUACreateUIImageView(textureName, posX, posY)
	posX = posX or 0
	posY = posY or 0
	local pImageView = UIImageView:create()
	pImageView:setTexture(textureName)
	pImageView:setPosition(CCPoint(posX, posY))
	return pImageView
end

function LUACreateAndPlayArmature(animName, playIndex, posX, posY, animScale, scale)
	playIndex = playIndex or 0
	posX = posX or 0
	posY = posY or 0
	animScale = animScale or 1
	scale = scale or 1
	local pArmature = Armature:create(animName)
	pArmature:getAnimation():playByIndex(playIndex)
	pArmature:getAnimation():setAnimationScale(animScale)
	pArmature:setPosition(CCPoint(posX, posY))
	pArmature:setScale(scale)
	return pArmature
end

--部队朝向：上=0，左上=1，左下=2，下=3，右下=4，右上=5
--兵种：步兵=1，骑兵=2，枪兵=3，弓兵=4
function LUACreateSoldierAnimationWithTypeAndOrientation(soldierType, orientation, posX, posY)
	local animName = ''
	if soldierType == 1 then
		if orientation == 0 then
		elseif orientation == 1 then
		elseif orientation == 2 then
			animName = 'saber_leftbottom'
		elseif orientation == 3 then
		elseif orientation == 4 then
		elseif orientation == 5 then
			animName = 'saber_righttop'
		end
	elseif soldierType == 2 then
		if orientation == 0 then
		elseif orientation == 1 then
		elseif orientation == 2 then
			animName = 'rider_leftbottom'
		elseif orientation == 3 then
		elseif orientation == 4 then
		elseif orientation == 5 then
			animName = 'rider_righttop'
		end
	elseif soldierType == 3 then
		if orientation == 0 then
		elseif orientation == 1 then
		elseif orientation == 2 then
		elseif orientation == 3 then
		elseif orientation == 4 then
		elseif orientation == 5 then
		end
	elseif soldierType == 4 then
		if orientation == 0 then
		elseif orientation == 1 then
		elseif orientation == 2 then
		elseif orientation == 3 then
		elseif orientation == 4 then
		elseif orientation == 5 then
		end
	end
	return LUACreateAndPlayArmature(animName, 0, posX, posY, 1.0, 0.65)
end
