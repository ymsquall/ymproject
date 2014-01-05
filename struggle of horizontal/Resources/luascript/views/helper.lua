ccs.MovementEventType = ccs.MovementEventType or { START=0, COMPLETE=1, LOOP_COMPLETE=2 }
function LUACreateUIImageView(textureName, posX, posY)
	posX = posX or 0
	posY = posY or 0
	local pImageView = UIImageView:create()
	pImageView:setTexture(textureName)
	pImageView:setPosition(cc.p(posX, posY))
	return pImageView
end

-- �������Ķ����������˸����Ҫ�ȼ��ؼ�֡�����õ���ɫ�Ƿ�����(���json���ݣ���Ϊʹ��Ĭ����ɫ�Ļ�����ɫֵ���ᱻд��json�ļ��У����ֶ����)
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

function LUACreateAndPlayBlastEffect(animName, actName, posX, posY, animScale, scale)
	actName = actName or ''
	posX = posX or 0
	posY = posY or 0
	animScale = animScale or 1
	scale = scale or 1
	local pArmature = ccs.Armature:create(animName)
	if actName ~= '' then
		pArmature:getAnimation():play(actName)
	end
	pArmature:getAnimation():setSpeedScale(animScale)
	pArmature:setPosition(cc.p(posX, posY))
	pArmature:setScale(scale)
	return pArmature
end
