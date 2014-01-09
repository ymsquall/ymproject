#pragma once

#include "ICreature.h"
#include "JumpDelegate.h"

class Player : public DynamicPhysicsCreature<object::ObjectType::RTTI_Player, object::ObjectType::TYPE_NAME_LENGTH>,
	public JumpDelegate
{
public:
	typedef DynamicPhysicsCreature<object::ObjectType::RTTI_Player, object::ObjectType::TYPE_NAME_LENGTH> SuperT;
	Player(b2World* pWorld);
	virtual ~Player();

	//virtual void StepBefore(physics::ObjectSettings* settings) override;
	//virtual void StepAfter() override;
	//int PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList);

protected:
	virtual bool init() override;
	virtual bool finalize() override;
	virtual void loop(float dt) override;

protected:
};