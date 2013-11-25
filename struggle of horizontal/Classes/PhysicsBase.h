#pragma once

#include <Box2D/Box2D.h>
#include "Physics_GLESDebugDraw.h"
#include <cstdlib>

#define	RAND_LIMIT		32767
#define	PTM_RATIO		32.0f
#define	VIEW_SCALE_RATE	15.0f

/// Random number in range [-1,1]
inline float32 RandomFloat()
{
    float32 r = (float32)(std::rand() & (RAND_LIMIT));
    r /= RAND_LIMIT;
    r = 2.0f * r - 1.0f;
    return r;
}

/// Random floating point number in range [lo, hi]
inline float32 RandomFloat(float32 lo, float32 hi)
{
    float32 r = (float32)(std::rand() & (RAND_LIMIT));
    r /= RAND_LIMIT;
    r = (hi - lo) * r + lo;
    return r;
}

/// Test settings. Some can be controlled in the GUI.
struct Settings
{
    Settings() :
        viewCenter(0.0f, 0.0f),
        hz(60.0f),
        velocityIterations(8),
        positionIterations(3),
        drawShapes(1),
        drawJoints(1),
        drawAABBs(0),
        drawPairs(0),
        drawContactPoints(0),
        drawContactNormals(0),
        drawContactForces(0),
        drawFrictionForces(0),
        drawCOMs(0),
        drawStats(0),
        drawProfile(0),
        enableWarmStarting(1),
        enableContinuous(1),
        enableSubStepping(0),
        pause(0),
        singleStep(0)
        {}

    b2Vec2 viewCenter;
    float32 hz;
    int32 velocityIterations;
    int32 positionIterations;
    int32 drawShapes;
    int32 drawJoints;
    int32 drawAABBs;
    int32 drawPairs;
    int32 drawContactPoints;
    int32 drawContactNormals;
    int32 drawContactForces;
    int32 drawFrictionForces;
    int32 drawCOMs;
    int32 drawStats;
    int32 drawProfile;
    int32 enableWarmStarting;
    int32 enableContinuous;
    int32 enableSubStepping;
    int32 pause;
    int32 singleStep;
};

class PhysicsBase;
class DestructionListener : public b2DestructionListener
{
public:
    void SayGoodbye(b2Fixture* fixture) { B2_NOT_USED(fixture); }
    void SayGoodbye(b2Joint* joint);

    PhysicsBase* test;
};

const int32 k_maxContactPoints = 2048;

struct ContactPoint
{
    b2Fixture* fixtureA;
    b2Fixture* fixtureB;
    b2Vec2 normal;
    b2Vec2 position;
    b2PointState state;
};

class PhysicsBase : public b2ContactListener
{
public:
	friend class DestructionListener;
	friend class BoundaryListener;
	friend class ContactListener;

    PhysicsBase();
    virtual ~PhysicsBase();

    virtual void Step(Settings* settings);

    // Let derived tests know that a joint was destroyed.
    virtual void JointDestroyed(b2Joint* joint) { B2_NOT_USED(joint); }

    // Callbacks for derived classes.
    virtual void BeginContact(b2Contact* contact) override { B2_NOT_USED(contact); }
    virtual void EndContact(b2Contact* contact) override { B2_NOT_USED(contact); }
    virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override;
    virtual void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse) override
    {
        B2_NOT_USED(contact);
        B2_NOT_USED(impulse);
    }

	virtual void ShiftMouseDown(const b2Vec2& p);
	virtual bool MouseDown(const b2Vec2& p);
	virtual void MouseUp(const b2Vec2& p);
	void MouseMove(const b2Vec2& p);
	void LaunchBomb();
	void LaunchBomb(const b2Vec2& position, const b2Vec2& velocity);
	void SpawnBomb(const b2Vec2& worldPt);
	void CompleteBombSpawn(const b2Vec2& p);

public:
	b2World* mWorld;
    b2Body* mEdgeGround;
	b2AABB mWorldAABB;
	GLESDebugDraw mDebugDraw;

    ContactPoint m_points[k_maxContactPoints];
    int32 m_pointCount;
    DestructionListener m_destructionListener;
    int32 m_textLine;
    b2Body* m_bomb;
    b2MouseJoint* m_mouseJoint;
    b2Vec2 m_bombSpawnPoint;
    bool m_bombSpawning;
    b2Vec2 m_mouseWorld;
    int32 m_stepCount;

    b2Profile m_maxProfile;
    b2Profile m_totalProfile;
};

