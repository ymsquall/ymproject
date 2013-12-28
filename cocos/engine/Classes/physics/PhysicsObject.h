#pragma once

#include <Box2D/Box2D.h>
#include "Physics_GLESDebugDraw.h"
#include <cstdlib>

namespace engine
{
	namespace physics
	{
		struct ObjectSettings
		{
			ObjectSettings();
			virtual ~ObjectSettings();
		};

		class PhysicsObject : public b2ContactListener
		{
		public:
			friend class DestructionListener;
			friend class BoundaryListener;
			friend class ContactListener;

			PhysicsObject();
			virtual ~PhysicsObject();

			virtual void Step(ObjectSettings* settings);
		};
		typedef std::vector<b2Body*> PhysicsBodyList;
		typedef std::vector<PhysicsObject*> PhysicsObjectList;
	}
}

#ifndef RAND_LIMIT
#define	RAND_LIMIT		32767
#endif
#ifndef PTM_RATIO
#define	PTM_RATIO		32.0f
#endif
#ifndef VIEW_SCALE_RATE
#define	VIEW_SCALE_RATE	15.0f
#endif