
function LUAGameSceneLoadDataWithMapName(pModel, mapName)

end

function LUAGameSceneModelOnFinalize()
end

function LUALoadGameSceneViewResources()
	local pArmatureDataMgr = ccs.ArmatureDataManager:getInstance()
	--pArmatureDataMgr:addArmatureFileInfo("heroanim0.png", "heroanim0.plist", "heroanim.json")
	pArmatureDataMgr:addArmatureFileInfo("girl001.png", "girl001.plist", "girl001.xml")
end

