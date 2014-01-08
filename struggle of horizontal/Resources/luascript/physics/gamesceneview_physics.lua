function LUAGameSceneView_Physics_Init(pTiledMap)
	local groundGroup = pTiledMap:getObjectGroup('ground')
	local groundObjects = groundGroup:getObjects()
	local pGroundDict = nil
    local i = 0
    local len = table.getn(groundObjects)
    for i = 0, len-1, 1 do
        pGroundDict = tolua.cast(groundObjects[i + 1], "Dictionary")
        if dict == nil then
			error('load scene static physics body node failed!!!!!')
            break
        end
        local x = (tolua.cast(pGroundDict:objectForKey('x'), "String")):intValue()--dynamic_cast<NSNumber*>(dict:objectForKey("x")):getNumber()
        local y = (tolua.cast(pGroundDict:objectForKey('y'), "String")):intValue()--dynamic_cast<NSNumber*>(dict:objectForKey("y")):getNumber()
        local oType = (tolua.cast(pGroundDict:objectForKey('type'), "String")):getCString()
        local pPointObj = (tolua.cast(pGroundDict:objectForKey('polylinePoints'), "Array"))
	end
	Dictionary* pGroundDict = NULL;
	Object* pGuoundObj = NULL;
	CCARRAY_FOREACH(gtoundObjects, pGuoundObj)
	{
		pGroundDict = static_cast<Dictionary*>(pGuoundObj);
		int x = ((String*)pGroundDict->objectForKey("x"))->intValue();
		int y = ((String*)pGroundDict->objectForKey("y"))->intValue();
		std::string oType = ((String*)pGroundDict->objectForKey("type"))->getCString();
		Object* pPointObj = pGroundDict->objectForKey("polylinePoints");// points
		if(NULL != pPointObj)
		{
			Array* pPoints = static_cast<Array*>(pPointObj);
			for(int i = 0; i < pPoints->count()-1; ++ i)
			{
				Dictionary* dPoint1 = static_cast<Dictionary*>(pPoints->objectAtIndex(i));
				Dictionary* dPoint2 = static_cast<Dictionary*>(pPoints->objectAtIndex(i+1));
				int pt1X = ((String*)dPoint1->objectForKey("x"))->intValue();
				int pt1Y = ((String*)dPoint1->objectForKey("y"))->intValue();
				int pt2X = ((String*)dPoint2->objectForKey("x"))->intValue();
				int pt2Y = ((String*)dPoint2->objectForKey("y"))->intValue();
				bool isWall = "wall" == oType;
				b2Body* pBody = this->createGround(b2Vec2(x, y), b2Vec2(pt1X / PTM_RATIO, -pt1Y / PTM_RATIO), b2Vec2(pt2X / PTM_RATIO, -pt2Y / PTM_RATIO), isWall);
				if(NULL != pBody)
				{
					if(!isWall)
						mLandList.push_back(pBody);
					else
						mWallList.push_back(pBody);
				}
			}
		}
		else
		{
			int width = ((String*)pGroundDict->objectForKey("width"))->intValue();
			int height = ((String*)pGroundDict->objectForKey("height"))->intValue();
			bool isWall = "wall" == oType;
			b2Body* pBody = this->createGround(b2Vec2(x, y), width, height, isWall);
			if(NULL != pBody)
			{
				if(!isWall)
					mLandList.push_back(pBody);
				else
					mWallList.push_back(pBody);
			}
		}
	}
	for(PhysicsCreatureList::iterator it = mMonsterPhysicsList.begin();
		it != mMonsterPhysicsList.end(); ++ it)
	{
		delete it->first;
	}
	for(PhysicsCreatureList::iterator it = mNPCPhysicsList.begin();
		it != mNPCPhysicsList.end(); ++ it)
	{
		delete it->first;
	}
	mMonsterPhysicsList.clear();
	mMonsterPhysicsInfoList.clear();
	mNPCPhysicsList.clear();
	mNPCPhysicsInfoList.clear();
	// monster
	TMXObjectGroup* monsterGroup = pTiledMap->getObjectGroup("monster");
	auto monsterObjects = monsterGroup->getObjects();
	Dictionary* pMonsterDict = NULL;
	Object* pMonsterObj = NULL;
	CCARRAY_FOREACH(monsterObjects, pMonsterObj)
	{
		CreaturePhysicsInfo cpInfo;
		pMonsterDict = static_cast<Dictionary*>(pMonsterObj);
		cpInfo.x = ((String*)pMonsterDict->objectForKey("x"))->intValue();
		cpInfo.y = ((String*)pMonsterDict->objectForKey("y"))->intValue();
		cpInfo.w = ((String*)pMonsterDict->objectForKey("width"))->intValue();
		cpInfo.h = ((String*)pMonsterDict->objectForKey("height"))->intValue();
		mMonsterPhysicsInfoList.push_back(cpInfo);
		Monster* pMonster = ICreatue::createWithBox<Monster>(mWorld, Point(cpInfo.x, cpInfo.y), Size(19.2f, 6.4f));
		if(NULL != pMonster)
			mMonsterPhysicsList[pMonster] = &cpInfo;
	}
	// npcs
	TMXObjectGroup* pNpcGroup = pTiledMap->getObjectGroup("npcs");
	auto pNpcObjects = pNpcGroup->getObjects();
	Dictionary* pNpcDict = NULL;
	Object* pNpcObj = NULL;
	CCARRAY_FOREACH(pNpcObjects, pNpcObj)
	{
		CreaturePhysicsInfo cpInfo;
		pNpcDict = static_cast<Dictionary*>(pNpcObj);
		cpInfo.x = ((String*)pNpcDict->objectForKey("x"))->intValue();
		cpInfo.y = ((String*)pNpcDict->objectForKey("y"))->intValue();
		cpInfo.w = ((String*)pNpcDict->objectForKey("width"))->intValue();
		cpInfo.h = ((String*)pNpcDict->objectForKey("height"))->intValue();
		mNPCPhysicsInfoList.push_back(cpInfo);
	}
end
