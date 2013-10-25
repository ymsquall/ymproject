#pragma once

#include "extensions/Components/CCComAttribute.h"
#include "extensions/Components/CCComAudio.h"
#include "extensions/Components/CCComController.h"
#include "extensions/CCArmature/CCArmature.h"
#include "extensions/CCArmature/utils/CCArmatureDataManager.h"
#include "CocoStudio/Json/lib_json/json_lib.h"
#include "CocoStudio/CCArmature/external_tool/Json/CCCSContentJsonDictionary.h"
#include "GUI/CCControlExtension/CCScale9Sprite.h"

NS_CC_EXT_BEGIN

	typedef Scale9Sprite CCScale9Sprite;
	typedef ComAudio CCComAudio;

	namespace armature
	{
		typedef Armature CCArmature;
		typedef ArmatureDataManager CCArmatureDataManager;
	}

NS_CC_EXT_END