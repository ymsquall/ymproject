#include "RootSceneView.h"
#include "ViewModelManager.h"
#include "luaext/LuaHelper.h"
#include "ViewModel_GameScene.h"
#include "CocoStudio/CocoStudio.h"
#include "LocalPlayer.h"
#include "Monster.h"
#include "Physics_GameScene.h"

RootSceneView::RootSceneView(void)
{
	mDrawNode = NULL;
	mRatio = 1.0f;
}

RootSceneView::~RootSceneView(void)
{
}

RootSceneView *RootSceneView::createWithPhysics()
{
	RootSceneView *pRet = new RootSceneView();
	if (pRet && pRet->initWithPhysics())
	{
		pRet->autorelease();
		return pRet;
	}
	else
	{
		CC_SAFE_DELETE(pRet);
		return NULL;
	}
}

void RootSceneView::onEnter()
{
	cocos2d::Scene::onEnter();
}
void RootSceneView::onEnterTransitionDidFinish()
{
	cocos2d::Scene::onEnterTransitionDidFinish();
	this->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_NONE);
	ViewModelManager::point()->selectModel(ModelType::GameScene);
#ifdef _DEBUG
	static int debugTag = 10001; 
	if(NULL != mDrawNode)
	{
		mDrawNode->removeFromParent();
		mDrawNode = NULL;
	}
	mDrawNode = DrawNode::create();
	TMXTiledMap* pMap = GameSceneViewModel::point()->getTiledMap();
	pMap->addChild(mDrawNode, debugTag, debugTag);

	mShaderProgram = ShaderCache::getInstance()->getProgram(GLProgram::SHADER_NAME_POSITION_U_COLOR);
	mColorLocation = glGetUniformLocation(mShaderProgram->getProgram(), "u_color");

#endif
}

void RootSceneView::onExit()
{
	cocos2d::Scene::onExit();
}
void RootSceneView::onExitTransitionDidStart()
{
	this->unscheduleUpdate();
	cocos2d::Scene::onExitTransitionDidStart();
}

void RootSceneView::update(float delta)
{
	cocos2d::Scene::update(delta);
}
void RootSceneView::visit()
{
	Scene::visit();
#ifdef _DEBUG
	this->debugDrawPhysicsShape();
	this->debugDrawPhysicsJoint();
	this->debugDrawPhysicsContact();
#endif
}
void RootSceneView::debugDrawPhysicsShape()
{
	if(NULL != mDrawNode)
	{
		mDrawNode->clear();
		const PhysicsWorld* pWorld = this->getPhysicsWorld();
		if(NULL != pWorld)
		{
			Array* pBidies = pWorld->getAllBodies();
			for (Object* obj : *pBidies)
			{
				const PhysicsBody* pBody = dynamic_cast<PhysicsBody*>(obj);
				Point nodePos = pBody->getNode()->getPosition();
				Point centerPos = pBody->getNode()->getParent()->convertToWorldSpace(nodePos);
				Point parentPos = pBody->getNode()->getParent()->getPosition();
				for (auto pShape : *pBody->getShapes())
				{
					const PhysicsShape& shape = static_cast<const PhysicsShape&>(*pShape);
					switch(shape.getType())
					{
					case PhysicsShape::Type::CIRCLE:
						{
							PhysicsShapeCircle* pCircle = static_cast<PhysicsShapeCircle*>(pShape);
							float radius = pCircle->getRadius();
							Point centre = pCircle->getCenter();
							static const int CIRCLE_SEG_NUM = 12;
							Point seg[CIRCLE_SEG_NUM] = {};
							for (int i = 0; i < CIRCLE_SEG_NUM; ++i)
							{
								float angle = (float)i * M_PI / (float)CIRCLE_SEG_NUM * 2.0f;
								Point d(radius * cosf(angle), radius * sinf(angle));
								seg[i] = centre + d;
							}
							mDrawNode->drawPolygon(seg, CIRCLE_SEG_NUM, Color4F(1.0f, 1.0f, 0.0f, 0.3f), 10, Color4F(1, 0, 0, 1));
						}
						break;
					case PhysicsShape::Type::BOX:
						{
							Color4F color(1.0f,0.0f,0.0f,1.0f);
							mShaderProgram->use();
							mShaderProgram->setUniformsForBuiltins();
							const PhysicsShapeBox* pBox = static_cast<const PhysicsShapeBox*>(pShape);	
							Point pts[4];
							pBox->getPoints(pts);
							Point* vertices = new Point[4];
							for( int i=0;i<4;i++) {
								vertices[i] = pts[i];
								vertices[i].x *= mRatio;
								vertices[i].y *= mRatio;
								vertices[i] += centerPos;
							}
							mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r*0.5f, color.g*0.5f, color.b*0.5f, color.a*0.5f);
							glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, vertices);
							glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
							mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, color.a);
							glDrawArrays(GL_LINE_LOOP, 0, 4);
							CC_INCREMENT_GL_DRAWS(2);
							CHECK_GL_ERROR_DEBUG();
							delete[] vertices;
						}
						break;
					case PhysicsShape::Type::POLYGEN:
						{
							const PhysicsShapePolygon* pPolygon = static_cast<const PhysicsShapePolygon*>(pShape);
							int count = pPolygon->getPointsCount();
							Point* pts = new Point[count];
							pPolygon->getPoints(pts);
							mDrawNode->drawPolygon(pts, count, Color4F(1.0f, 1.0f, 0.0f, 0.3f), 10, Color4F(1, 0, 0, 1));
							delete []pts;
						}
						break;
					case PhysicsShape::Type::EDGESEGMENT:
						{
							Color4F color(1.0f,0.0f,0.0f,1.0f);
							mShaderProgram->use();
							mShaderProgram->setUniformsForBuiltins();
							const PhysicsShapeEdgeSegment* pLines = static_cast<const PhysicsShapeEdgeSegment*>(pShape);
							Point pts[2];
							pts[0] = pLines->getPointA();
							pts[1] = pLines->getPointB();
							GLfloat glVertices[] = 
							{
								pts[0].x * mRatio + parentPos.x, pts[0].y * mRatio + parentPos.y,
								pts[1].x * mRatio + parentPos.x, pts[1].y * mRatio + parentPos.y
							};
							mShaderProgram->setUniformLocationWith4f(mColorLocation, color.r, color.g, color.b, color.a);
							glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, 0, glVertices);
							glDrawArrays(GL_LINES, 0, 2);
							CC_INCREMENT_GL_DRAWS(1);
							CHECK_GL_ERROR_DEBUG();
						}
						break;
					//case PhysicsShape::Type::EDGEBOX:
					//	{
					//		const PhysicsShapeEdgeBox* pPolygon = static_cast<const PhysicsShapeEdgeBox*>(pShape);
					//		int count = pPolygon->getPointsCount();
					//		Point* pts = new Point[count];
					//		pPolygon->getPoints(pts);
					//		mDrawNode->drawPolygon(pts, count, Color4F(1.0f, 0.0f, 0.0f, 0.3f), 1, Color4F(1, 0, 0, 1));
					//		delete []pts;
					//	}
					//	break;
					//case PhysicsShape::Type::EDGEPOLYGEN:
					//	{
					//		const PhysicsShapeEdgePolygon* pEdgePolygon = static_cast<const PhysicsShapeEdgePolygon*>(pShape);
					//		int count = pEdgePolygon->getPointsCount();
					//		Point* pts = new Point[count];
					//		pEdgePolygon->getPoints(pts);
					//		mDrawNode->drawPolygon(pts, count, Color4F(1.0f, 0.0f, 0.0f, 0.3f), 1, Color4F(1, 0, 0, 1));
					//		delete []pts;
					//	}
					//	break;
					//case PhysicsShape::Type::EDGECHAIN:
					//	{
					//		const PhysicsShapeEdgeChain* pChain = static_cast<const PhysicsShapeEdgeChain*>(pShape);
					//		int count = pChain->getPointsCount();
					//		Point* pts = new Point[count];
					//		pChain->getPoints(pts);
					//		mDrawNode->drawPolygon(pts, count, Color4F(1.0f, 0.0f, 0.0f, 0.3f), 1, Color4F(1, 0, 0, 1));
					//		delete []pts;
					//	}
					//	break;
					}
				}
			}
		}
	}
}
void RootSceneView::debugDrawPhysicsJoint()
{
}
void RootSceneView::debugDrawPhysicsContact()
{

}

void RootSceneView::addChild(Node* child)
{
	Node::addChild(child);
}
void RootSceneView::addChild(Node* child, int zOrder)
{
	Node::addChild(child, zOrder);
}
void RootSceneView::addChild(Node* child, int zOrder, int tag)
{
	Node::addChild(child, zOrder, tag);
	addChildToPhysicsWorld(child);

	//const char* nodeNames[] = {
	//	"weapon_r", "head", "body", "arm_l", "arm_r", "leg_l", "leg_r"
	//};

	//cocostudio::Armature* pLocalAnim = GameSceneViewModel::point()->getLocalPlayerAnimView();
	//for(int i = 0; i < 7; ++ i)
	//{
	//	cocostudio::CCBone* pBone = pLocalAnim->getBone(nodeNames[i]);
	//	if(NULL != pBone)
	//	{
	//		Node* pNode = pBone->getDisplayRenderNode();
	//		addChildToPhysicsWorld(pNode);
	//	}
	//}
	//const PhysicsCreatureList& monsters = GameScenePhysics::point()->getMonsters();
	//for(PhysicsCreatureList::const_iterator it = monsters.begin();
	//	it != monsters.end(); ++ it)
	//{
	//	Monster* pMonster = static_cast<Monster*>(it->first);
	//	for(int i = 0; i < 7; ++ i)
	//	{
	//		cocostudio::CCBone* pBone = pMonster->getAnimView()->getBone(nodeNames[i]);
	//		if(NULL != pBone)
	//		{
	//			Node* pNode = pBone->getDisplayRenderNode();
	//			addChildToPhysicsWorld(pNode);
	//		}
	//	}
	//}
}
