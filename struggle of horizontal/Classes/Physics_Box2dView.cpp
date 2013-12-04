#include "Physics_Box2dView.h"
#include "Physics_GLESDebugDraw.h"
#include "Physics_GameScene.h"

Physics_Box2DView::Physics_Box2DView(void)
{
	mPhysics = NULL;
}

Physics_Box2DView::~Physics_Box2DView()
{
	// Removes Touch Event Listener
	_eventDispatcher->removeEventListener(mTouchListener);
	delete mPhysics;
}

Physics_Box2DView* Physics_Box2DView::create(int physType)
{
    Physics_Box2DView* pView = new Physics_Box2DView();
	if(pView && pView->initWithType(physType))
		pView->autorelease();
	else
	{
		delete pView;
		pView = NULL;
	}
    return pView;
}

bool Physics_Box2DView::initWithType(int physType)
{
    switch(physType)
	{
	case 1:
		{
			mPhysics = new GameScenePhysics();
		}
		break;
	}
    if(NULL != mPhysics)
	{
		// Adds Touch Event Listener
		mTouchListener = EventListenerTouchOneByOne::create();
		mTouchListener->setSwallowTouches(true);

		mTouchListener->onTouchBegan = CC_CALLBACK_2(Physics_Box2DView::onTouchBegan, this);
		mTouchListener->onTouchMoved = CC_CALLBACK_2(Physics_Box2DView::onTouchMoved, this);
		mTouchListener->onTouchEnded = CC_CALLBACK_2(Physics_Box2DView::onTouchEnded, this);
		_eventDispatcher->addEventListenerWithFixedPriority(mTouchListener, -10);
		schedule( schedule_selector(Physics_Box2DView::tick) );
		return true;
	}
    return false;
}

void Physics_Box2DView::tick(float dt)
{
    mPhysics->Step(&mPhysicsSettings);
}

void Physics_Box2DView::draw()
{
    Layer::draw();

	//GL::enableVertexAttribs( cocos2d::GL::VERTEX_ATTRIB_FLAG_POSITION );

	//kmGLPushMatrix();

	//mPhysics->mWorld->DrawDebugData();

	//kmGLPopMatrix();

	//CHECK_GL_ERROR_DEBUG();
}

bool Physics_Box2DView::onTouchBegan(Touch* touch, Event* event)
{
	auto touchLocation = touch->getLocation();    

	auto nodePosition = convertToNodeSpace( touchLocation );
	//log("Box2DView::onTouchBegan, pos: %f,%f -> %f,%f", touchLocation.x, touchLocation.y, nodePosition.x, nodePosition.y);

	return mPhysics->MouseDown(b2Vec2(nodePosition.x,nodePosition.y));
	return false;
}

void Physics_Box2DView::onTouchMoved(Touch* touch, Event* event)
{
	   auto touchLocation = touch->getLocation();    
	auto nodePosition = convertToNodeSpace( touchLocation );

	//log("Box2DView::onTouchMoved, pos: %f,%f -> %f,%f", touchLocation.x, touchLocation.y, nodePosition.x, nodePosition.y);

	mPhysics->MouseMove(b2Vec2(nodePosition.x,nodePosition.y));        
}

void Physics_Box2DView::onTouchEnded(Touch* touch, Event* event)
{
	auto touchLocation = touch->getLocation();    
	auto nodePosition = convertToNodeSpace( touchLocation );

	//log("Box2DView::onTouchEnded, pos: %f,%f -> %f,%f", touchLocation.x, touchLocation.y, nodePosition.x, nodePosition.y);

	mPhysics->MouseUp(b2Vec2(nodePosition.x,nodePosition.y));
}

