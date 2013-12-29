#include "Player.h"
#include "Physics_GameScene.h"

Player::Player(b2World* pWorld) :
	SuperT(object::ObjectType::TN_Player, pWorld),
	JumpDelegate(this)
{
}
Player::~Player()
{

}

bool Player::init()
{
	return true;
}
bool Player::finalize()
{
	return true;
}
void Player::loop(float dt)
{
}
int Player::PhysicsPreSolve(b2Contact* contact, const b2Manifold* oldManifold, const physics::PhysicsBodyList& landList)
{
	int ret = 0;

	return ret;
}
void Player::Step(physics::ObjectSettings* settings)
{
	static CreaturePhysicsSteeings playerSettings;
	playerSettings.mIsHeroDorping = mIsHeroDorping;
	playerSettings.mIsOriJump = mIsOriJump;
	playerSettings.mUsingVerticeCount = 0;
	ICreatue::Step(&playerSettings);
	if(mIsJumping)
	{
		mMoveBody->SetFixedRotation(true); // ����������Ϊ�̶��Ƕȣ�����ת�����������������λ��
		if(!mWorld->IsLocked())
		{
			b2Vec2 pos = mMoveBody->GetWorldCenter();
			mMoveBody->SetTransform(pos, 0.0f);
		}
	}
}