#pragma once
#include "cocos2d.h"
#include "physics/PhysicsWorld.h"

using namespace cocos2d;
using namespace engine;

class Physics_Box2DView : public Layer
{
public:
    Physics_Box2DView(void);
    virtual ~Physics_Box2DView(void);

    bool initWithType(int physType);
    void tick(float dt);
    void draw();
    bool onTouchBegan(Touch* touch, Event* event);
    void onTouchMoved(Touch* touch, Event* event);
    void onTouchEnded(Touch* touch, Event* event);

    static Physics_Box2DView* create(int physType);

	template<class T> T* physics()
	{
		return dynamic_cast<T*>(mPhysics);
	}

private:
	EventListenerTouchOneByOne* mTouchListener;
	physics::WorldSettings mPhysicsSettings;
	physics::PhysicsWorld* mPhysics;
};
