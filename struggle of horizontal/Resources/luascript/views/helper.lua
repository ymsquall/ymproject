function LUACreateUIImageView(textureName, posX, posY)
	posX = posX or 0
	posY = posY or 0
	local pImageView = UIImageView:create()
	pImageView:setTexture(textureName)
	pImageView:setPosition(CCPoint(posX, posY))
	return pImageView
end

-- �������Ķ����������˸����Ҫ�ȼ��ؼ�֡�����õ���ɫ�Ƿ�����(���json���ݣ���Ϊʹ��Ĭ����ɫ�Ļ�����ɫֵ���ᱻд��json�ļ��У����ֶ�����)
function LUACreateAndPlayArmature(animName, playIndex, posX, posY, animScale, scale)
	playIndex = playIndex or 0
	posX = posX or 0
	posY = posY or 0
	animScale = animScale or 1
	scale = scale or 1
	local pArmature = Armature:create(animName)
	if playIndex ~= -1 then
		pArmature:getAnimation():playByIndex(playIndex)
	end
	pArmature:getAnimation():setAnimationScale(animScale)
	pArmature:setPosition(CCPoint(posX, posY))
	pArmature:setScale(scale)
	return pArmature
end
