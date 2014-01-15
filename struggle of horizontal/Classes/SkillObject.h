#pragma once

#include "unity/singleton.h"
#include "unity/interface.h"
#include "Player.h"
#include "cocos2d.h"
#include "CocoStudio/CocoStudio.h"

using namespace cocos2d;
using namespace framework;

class SkillObject : public unity::object, public ICreatue, public physics::PhysicsObject, public unity::IInitAbstract
{
public:
	SkillObject(b2World* pWorld);
	virtual ~SkillObject();

	virtual bool init() override { return true; }
	virtual bool finalize() override { return true; }

	static SkillObject* create(const CCPoint& faceNormal, const CCPoint& pos, float speed, const std::string& animName);
	void destory();
	virtual void StepBefore(physics::ObjectSettings* settings) override;
	virtual void StepAfter() override;
	bool isHitTarget();

protected:
	bool initWithAnimName(const std::string& animName, const CCPoint& faceNormal, const CCPoint& pos, float speed);

	void comboTimer(float dt);
	void recoverHPTimer(float dt);
	void onDeathTimer(float dt);
	void updateHPView();
	void onDeath();

	void onFrameEvent(cocostudio::Bone *bone, const char *evt, int originFrameIndex, int currentFrameIndex);
	void animationEvent(cocostudio::Armature *armature, cocostudio::MovementEventType movementType, const char *movementID);

	void onSkillOvered(Node* node);

protected:
	std::string mAnimName;
	Point mStartPos;
	Point mFaceNormal;
	float mSpeed;
	bool mHitTarget;
	cocostudio::ContourData* mPhysicsContourData;
};