function LUATestStartPlayStruggleRecord()
	local actNum = 0
	local block = framework.unity.blockwrite:create()
	block:seek(4)
	block:write1(1) actNum = actNum + 1
	block:write1(2)
	block:write1(2) actNum = actNum + 1
	block:write1(1)
	block:write1(3) actNum = actNum + 1
	-- �ƶ�����
	block:write1(4)
	block:write1(4)
	block:write1(5)
	block:write1(4)
	block:write1(5)
	block:write1(4) actNum = actNum + 1
	-- ��������
	block:write1(1)
	block:write2(135)
	block:write1(5) actNum = actNum + 1
	-- ��������
	block:write1(1)
	-- ����ID
	block:write2(1)
	block:write2(135)
	block:reseek()
	block:write4(actNum)
	ViewModelManager:point():luaPlayStruggle(block, true)
end

function LUAPlayStruggleRecord(model, data, live)
	local pGameLandModel = LuaUserDataConversion:toGameLandModle(model)
	local pGameLandView = pGameLandModel:luaGetViewBinding()
	--pGameLandModel:luaSetBoolProperty(GameLandModel.EPTT_IsLive, live)
	LUAGameLandView_doLiveChanged(pGameLandView, live)
	local actNum = 0
	local dataBlock = LuaUserDataConversion:toBlockWrite(data)
	local block = framework.unity.blockreader:create(dataBlock)
	local troopID = 0
	local soldierID = 0
	actNum = block:read4()
	for i = 1,actNum,1 do
		local actType = block:read1()
		if 1 == actType then
			troopID = block:read1()
			--pGameLandModel:luaSetNumberProperty(GameLandModel.EPTT_ActiveTroopID, troopID)
			LUAGameLandView_doTroopChanged(pGameLandView, troopID)
		elseif 2 == actType then
			soldierID = block:read1()
			LUAGameLandView_doSelectGrid(pGameLandView, soldierID)
			--pGameLandModel:luaSetNumberProperty(GameLandModel.EPTT_ActiveSoldierID, selectID)
		elseif 3 == actType then
		elseif 4 == actType then
		elseif 5 == actType then
		end
	end

	return true
end