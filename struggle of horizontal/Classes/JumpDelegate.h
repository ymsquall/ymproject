#pragma once
#include <Box2D/Box2D.h>
#include "unity/object.h"
#include "physics/PhysicsObject.h"

using namespace framework;
using namespace engine;
class ICreature;

enum class JumpState : int8
{
	none,		// 落地后的状态
	jumpup,		// 瞬时状态，起跳
	jumping,	// 持续状态，上升
	floated,	// 瞬时状态，悬浮
	droping,	// 持续状态，下落
	landdown,	// 瞬时状态，落地
};

class JumpDelegate
{
public:
	JumpDelegate(ICreature* delgte);
	virtual ~JumpDelegate();

	void jump(float speed);
	void setIsHeroDorping(bool b);

protected:
	bool changeJumpState(JumpState state);
	void updateJumpState();

protected:
	bool mIsOriJump;
	JumpState mJumpState;
	ICreature* mCreatureDelegate;
	float mLastDropingSpeed;
	float mJumpperSpeed;
};