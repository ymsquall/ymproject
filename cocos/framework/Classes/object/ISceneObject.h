#pragma once

#include "unity/object.h"
#include "unity/interface.h"

namespace framework
{
	namespace object
	{
		class ISceneObject : public unity::object, public unity::IUpdateWithTypeAndInitAbstract
		{
		public:
			virtual ~ISceneObject(){}

		protected:
		};
	}
}