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

	}
}
