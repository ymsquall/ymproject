#pragma once

#include "unity/object.h"
#include "unity/interface.h"
#include "unity/rtti.h"

namespace framework
{
	namespace object
	{
		struct ObjectType
		{
			static const uint8 RTTI_Movavle			= 0x01;
			static const uint8 RTTI_Static			= 0x02;
			static const uint8 RTTI_PhysicsMovable	= 0x03;
			static const uint8 RTTI_PhysicsStatic	= 0x04;
			static const uint8 RTTI_Creature		= 0xfb;
			static const uint8 RTTI_Monster			= 0xfc;
			static const uint8 RTTI_NPC				= 0xfd;
			static const uint8 RTTI_Player			= 0xfe;
			static const uint8 RTTI_LocalPlayer		= 0xff;

			static const uint8 TYPE_NAME_LENGTH		= 9;
			static const char* TN_Movavle;
			static const char* TN_Static;
			static const char* TN_PhysicsMovable;
			static const char* TN_PhysicsStatic;
			static const char* TN_Creature;
			static const char* TN_Monster;
			static const char* TN_NPC;
			static const char* TN_Player;
			static const char* TN_LocalPlayer;
		};

		template<uint8 typeValue, size_t rttiLength>
		class ISceneObject : public unity::object, public unity::IUpdateWithTypeAndInitAbstract,
			public MAKER_ENUM1BTRTTI_TYPE(typeValue),
			public MAKER_ASCIIFIXEDRTTI_TYPE(rttiLength)
		{
		public:
			ISceneObject(const char* ascType) : unity::IAsciiFixedRTTI<rttiLength>(ascType){}
			virtual ~ISceneObject(){}
			virtual const char* tname() const
			{
				return this->sType();
			}
			virtual uint32 rtti() const
			{
				return static_cast<uint32>(this->eType());
			}

		protected:
		};
	}
}