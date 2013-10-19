#pragma once
#include "cocos2d.h"
#include "unity/singleton.h"

using namespace framework;

class TopLevelView : public cocos2d::Node
	, public unity::SingletonAutoT<TopLevelView>
{
public:
	TopLevelView(void);
	~TopLevelView(void);
};

