#pragma once

#include "ISceneObject.h"

namespace framework
{
	namespace object
	{
		template<uint16 typeValue, size_t rttiLength>
		class IMovableObject : public ISceneObject<typeValue, rttiLength>
		{
		public:
			IMovableObject(const char* ascType) : ISceneObject<typeValue, rttiLength>(ascType){}
			virtual ~IMovableObject(){}

		protected:
		};
	}
}