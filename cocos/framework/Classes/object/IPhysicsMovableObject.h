#pragma once

#include "IMovableObject.h"
//#include "physics/PhysicsObject.h"

//using namespace engine;

namespace framework
{
	namespace object
	{
		template<uint16 typeValue, size_t rttiLength>
		class IPhysicsMovableObject : public IMovableObject<typeValue, rttiLength>//, public physics::PhysicsObject
		{
		public:
			IPhysicsMovableObject(const char* ascType) : IMovableObject<typeValue, rttiLength>(ascType){}
			virtual ~IPhysicsMovableObject(){}

		protected:
		};
	}
}