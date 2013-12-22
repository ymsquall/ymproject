#pragma once

#include "unity/object.h"
#include "unity/property.h"
#include "unity/event.h"
#include "unity/platform.h"

namespace framework
{
	namespace unity
	{
		class IRTTIAbstract
		{
		public:
			virtual ~IRTTIAbstract(){}
			virtual uint32 rtti() const = 0;
		};
		class ITNameAbstract
		{
		public:
			virtual ~ITNameAbstract(){}
			virtual const char* tname() const = 0;
		};
		class ITypeAbstract : public IRTTIAbstract, public ITNameAbstract
		{
		public:
			virtual ~ITypeAbstract(){}
		};
		class IInitAbstract
		{
		public:
			virtual ~IInitAbstract(){}
			virtual bool init() = 0;
			virtual bool finalize() = 0;
		};
		class IUpdateAbstract
		{
		public:
			virtual ~IUpdateAbstract(){}
			virtual void loop(float dt) = 0;
		};
		class IUpdateWithTypeAndInitAbstract : public IUpdateAbstract, public ITypeAbstract, public IInitAbstract
		{
		public:
			virtual ~IUpdateWithTypeAndInitAbstract(){}
		};
	}	// namespace unity
}	// namespace framework