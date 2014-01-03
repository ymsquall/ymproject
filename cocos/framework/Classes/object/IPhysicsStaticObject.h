#pragma once

#include "IStaticObject.h"
#include "physics/PhysicsObject.h"

using namespace engine;

namespace framework
{
	namespace object
	{
		template<uint16 typeValue, size_t rttiLength>
		class IPhysicsStaticObject : public IStaticObject<typeValue, rttiLength>, public physics::PhysicsObject
		{
		public:
			IPhysicsStaticObject(const char* ascType) : IStaticObject<typeValue, rttiLength>(ascType){}
			virtual ~IPhysicsStaticObject(){}

		protected:
		};
	}
}