#pragma once

#include "cocostudio/CocoStudio.h"
#include "ICreature.h"
#include "JumpDelegate.h"

class Monster : public unity::object, public JumpDelegate, public DynamicPhysicsCreature<object::ObjectType::RTTI_Monster, object::ObjectType::TYPE_NAME_LENGTH>
{
public:
	typedef DynamicPhysicsCreature<object::ObjectType::RTTI_Monster, object::ObjectType::TYPE_NAME_LENGTH> SuperT;
	Monster(b2World* pWorld);
	virtual ~Monster();

	virtual void StepBefore(physics::ObjectSettings* settings) override;
	virtual void StepAfter() override;
	int PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList);

	virtual bool init() override;
	virtual bool finalize() override;
	virtual void loop(float dt) override;

	void beAttacked(ICreatue* who, const Point& hitPos, bool clobber = false);

protected:
	void simpleAITimer(float dt);
	void recoverHPTimer(float dt);
	void onDeathTimer(float dt);
	void onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex);
	void animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID);
	void updateHPView();
	void onDeath();

protected:
	float mActiveAttackTimer;
	int mAICanActiveAttacked;
	float mDeathTimer;
};