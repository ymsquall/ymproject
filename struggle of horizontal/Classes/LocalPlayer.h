#pragma once

#include "unity/singleton.h"
#include "Player.h"
#include "cocos2d.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d;
using namespace framework;

class LocalPlayer : public unity::object, public JumpDelegate, public DynamicPhysicsCreature<object::ObjectType::RTTI_Player, object::ObjectType::TYPE_NAME_LENGTH>
{
public:
	typedef DynamicPhysicsCreature<object::ObjectType::RTTI_Player, object::ObjectType::TYPE_NAME_LENGTH> SuperT;
	LocalPlayer(b2World* pWorld);
	virtual ~LocalPlayer();

	static LocalPlayer* create(b2World* pWorld);
	static void destory();
	static LocalPlayer* instance();

	void setAnimView(cocostudio::Armature* anim);
	void beAttacked(ICreatue* who, bool clobber = false);

	virtual void StepBefore(physics::ObjectSettings* settings) override;
	virtual void StepAfter() override;
	int PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList);

protected:
	virtual bool init() override;
	virtual bool finalize() override;
	virtual void loop(float dt) override;

	void comboTimer(float dt);

	void onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex);
	void animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID);

protected:
	static LocalPlayer* mInstance;
	cocostudio::Armature* mAnimView;
	float mComboCountdownTimer;
	int mNowComboCount;
};