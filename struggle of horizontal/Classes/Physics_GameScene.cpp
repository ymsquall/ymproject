#include "Physics_GameScene.h"

GameScenePhysics::GameScenePhysics()
{
	mHeroMoveJoint = NULL;
	mHeroWeaponBody = NULL;
	mHeroWeaponBody1 = NULL;
	// edge
	{
		b2EdgeShape shape;
		b2FixtureDef fd;
		fd.shape = &shape;
		fd.density = 0.0f;
		fd.friction = 1.0f;
		shape.Set(b2Vec2(10.0f, 10.0f), b2Vec2(50.0f, 10.0f));
		mEdgeGround->CreateFixture(&fd);
	}
	// hero box
	{
		b2BodyDef bd;
		bd.type = b2_dynamicBody;
		bd.position.Set(25, 35);
		mHeroBody = mWorld->CreateBody(&bd);
		b2PolygonShape shape;
		b2FixtureDef fd;
		fd.shape = &shape;
		fd.density = 10.0f;
		fd.friction = 1.0f;
		shape.SetAsBox(2, 2, b2Vec2(0, 0), 0.0);
		mHeroBody->CreateFixture(&fd);
		//mHeroBody->SetFixedRotation(true); // 设置为固定角度（不旋转）
	}
	//// hero box
	//{
	//	b2BodyDef bd;
	//	bd.type = b2_dynamicBody;
	//	bd.position.Set(25, 35);
	//	mHeroWeaponBody1 = mWorld->CreateBody(&bd);
	//	b2PolygonShape shape;
	//	b2FixtureDef fd;
	//	fd.shape = &shape;
	//	fd.density = 0;
	//	fd.friction = 0;
	//	shape.SetAsBox(41/PTM_RATIO, 195/PTM_RATIO, b2Vec2(0, 0), 45.0);
	//	mHeroWeaponBody1->CreateFixture(&fd);
	//}
	mHeroMoveSpeed = 0;
}

GameScenePhysics::~GameScenePhysics()
{

}

void GameScenePhysics::Step(Settings* settings)
{
	b2Vec2 vel = mHeroBody->GetLinearVelocity();
	vel.x = mHeroMoveSpeed;
	mHeroBody->SetLinearVelocity(vel);
	PhysicsBase::Step(settings);
}

void GameScenePhysics::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
	PhysicsBase::PreSolve(contact, oldManifold);
}