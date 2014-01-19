#include "JumpDelegate.h"
#include "Player.h"
#include "LocalPlayer.h"
#include "Monster.h"
#include "luaext/LuaHelper.h"

JumpDelegate::JumpDelegate(ICreature* delgte)
{
	mCreatureDelegate = delgte;
	mIsOriJump = true;
	mLastDropingSpeed = 0.0f;
	mJumpperSpeed = 0.0f;
	mJumpState = JumpState::none;
}
JumpDelegate::~JumpDelegate()
{

}

void JumpDelegate::jump(float speed)
{
	if(!this->changeJumpState(JumpState::jumpup))
		return;
	mLastDropingSpeed = 0.0f;
	if(fabs(mCreatureDelegate->mMoveDir.x) > 0.001f)
		mIsOriJump = false;
	else
		mIsOriJump = true;
	mJumpperSpeed = speed;
	b2Vec2 vel = mCreatureDelegate->mMoveBody->GetLinearVelocity();
	vel.y = mJumpperSpeed;
	mCreatureDelegate->mMoveBody->SetLinearVelocity(vel);
}

void JumpDelegate::setIsHeroDorping(bool b)
{
	if(mJumpState != JumpState::none)
		return;
	if(true == b)
		mJumpState = JumpState::droping;
}

const std::string& getJumpStateName(JumpState state)
{
	static std::string ret;
	switch(state)
	{
	case JumpState::jumpup: ret = "jumpup"; break;
	case JumpState::jumping: ret = "jumping"; break;
	case JumpState::floated: ret = "floated"; break;
	case JumpState::droping: ret = "droping"; break;
	case JumpState::landdown: ret = "landdown"; break;
	default: ret = "none"; break;
	}
	return ret;
}

bool JumpDelegate::changeJumpState(JumpState state)
{
	if(mJumpState == state)
		return false;
	if(state == JumpState::none)
	{
		mJumpState = state;
		return true;
	}
	const std::string oldStateStr = getJumpStateName(mJumpState);
	const std::string stateStr = getJumpStateName(state);
	ICreature* pCreature = NULL;
	if(LocalPlayer::instance() == this)
		pCreature = LocalPlayer::instance();
	else
		pCreature = dynamic_cast<Monster*>(this);
	if(callLuaFuncWithBoolResult("LUACreatureChangedJumpState", pCreature, oldStateStr, stateStr))
	{
		mJumpState = state;
		return true;
	}
	return false;
}

void JumpDelegate::updateJumpState()
{
	if(mJumpState == JumpState::none)
		return;
	static const std::string stand1 = "stand01";
	static const std::string run1 = "run01";
	static const std::string jumping1 = "jumping01";
	static const std::string jumpup1 = "jumpup01";
	static const std::string landdown1 = "landdown01";
	const std::string& nowAction = mCreatureDelegate->getAnimView()->getAnimation()->getCurrentMovementID();
	if(nowAction == jumpup1)
		return;
	b2Vec2 vel = mCreatureDelegate->mMoveBody->GetLinearVelocity();
	if(vel.y == 0.0f)
	{
		this->changeJumpState(JumpState::floated);
	}
	else if(vel.y < 0.0f)
	{
		if(mLastDropingSpeed > vel.y)
		{
			this->changeJumpState(JumpState::droping);
		}
		mLastDropingSpeed = vel.y;
	}
}