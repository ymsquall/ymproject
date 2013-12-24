#pragma once

#include "unity/singleton.h"
#include "Player.h"

using namespace framework;

class LocalPlayer : public Player, public unity::SingletonAutoT<LocalPlayer>
{
public:
	LocalPlayer();
	virtual ~LocalPlayer();


};