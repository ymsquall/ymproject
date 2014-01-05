
function LUAGameSceneLoadDataWithMapName(pModel, mapName)

end

function LUAGameSceneModelOnFinalize()
end

function LUALoadGameSceneViewResources()
	local pArmatureDataMgr = ccs.ArmatureDataManager:getInstance()
	pArmatureDataMgr:addArmatureFileInfo("anim.major0.png", "anim.major0.plist", "anim.major.json")
	pArmatureDataMgr:addArmatureFileInfo("effect.blast0.png", "effect.blast0.plist", "effect.blast.json")
	cc.SpriteFrameCache:getInstance():addSpriteFrames("plist/number01.plist")
end

