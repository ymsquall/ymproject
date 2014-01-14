
function LUAGameSceneLoadDataWithMapName(pModel, mapName)

end

function LUAGameSceneModelOnFinalize()
end

function LUALoadGameSceneViewResources()
	local pArmatureDataMgr = ccs.ArmatureDataManager:getInstance()
	pArmatureDataMgr:addArmatureFileInfo("anim.major0.png", "anim.major0.plist", "anim.major.json")
	pArmatureDataMgr:addArmatureFileInfo("effect.blast0.png", "effect.blast0.plist", "effect.blast.json")
	pArmatureDataMgr:addArmatureFileInfo("effect.cutmoon0.png", "effect.cutmoon0.plist", "effect.cutmoon.json")
	--pArmatureDataMgr:addArmatureFileInfo("effect.assault0.png", "effect.assault0.plist", "effect.assault.json")
	cc.SpriteFrameCache:getInstance():addSpriteFrames("plist/number01.plist")
end

