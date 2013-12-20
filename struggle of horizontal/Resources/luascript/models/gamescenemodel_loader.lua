
function LUAGameSceneLoadDataWithMapName(pModel, mapName)

end

function LUAGameSceneModelOnFinalize()
end

function LUALoadGameSceneViewResources()
	local pArmatureDataMgr = ccs.ArmatureDataManager:getInstance()
	--pArmatureDataMgr:addArmatureFileInfo("heroanim0.png", "heroanim0.plist", "heroanim.json")
	--pArmatureDataMgr:addArmatureFileInfo("girl001.png", "girl001.plist", "girl001.xml")
	--pArmatureDataMgr:addArmatureFileInfo("HeroAnimC0.png", "HeroAnimC0.plist", "HeroAnimC.json")
	--pArmatureDataMgr:addArmatureFileInfo("HeroAnimHL0.png", "HeroAnimHL0.plist", "HeroAnimHL.json")
	pArmatureDataMgr:addArmatureFileInfo("anim.major0.png", "anim.major0.plist", "anim.major.json")
end

