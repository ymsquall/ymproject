#pragma once
#include "cocos2d.h"
#include "unity/singleton.h"
#include "uiview/Panel/Panel.h"

using namespace framework;
using namespace engine;

class RootSceneView : public cocos2d::Scene
	, public unity::SingletonT<RootSceneView>
{
public:
	RootSceneView(void);
	~RootSceneView(void);

	static RootSceneView *createWithPhysics();

	virtual void addChild(Node* child) override;
	virtual void addChild(Node* child, int zOrder) override;
	virtual void addChild(Node* child, int zOrder, int tag) override;

private:

	virtual void onEnter();
	virtual void onEnterTransitionDidFinish();

	virtual void onExit();
	virtual void onExitTransitionDidStart();

private:
	virtual void update(float delta) override;
	virtual void visit() override;

private:
	// debug
	void debugDrawPhysicsShape();
	void debugDrawPhysicsJoint();
	void debugDrawPhysicsContact();
private:
	cocos2d::DrawNode* mDrawNode;
	float mRatio;
	cocos2d::GLProgram* mShaderProgram;
	GLint mColorLocation;
};

