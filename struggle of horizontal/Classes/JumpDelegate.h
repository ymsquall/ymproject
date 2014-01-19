#pragma once
#include <Box2D/Box2D.h>
#include "unity/object.h"
#include "physics/PhysicsObject.h"

using namespace framework;
using namespace engine;
class ICreature;

enum class JumpState : int8
{
	none,		// ��غ��״̬
	jumpup,		// ˲ʱ״̬������
	jumping,	// ����״̬������
	floated,	// ˲ʱ״̬������
	droping,	// ����״̬������
	landdown,	// ˲ʱ״̬�����
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