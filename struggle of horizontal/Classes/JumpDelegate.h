#pragma once
#include <Box2D/Box2D.h>
#include "unity/object.h"
#include "physics/PhysicsObject.h"

using namespace framework;
using namespace engine;
class ICreatue;

enum class JumpState : int8
{
	none,		// ��غ��״̬
	jumpup,		// ˲ʱ״̬������
	jumping,	// ����״̬������
	floated,	// ˲ʱ״̬������
	droping,	// ˲ʱ״̬������
	landdown,	// ˲ʱ״̬�����
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