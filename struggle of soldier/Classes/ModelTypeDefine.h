#pragma once
#include "unity/platform.h"
#include "mvvm/model.h"

using namespace framework;

// ����ʹ��c++11�����Խ��ö�ٳߴ�����
enum class ModelType : uint16
{
	ZERO	= 0,
	Login	= 1,
	LIMIT	= 0xffff,
};

#define MODEL_TYPECLASS_DECLARE(name, )