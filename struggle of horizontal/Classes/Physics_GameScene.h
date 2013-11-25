#pragma once
#include "PhysicsBase.h"

class GameScenePhysics : public PhysicsBase
{
public:
	GameScenePhysics();
	~GameScenePhysics();
	typedef std::vector<b2Body*> GroundList;
    void Step(Settings* settings);
	
private:
	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override;

public:
	b2Body* mHeroBody;
	b2Body* mHeroWeaponBody;
	b2Body* mHeroWeaponBody1;
	GroundList mGroundList;
	b2MouseJoint* mHeroMoveJoint;

	float mHeroMoveSpeed;
};

