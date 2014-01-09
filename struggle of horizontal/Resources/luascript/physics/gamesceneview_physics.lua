_LUAGameSceneView_Physics = _LUAGameSceneView_Physics or {}
function LUAGameSceneView_Physics_Init(pTiledMap)
	_LUAGameSceneView_Physics.mLandList = {}
	_LUAGameSceneView_Physics.mWallList = {}
	_LUAGameSceneView_Physics.mMonsterList = {}
	_LUAGameSceneView_Physics.mNpcList = {}
	local groundGroup = pTiledMap:getObjectGroup('ground')
	local groundObjects = groundGroup:getObjects()
	local pGroundDict = nil
    local i = 0
    local len = table.getn(groundObjects)
    for i = 0, len-1, 1 do
        pGroundDict = tolua.cast(groundObjects[i + 1], 'Dictionary')
        if dict == nil then
			error('load scene static physics body node failed!!!!!')
            break
        end
        local x = (tolua.cast(pGroundDict:objectForKey('x'), 'String')):intValue()--dynamic_cast<NSNumber*>(dict:objectForKey("x")):getNumber()
        local y = (tolua.cast(pGroundDict:objectForKey('y'), 'String')):intValue()--dynamic_cast<NSNumber*>(dict:objectForKey("y")):getNumber()
        local oType = (tolua.cast(pGroundDict:objectForKey('type'), "String")):getCString()
		local isWall = ('wall' == oType)
        --local pPointObj = LuaExternConversion:toArray(pGroundDict:objectForKey('polylinePoints'))
        local pPointObj = tolua.cast(pGroundDict:objectForKey('polylinePoints'), 'Array')
		if pPointObj ~= nil then
			local j = 0
			for j = 0, pPointObj:count()-1, 1 do
				local cpInfo = {}
				cpInfo.posX = tolua.cast(pPoints:objectAtIndex(j), 'Dictionary')
				cpInfo.posY = tolua.cast(pPoints:objectAtIndex(j+1), 'Dictionary')
				cpInfo.p1X = (tolua.cast(dPoint1:objectForKey('x'), 'String')):intValue()
				cpInfo.p1Y = (tolua.cast(dPoint1:objectForKey('y'), 'String')):intValue()
				cpInfo.p2X = (tolua.cast(dPoint2:objectForKey('x'), 'String')):intValue()
				cpInfo.p2Y = (tolua.cast(dPoint2:objectForKey('y'), 'String')):intValue()
				if isWall then
					table.insert(_LUAGameSceneView_Physics.mWallList, cpInfo)
				else
					table.insert(_LUAGameSceneView_Physics.mLandList, cpInfo)
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
	local monsterGroup = pTiledMap:getObjectGroup("monster")
	local monsterObjects = monsterGroup:getObjects()
	local pMonsterDict = nil
	local mi = 0
    for mi = 0, table.getn(monsterObjects)-1, 1 do
		local cpInfo = {}
        pMonsterDict = tolua.cast(monsterObjects[i + 1], 'Dictionary')
		cpInfo.x = (tolua.cast(dPoint1:objectForKey('x'), 'String')):intValue()
		cpInfo.y = (tolua.cast(dPoint1:objectForKey('y'), 'String')):intValue()
		cpInfo.w = (tolua.cast(pMonsterDict:objectForKey('width'), 'String')):intValue()
		cpInfo.h = (tolua.cast(pMonsterDict:objectForKey('height'), 'String')):intValue()
		table.insert(_LUAGameSceneView_Physics.mMonsterList, cpInfo)
	end
	-- npcs
	local pNpcGroup = pTiledMap:getObjectGroup("npcs")
	local pNpcObjects = pNpcGroup:getObjects()
	local pNpcDict = nil
	local ni = 0
    for ni = 0, table.getn(pNpcObjects)-1, 1 do
		local cpInfo = {}
        pNpcDict = tolua.cast(pNpcObjects[i + 1], 'Dictionary')
		cpInfo.x = (tolua.cast(dPoint1:objectForKey('x'), 'String')):intValue()
		cpInfo.y = (tolua.cast(dPoint1:objectForKey('y'), 'String')):intValue()
		cpInfo.w = (tolua.cast(pMonsterDict:objectForKey('width'), 'String')):intValue()
		cpInfo.h = (tolua.cast(pMonsterDict:objectForKey('height'), 'String')):intValue()
		table.insert(_LUAGameSceneView_Physics.mNpcList, cpInfo)
	end
end
