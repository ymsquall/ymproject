#pragma once
#include "unity/platform.h"
#include "mvvm/model.h"

using namespace framework;

// 这里使用c++11新特性解决枚举尺寸问题
enum class ModelType : uint16
{
	ZERO	= 0,
	Login	= 1,
	LIMIT	= 0xffff,
};

#define MODEL_TYPECLASS_DECLARE(name, )