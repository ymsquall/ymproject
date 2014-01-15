#include "JumpDelegate.h"
#include "Player.h"

JumpDelegate::JumpDelegate(ICreatue* delgte)
{
	mCreatureDelegate = delgte;
	mIsHeroDorping = false;
	mIsOriJump = true;
	mIsJumping = false;
	mJumpState = JumpState::none;
}
JumpDelegate::~JumpDelegate()
{

}

void JumpDelegate::jump(float speed)
{
	if(mIsHeroDorping || mIsJumping)
		return;
	b2Vec2 vel = mCreatureDelegate->mMoveBody->GetLinearVelocity();
	vel.y = speed;
	mCreatureDelegate->mMoveBody->SetLinearVelocity(vel);
	if(fabs(mCreatureDelegate->mMoveDir.x) > 0.001f)
		mIsOriJump = false;
	mIsJumping = true;
}

void JumpDelegate::setIsHeroDorping(bool b)
{
	if(mIsHeroDorping)
	{
		if(!b)
			mIsOriJump = true;
	}
	else if(b)
	{
		mIsJumping = true;
	}
	mIsHeroDorping = b;
}
bool JumpDelegate::getIsHeroDorping()
{
	return mIsHeroDorping;
}
