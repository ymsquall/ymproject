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
	--pArmature:getAnimation():playByIndex(playIndex)
	pArmature:getAnimation():setAnimationScale(animScale)
	pArmature:setPosition(CCPoint(posX, posY))
	pArmature:setScale(scale)
	return pArmature
end

--���ӳ�����=0������=1������=2����=3������=4������=5
--���֣�����=1�����=2��ǹ��=3������=4
function LUACreateSoldierAnimationWithTypeAndOrientation(soldierType, orientation, posX, posY)
	local solder
	if SoldierType_Saber == soldierType then
		solder = 'saber_'
	elseif SoldierType_Rider == soldierType then
		solder = 'rider_'
	elseif SoldierType_Lancer == soldierType then
		solder = 'lancer_'
	elseif SoldierType_Archer == soldierType then
		solder = 'archer_'
	end
	local orient
	if GridOrientation_topper == orientation then
		orient = 'top'
	elseif GridOrientation_lefttop == orientation then
		orient = 'lefttop'
	elseif GridOrientation_leftbottom == orientation then
		orient = 'leftbottom'
	elseif GridOrientation_bottom == orientation then
		orient = 'bottom'
	elseif GridOrientation_rightbottom == orientation then
		orient = 'rightbottom'
	elseif GridOrientation_righttop == orientation then
		orient = 'righttop'
	end
	return LUACreateAndPlayArmature(solder..orient, 0, posX, posY, 1.0, 0.65)
end
