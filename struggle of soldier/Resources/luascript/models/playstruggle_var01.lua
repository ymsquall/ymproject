function LUATestStartPlayStruggleRecord()
	local actNum = 0
	local block
	block:seek(4)
	block:write1(1) actNum = actNum + 1
	block:write1(1)
	block:write1(2) actNum = actNum + 1
	block:write1(1)
	block:write1(3) actNum = actNum + 1
	block.write1(4);	-- �ƶ�����
	block.write1(4);
	block.write1(5);
	block.write1(4);
	block.write1(5);
	block:write1(4) actNum = actNum + 1
	block.write1(1);	-- ��������
	block.write2(135)
	block:write1(5) actNum = actNum + 1
	block.write1(1);	-- ��������
	block.write2(1);	-- ����ID
	block.write2(135)
	block.reseek();
	block.write4(actNum);
	ViewModelManager:point():playStruggle(block:buffer(), block:length(), true)
end

function LUAPlayStruggleRecord(model, data, length, live)
	local pGameLandModel = LuaUserDataConversion:toGameLandModle(model)
	pGameLandModel:luaSetBoolProperty(EPTT_IsLive, live)
	return true
end
