#pragma once
#include "ModelTypeDefine.h"

using namespace cocos2d;
using namespace framework;
class ICreatue;
// class CreatureHeaderModel
MODEL_TYPECLASS_DECLARE_HEADER(CreatureHeader)
	// 添加相应代码
	public:
		PROPERTY_DEFINED_SETTER_DEFINED(NameText, std::string, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(NameTextColor, Color3B, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(HPText, std::string, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(HPTextColor, Color3B, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(NowHP, int, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(MaxHP, int, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(Visible, bool, CreatureHeaderModel);
		PROPERTY_DEFINED_SETTER_DEFINED(Position, Point, CreatureHeaderModel);

		void setOwnerCreature(ICreatue* creature);
		ICreatue* getOwnerCreature();

	private:
	private:
		ICreatue* mOwnerCreature;
MODEL_TYPECLASS_DECLARE_END 