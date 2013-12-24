#pragma once

#include "IMovableObject.h"

namespace framework
{
	namespace object
	{
		class IPhysicsMovableObject : public IMovableObject
		{
		public:
			virtual ~IPhysicsMovableObject(){}

		protected:
		};
	}
}