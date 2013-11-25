#include "PhysicsBase.h"
#include <stdio.h>

void DestructionListener::SayGoodbye(b2Joint* joint)
{
    if (test->m_mouseJoint == joint)
    {
        test->m_mouseJoint = NULL;
    }
    else
    {
        test->JointDestroyed(joint);
    }
}

PhysicsBase::PhysicsBase()
{
    b2Vec2 gravity;
    gravity.Set(0.0f, -10.0f);
    mWorld = new b2World(gravity);
    m_bomb = NULL;
    m_textLine = 30;
    m_mouseJoint = NULL;
    m_pointCount = 0;

    m_destructionListener.test = this;
    mWorld->SetDestructionListener(&m_destructionListener);
    mWorld->SetContactListener(this);
    mWorld->SetDebugDraw(&mDebugDraw);
    
    m_bombSpawning = false;

    m_stepCount = 0;

    b2BodyDef bodyDef;
    mEdgeGround = mWorld->CreateBody(&bodyDef);

    memset(&m_maxProfile, 0, sizeof(b2Profile));
    memset(&m_totalProfile, 0, sizeof(b2Profile));
}

PhysicsBase::~PhysicsBase()
{
    // By deleting the world, we delete the bomb, mouse joint, etc.
    delete mWorld;
    mWorld = NULL;
}

void PhysicsBase::PreSolve(b2Contact* contact, const b2Manifold* oldManifold)
{
    const b2Manifold* manifold = contact->GetManifold();

    if (manifold->pointCount == 0)
    {
        return;
    }

    b2Fixture* fixtureA = contact->GetFixtureA();
    b2Fixture* fixtureB = contact->GetFixtureB();

    b2PointState state1[b2_maxManifoldPoints], state2[b2_maxManifoldPoints];
    b2GetPointStates(state1, state2, oldManifold, manifold);

    b2WorldManifold worldManifold;
    contact->GetWorldManifold(&worldManifold);

    for (int32 i = 0; i < manifold->pointCount && m_pointCount < k_maxContactPoints; ++i)
    {
        auto cp = m_points + m_pointCount;
        cp->fixtureA = fixtureA;
        cp->fixtureB = fixtureB;
        cp->position = worldManifold.points[i];
        cp->normal = worldManifold.normal;
        cp->state = state2[i];
        ++m_pointCount;
    }
}

class QueryCallback : public b2QueryCallback
{
public:
    QueryCallback(const b2Vec2& point)
    {
        m_point = point;
        m_fixture = NULL;
    }

    bool ReportFixture(b2Fixture* fixture)
    {
        b2Body* body = fixture->GetBody();
        if (body->GetType() == b2_dynamicBody)
        {
            bool inside = fixture->TestPoint(m_point);
            if (inside)
            {
                m_fixture = fixture;

                // We are done, terminate the query.
                return false;
            }
        }

        // Continue the query.
        return true;
    }

    b2Vec2 m_point;
    b2Fixture* m_fixture;
};
void PhysicsBase::Step(Settings* settings)
{
    float32 timeStep = settings->hz > 0.0f ? 1.0f / settings->hz : float32(0.0f);
    if (settings->pause)
    {
        if (settings->singleStep)
        {
            settings->singleStep = 0;
        }
        else
        {
            timeStep = 0.0f;
        }
	}
    uint32 flags = 0;
    flags += settings->drawShapes            * b2Draw::e_shapeBit;
    flags += settings->drawJoints            * b2Draw::e_jointBit;
    flags += settings->drawAABBs            * b2Draw::e_aabbBit;
    flags += settings->drawPairs            * b2Draw::e_pairBit;
    flags += settings->drawCOMs                * b2Draw::e_centerOfMassBit;
    mDebugDraw.SetFlags(flags);

    mWorld->SetWarmStarting(settings->enableWarmStarting > 0);
    mWorld->SetContinuousPhysics(settings->enableContinuous > 0);
    mWorld->SetSubStepping(settings->enableSubStepping > 0);
    m_pointCount = 0;
	/*
	// 对整个world进行偏移
	for(b2Body* b = mWorld->GetBodyList(); NULL != b; b = b->GetNext())
	{
		b2Vec2 pos = b->GetPosition();
		pos += settings->viewCenter;
		b->SetTransform(pos, 0);
	}
	*/
	settings->viewCenter.SetZero();
    mWorld->Step(timeStep, settings->velocityIterations, settings->positionIterations);
}


bool PhysicsBase::MouseDown(const b2Vec2& p)
{
	m_mouseWorld = p;

	if (m_mouseJoint != NULL)
	{
		return false;
	}

	// Make a small box.
	b2AABB aabb;
	b2Vec2 d;
	d.Set(0.001f, 0.001f);
	aabb.lowerBound = p - d;
	aabb.upperBound = p + d;

	// Query the world for overlapping shapes.
	QueryCallback callback(p);
	mWorld->QueryAABB(&callback, aabb);

	if (callback.m_fixture)
	{
		b2Body* body = callback.m_fixture->GetBody();
		b2MouseJointDef md;
		md.bodyA = mEdgeGround;
		md.bodyB = body;
		md.target = p;
		md.maxForce = 1000.0f * body->GetMass();
		m_mouseJoint = (b2MouseJoint*)mWorld->CreateJoint(&md);
		body->SetAwake(true);
		return true;
	}
	return false;
}

void PhysicsBase::SpawnBomb(const b2Vec2& worldPt)
{
	m_bombSpawnPoint = worldPt;
	m_bombSpawning = true;
}

void PhysicsBase::CompleteBombSpawn(const b2Vec2& p)
{
	if (m_bombSpawning == false)
	{
		return;
	}

	const float multiplier = 30.0f;
	b2Vec2 vel = m_bombSpawnPoint - p;
	vel *= multiplier;
	LaunchBomb(m_bombSpawnPoint,vel);
	m_bombSpawning = false;
}

void PhysicsBase::ShiftMouseDown(const b2Vec2& p)
{
	m_mouseWorld = p;

	if (m_mouseJoint != NULL)
	{
		return;
	}

	SpawnBomb(p);
}

void PhysicsBase::MouseUp(const b2Vec2& p)
{
	if (m_mouseJoint)
	{
		mWorld->DestroyJoint(m_mouseJoint);
		m_mouseJoint = NULL;
	}

	if (m_bombSpawning)
	{
		CompleteBombSpawn(p);
	}
}

void PhysicsBase::MouseMove(const b2Vec2& p)
{
	m_mouseWorld = p;

	if (m_mouseJoint)
	{
		m_mouseJoint->SetTarget(p);
	}
}

void PhysicsBase::LaunchBomb()
{
	b2Vec2 p(RandomFloat(-15.0f, 15.0f), 30.0f);
	b2Vec2 v = -5.0f * p;
	LaunchBomb(p, v);
}

void PhysicsBase::LaunchBomb(const b2Vec2& position, const b2Vec2& velocity)
{
	if (m_bomb)
	{
		mWorld->DestroyBody(m_bomb);
		m_bomb = NULL;
	}

	b2BodyDef bd;
	bd.type = b2_dynamicBody;
	bd.position = position;
	bd.bullet = true;
	m_bomb = mWorld->CreateBody(&bd);
	m_bomb->SetLinearVelocity(velocity);

	b2CircleShape circle;
	circle.m_radius = 0.3f;

	b2FixtureDef fd;
	fd.shape = &circle;
	fd.density = 20.0f;
	fd.restitution = 0.0f;

	b2Vec2 minV = position - b2Vec2(0.3f,0.3f);
	b2Vec2 maxV = position + b2Vec2(0.3f,0.3f);

	b2AABB aabb;
	aabb.lowerBound = minV;
	aabb.upperBound = maxV;

	m_bomb->CreateFixture(&fd);
}
