_LUAGameSceneView_Physics = _LUAGameSceneView_Physics or {}
function LUAGameSceneView_Physics_Init(pTiledMap)
	_LUAGameSceneView_Physics.mLandList = {}
	_LUAGameSceneView_Physics.mWallList = {}
	_LUAGameSceneView_Physics.mMonsterList = {}
	_LUAGameSceneView_Physics.mNpcList = {}
	local mapSize = pTiledMap:getContentSize()
	local groundObjects = LuaTiledHelper:getGroupObjects(pTiledMap, 'ground')
    local i = 0
    for i = 0, groundObjects:count()-1, 1 do
        local pGroundDict = LuaTiledHelper:getDictAtIndexWithGroup(groundObjects, i)
        if pGroundDict == nil then
			error('load scene static physics body node failed with pGroundDict!!!!!')
            break
        end
        local x = LuaDictHelper:getIntValue(pGroundDict, 'x')
        local y = LuaDictHelper:getIntValue(pGroundDict, 'y')
        local oType = LuaDictHelper:getStringValue(pGroundDict, 'type')
		local isWall = ('wall' == oType)
        local pPointObj = LuaDictHelper:getArrayValue(pGroundDict, 'polylinePoints')
		if pPointObj ~= nil then
			local j = 0
			for j = 0, pPointObj:count()-2, 1 do
				local cpInfo = {}
				cpInfo.p1 = {}
				cpInfo.p2 = {}
				local pos1Dict = LuaDictHelper:getDictValueAtIndexWithArray(pPointObj, j)
				local pos2Dict = LuaDictHelper:getDictValueAtIndexWithArray(pPointObj, j+1)
				cpInfo.p1.x = LuaDictHelper:getIntValue(pos1Dict, 'x')
				cpInfo.p1.y = LuaDictHelper:getIntValue(pos1Dict, 'y')
				cpInfo.p2.x = LuaDictHelper:getIntValue(pos2Dict, 'x')
				cpInfo.p2.y = LuaDictHelper:getIntValue(pos2Dict, 'y')
				cpInfo.bodyNode = LUAHelper_CreateLinePhysicsBodyNode(CCPoint(x, y), CCPoint(cpInfo.p1.x, -cpInfo.p1.y), CCPoint(cpInfo.p2.x, -cpInfo.p2.y), PhysicsMaterial(0,0,1))
				cpInfo.bodyNode:getPhysicsBody():setDynamic(false)
				cpInfo.bodyNode:getPhysicsBody():setRotationEnable(false)
				if isWall then
					table.insert(_LUAGameSceneView_Physics.mWallList, cpInfo)
					pTiledMap:addChild(cpInfo.bodyNode, 101, 20001+j)
				else
					table.insert(_LUAGameSceneView_Physics.mLandList, cpInfo)
					pTiledMap:addChild(cpInfo.bodyNode, 101, 30001+j)
				end
			end
		else
			if isWall then
				error('find not polyline types wall object')
			else
				error('find not polyline types land object')
			end
		end
	end
	-- monster
	local monsterObjects = LuaTiledHelper:getGroupObjects(pTiledMap, 'monster')
	i = 0
    for i = 0, monsterObjects:count()-1, 1 do
        local pMonsterDict = LuaTiledHelper:getDictAtIndexWithGroup(monsterObjects, i)
        if pMonsterDict == nil then
			error('load monster physics body node failed with pMonsterDict!!!!!')
            break
        end
		local cpInfo = {}
		cpInfo.x = LuaDictHelper:getIntValue(pMonsterDict, 'x')
		cpInfo.y = LuaDictHelper:getIntValue(pMonsterDict, 'y')
		cpInfo.w = LuaDictHelper:getIntValue(pMonsterDict, 'width')
		cpInfo.h = LuaDictHelper:getIntValue(pMonsterDict, 'height')
		table.insert(_LUAGameSceneView_Physics.mMonsterList, cpInfo)
	end
	-- npcs
	local pNpcObjects = LuaTiledHelper:getGroupObjects(pTiledMap, 'npcs')
	i = 0
    for i = 0, pNpcObjects:count()-1, 1 do
        local pNpcDict = LuaTiledHelper:getDictAtIndexWithGroup(pNpcObjects, i)
        if pNpcDict == nil then
			error('load npc physics body node failed with pNpcDict!!!!!')
            break
        end
		local cpInfo = {}
		cpInfo.x = LuaDictHelper:getIntValue(pNpcDict, 'x')
		cpInfo.y = LuaDictHelper:getIntValue(pNpcDict, 'y')
		cpInfo.w = LuaDictHelper:getIntValue(pNpcDict, 'width')
		cpInfo.h = LuaDictHelper:getIntValue(pNpcDict, 'height')
		table.insert(_LUAGameSceneView_Physics.mNpcList, cpInfo)
	end
end
