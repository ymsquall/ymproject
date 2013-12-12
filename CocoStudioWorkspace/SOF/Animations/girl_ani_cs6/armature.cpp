#include "cocos2d.h"
#include "cocos-ext.h"
USING_NS_CC;
USING_NS_CC_EXT;

void playArmature(
	std::string fileName,
	std::string armatureName,
	std::string actionName,
	float speed)
{
	std::string pngName = fileName + ".png";
	std::string plistName = fileName + ".plist";
	std::string xmlName = fileName + ".xml";
	CCArmatureDataManager::sharedArmatureDataManager()->addArmatureFileInfo(
		pngName.c_str(),
		plistName.c_str(),
		xmlName.c_str());

	CCArmature* pArmature = NULL;
	pArmature = CCArmature::create(armatureName.c_str());

	pArmature->getAnimation()->play(actionName.c_str());
	pArmature->getAnimation()->setSpeedScale(speed);
}