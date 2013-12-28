#pragma once

#include "ISceneObject.h"

namespace framework
{
	namespace object
	{
		template<uint16 typeValue, size_t rttiLength>
		class IStaticObject : public ISceneObject<typeValue, rttiLength>
		{
		public:
			IStaticObject(const char* ascType) : ISceneObject<typeValue, rttiLength>(ascType){}
			virtual ~IStaticObject(){}

		protected:
		};
	}
}