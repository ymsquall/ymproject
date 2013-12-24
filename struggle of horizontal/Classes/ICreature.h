#pragma once

#include "object/IPhysicsMovableObject.h"
#include "object/IPhysicsStaticObject.h"

using namespace framework;

class DynamicPhysicsCreature : public object::IPhysicsMovableObject
{
public:
	DynamicPhysicsCreature();
	virtual ~DynamicPhysicsCreature();

protected:
};

//////////////////////////////////////////////////////////////////////////

class StaticPhysicsCreature : public object::IPhysicsStaticObject
{
public:
	StaticPhysicsCreature();
	virtual ~StaticPhysicsCreature();

protected:
};