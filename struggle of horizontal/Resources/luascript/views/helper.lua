function LUACreateUIImageView(textureName, posX, posY)
	posX = posX or 0
	posY = posY or 0
	local pImageView = UIImageView:create()
	pImageView:setTexture(textureName)
	pImageView:setPosition(cc.p(posX, posY))
	return pImageView
end

-- 创建出的动画如果有闪烁现象，要先检查关键帧中设置的颜色是否连续(检查json数据，因为使用默认颜色的话，颜色值不会被写入json文件中，需手动添加)
function LUACreateAndPlayArmature(animName, playIndex, posX, posY, animScale, scale)
	playIndex = playIndex or 0
	posX = posX or 0
	posY = posY or 0
	animScale = animScale or 1
	scale = scale or 1
	local pArmature = ccs.Armature:create(animName)
	if playIndex ~= -1 then
		pArmature:getAnimation():playByIndex(playIndex)
	end
	pArmature:getAnimation():setSpeedScale(animScale)
	pArmature:setPosition(cc.p(posX, posY))
	pArmature:setScale(scale)
	return pArmature
end

