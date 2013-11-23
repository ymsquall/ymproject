
function LUAGameSceneLoadDataWithMapName(pModel, mapName)

end

function LUAGameSceneModelOnFinalize()
end

function LUALoadGameSceneViewResources()
	local pArmatureDataMgr = ArmatureDataManager:sharedArmatureDataManager()
	pArmatureDataMgr:addArmatureFileInfo("heroanim0.png", "heroanim0.plist", "heroanim.json")
end

