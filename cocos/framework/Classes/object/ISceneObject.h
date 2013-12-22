#pragma once

#include "unity/object.h"
#include "unity/interface.h"

using namespace framework;

class ISceneObject : public unity::object, public unity::IUpdateWithTypeAndInitAbstract
{
public:
	virtual ~ISceneObject(){}

protected:
};