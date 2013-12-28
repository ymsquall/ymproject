#pragma once

#include "unity/singleton.h"
#include "Player.h"

using namespace framework;

class LocalPlayer : public DynamicPhysicsCreature<object::ObjectType::RTTI_Player, object::ObjectType::TYPE_NAME_LENGTH>,
	public JumpDelegate
{
public:
	typedef DynamicPhysicsCreature<object::ObjectType::RTTI_Player, object::ObjectType::TYPE_NAME_LENGTH> SuperT;
	LocalPlayer(b2World* pWorld);
	virtual ~LocalPlayer();

	static LocalPlayer* create(b2World* pWorld);
	static void destory();
	static LocalPlayer* instance();

	virtual void Step(physics::ObjectSettings* settings) override;
	void PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList);

protected:
	virtual bool init() override;
	virtual bool finalize() override;
	virtual void loop(float dt) override;

protected:
	static LocalPlayer* mInstance;
};