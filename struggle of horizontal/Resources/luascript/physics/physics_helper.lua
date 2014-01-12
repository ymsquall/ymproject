__LUAHelper_PhysicsDebugImageSize = { w = 100, h = 100 }
PHYSICSSHAPE_MATERIAL_DEFAULT = PhysicsMaterial(0.0, 0.5, 0.5)
function LUAHelper_CreateLinePhysicsBodyNode(center, p1, p2, material)
	local bodyNode = cc.Node:create()
	local physicsBody = PhysicsBody:createEdgeSegment(p1, p2, material)
	bodyNode:setPhysicsBody(physicsBody)
	bodyNode:setPosition(center)
	return bodyNode
end

function LUAHelper_CreateBoxPhysicsBody(offset, size, material)
	material = material or PHYSICSSHAPE_MATERIAL_DEFAULT
	local physicsBody = PhysicsBody:createBox(CCSize(size.width, size.height), material, CCPoint(offset.x, offset.y))
	return physicsBody
end
