#include "View_SelectHero.h"
#include "CocoStudio/CocoStudio.h"
#include "ViewModelManager.h"

using namespace cocos2d;
using namespace cocos2d::extension;

SelectHeroView::SelectHeroView()
{
	mLayout = NULL;
	mBackButton = NULL;
	mOkButton = NULL;
	mSelectButton = NULL;
	mHeroHeadScrollView = NULL;
}

SelectHeroView::~SelectHeroView()
{
}

bool SelectHeroView::init()
{
	if(!ViewSuperT::init())
		return false;
	
    this->scheduleUpdate();
	
	cocos2d::Size thisSize = this->getContentSize();
    mLayout = dynamic_cast<cocos2d::extension::Layout*>(CCUIHELPER->createWidgetFromJsonFile("studioui/SelectHeroView/SelectHeroView.ExportJson"));
	cocos2d::Size layoutSize = mLayout->getContentSize();
	mLayout->setPosition(cocos2d::Point((thisSize.width-layoutSize.width)/2.0f, (thisSize.height-layoutSize.height)/2.0f));
    this->addWidget(mLayout);

	mBackButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mBackButton"));
	mOkButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mOkButton"));
	mSelectButton = dynamic_cast<UIButton*>(mLayout->getChildByName("mSelectButton"));
	mHeroHeadScrollView = dynamic_cast<UIScrollView*>(mLayout->getChildByName("mHeroHeadScrollView"));

	mBackButton->addReleaseEvent(this, coco_releaseselector(SelectHeroView::onBackBtnTouch));
	mOkButton->addReleaseEvent(this, coco_releaseselector(SelectHeroView::onOkBtnTouch));
	mSelectButton->addReleaseEvent(this, coco_releaseselector(SelectHeroView::onSelectBtnTouch));

	UIImageView* pHeadView = UIImageView::create();
	pHeadView->setTexture("picture/heroface/2160-1.png");

	mHeroHeadScrollView->addChild(pHeadView);

	return true;
}

bool SelectHeroView::initForMvvm()
{
	return true;
}

void SelectHeroView::update(float dt)
{
	ViewSuperT::update(dt);
}

void SelectHeroView::onEnterTransitionDidFinish()
{
	ViewSuperT::onEnterTransitionDidFinish();
}

void SelectHeroView::onBackBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::Login);
}

void SelectHeroView::onOkBtnTouch(cocos2d::CCObject* pSender)
{
	ViewModelManager::point()->selectModel(ModelType::GameLand);
}

void SelectHeroView::onSelectBtnTouch(cocos2d::CCObject* pSender)
{

}