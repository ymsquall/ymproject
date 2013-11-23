
function LUAGameSceneLoadDataWithMapName(pModel, mapName)

end

function LUAGameSceneModelOnFinalize()
end

function LUALoadGameSceneViewResources()
	local pArmatureDataMgr = ccs.ArmatureDataManager:getInstance()
	pArmatureDataMgr:addArmatureFileInfo("heroanim0.png", "heroanim0.plist", "heroanim.json")
end

