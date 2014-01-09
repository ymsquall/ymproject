#pragma once
#include <Box2D/Box2D.h>
#include "unity/object.h"
//#include "physics/PhysicsObject.h"

using namespace framework;
//using namespace engine;
class ICreatue;

enum class JumpState : int8
{
	none,		// 落地后的状态
	jumpup,		// 瞬时状态，起跳
	jumping,	// 持续状态，上升
	floated,	// 瞬时状态，悬浮
	droping,	// 瞬时状态，下落
	landdown,	// 瞬时状态，落地
};

class JumpDelegate
{
public:
	JumpDelegate(ICreatue* delgte);
	virtual ~JumpDelegate();

	void jump(float speed);
	void setIsHeroDorping(bool b);
	bool getIsHeroDorping();

protected:
	bool mIsHeroDorping;
	bool mIsOriJump;
	bool mIsJumping;
	JumpState mJumpState;
	ICreatue* mCreatureDelegate;
};