--[[直播（或录像）动作类型，数据结构：动作数量（uint32) 动作类型（uint8） 参数1...参数n
enum LiveActionType
{
	LiveActionType_change = 1		// 切换阵营：			参数1（阵营ID uint8）
	,LiveActionType_select			// 选中部队：			参数1（部队编号 uint8）
	,LiveActionType_moveto			// 移动到相邻格子：		参数1（移动格数n uint8） 参数2...参数n（GridOrientation）
	,LiveActionType_attack			// 攻击某阵营某号部队：	参数1（攻击次数n uint8） 参数2（阵营ID uint8）参数3(部队编号 uint8） ...参数n
	,LiveActionType_skill			// 指定某格释放技能：	参数1（释放次数n uint8） 参数2（技能ID uint16）参数3（格子编号 uint16）...参数n
	,LiveActionType_unused
};
]]
_LUANowPlayingRecordData = {}
function LUATestStartPlayStruggleRecord()
	local actNum = 0
	local block = framework.unity.blockwrite:create()
	block:seek(4)
	block:write1(LiveActionType_change) actNum = actNum + 1 block:write1(1)
	block:write1(LiveActionType_select) actNum = actNum + 1 block:write1(4)
	block:write1(LiveActionType_moveto) actNum = actNum + 1 block:write1(1) block:write1(GridOrientation_righttop)
	block:write1(LiveActionType_attack) actNum = actNum + 1 block:write1(1) block:write1(2) block:write1(3)

	block:write1(LiveActionType_change) actNum = actNum + 1 block:write1(2)
	block:write1(LiveActionType_select) actNum = actNum + 1 block:write1(3)
	block:write1(LiveActionType_attack) actNum = actNum + 1 block:write1(1) block:write1(1) block:write1(4)

	block:write1(LiveActionType_change) actNum = actNum + 1 block:write1(1)
	block:write1(LiveActionType_select) actNum = actNum + 1 block:write1(7)
	block:write1(LiveActionType_moveto) actNum = actNum + 1 block:write1(1) block:write1(GridOrientation_righttop)
	block:write1(LiveActionType_attack) actNum = actNum + 1 block:write1(1) block:write1(2) block:write1(3)

	block:write1(LiveActionType_change) actNum = actNum + 1 block:write1(2)
	block:write1(LiveActionType_select) actNum = actNum + 1 block:write1(6)
	block:write1(LiveActionType_moveto) actNum = actNum + 1 block:write1(6) block:write1(GridOrientation_leftbottom) block:write1(GridOrientation_lefttop)
	block:write1(GridOrientation_topper) block:write1(GridOrientation_topper) block:write1(GridOrientation_righttop) block:write1(GridOrientation_rightbottom)
	block:write1(LiveActionType_attack) actNum = actNum + 1 block:write1(1) block:write1(1) block:write1(4)

	block:write1(LiveActionType_change) actNum = actNum + 1 block:write1(1)
	block:write1(LiveActionType_select) actNum = actNum + 1 block:write1(10)
	block:write1(LiveActionType_moveto) actNum = actNum + 1 block:write1(2) block:write1(GridOrientation_righttop) block:write1(GridOrientation_righttop)
	block:write1(LiveActionType_skill)  actNum = actNum + 1 block:write1(1) block:write2(1) block:write2(154)

	block:reseek()
	block:write4(actNum)
	ViewModelManager:point():luaPlayStruggle(block, true)
end

local function LUAReadStruggleRecordData(data)
	_LUANowPlayingRecordData = {}
	local dataBlock = LuaUserDataConversion:toBlockWrite(data)
	local block = framework.unity.blockreader:create(dataBlock)
	_LUANowPlayingRecordData.count = block:read4()
	for i = 1,_LUANowPlayingRecordData.count,1 do
		local actionData = { type = block:read1() }
		if LiveActionType_change == actionData.type then
			table.insert(actionData, block:read1())
			table.insert(_LUANowPlayingRecordData, actionData)
		elseif LiveActionType_select == actionData.type then
			table.insert(actionData, block:read1())
			table.insert(_LUANowPlayingRecordData, actionData)
		elseif LiveActionType_moveto == actionData.type then
			local moveCount = block:read1()
			for j = 1,moveCount,1 do
				table.insert(actionData, block:read1())
			end
			table.insert(_LUANowPlayingRecordData, actionData)
		elseif LiveActionType_attack == actionData.type then
			local attackCount = block:read1()
			for j = 1,attackCount,1 do
				local attackData = { targetTroopID = block:read1(), targetSoldierID = block:read1() }
				table.insert(actionData, attackData)
			end
			table.insert(_LUANowPlayingRecordData, actionData)
		elseif LiveActionType_skill == actionData.type then
			local skillCount = block:read1()
			for j = 1,skillCount,1 do
				local skillData = { skillID = block:read2(), gridNumber = block:read2()	}
				table.insert(actionData, skillData)
			end
			table.insert(_LUANowPlayingRecordData, actionData)
		end
	end
end

function LUAPlayStruggleRecord(model, data, live)
	LUAReadStruggleRecordData(data)
	local pGameLandModel = LuaUserDataConversion:toGameLandModle(model)
	local pGameLandView = pGameLandModel:luaGetViewBinding()
	LUALUAGameLandView_PlayStruggleBegining()
	LUAPlayStruggleRecordOneStep(pGameLandView)
	return true
end

function LUAPlayStruggleRecordOneStep(view)
	if #_LUANowPlayingRecordData <= 0 then
		LUALUAGameLandView_PlayStruggleEnded()
		return
	end
	local actionData = _LUANowPlayingRecordData[1]
	if LiveActionType_change == actionData.type then
		--pGameLandModel:luaSetNumberProperty(GameLandModel.EPTT_ActiveTroopID, troopID)
		LUAGameLandView_doTroopChanged(view, actionData[1])
		table.remove(actionData, 1)
	elseif LiveActionType_select == actionData.type then
		--pGameLandModel:luaSetNumberProperty(GameLandModel.EPTT_ActiveSoldierID, selectID)
		LUAGameLandView_doSelectGrid(view, actionData[1])
		table.remove(actionData, 1)
	elseif LiveActionType_moveto == actionData.type then
		LUAGameLandView_doMoveStep(view, actionData[1])
		table.remove(actionData, 1)
	elseif LiveActionType_attack == actionData.type then
		LUAGameLandView_doAttackToGrid(view, actionData[1].targetTroopID, actionData[1].targetSoldierID)
		table.remove(actionData, 1)
	elseif LiveActionType_skill == actionData.type then
		LUAGameLandView_doSkillToGrid(view, actionData[1].skillID, actionData[1].gridNumber)
		table.remove(actionData, 1)
	end
	if #actionData <= 0 then
		table.remove(_LUANowPlayingRecordData, 1)
	end
end
