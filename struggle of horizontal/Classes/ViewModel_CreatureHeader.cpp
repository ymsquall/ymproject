#include "ViewModel_CreatureHeader.h"
#include "luaext/LuaHelper.h"
#include "ModelTypeDefine.h"
#include "Model_CreatureHeader.h"
#include "View_CreatureHeader.h"
#include "ICreature.h"
#include "Monster.h"
#include "LocalPlayer.h"
#include "RootSceneView.h"
#include "ViewModelManager.h"
#include "ViewModel_GameScene.h"

CreatureHeaderViewModel::CreatureHeaderViewModel()
{
}

CreatureHeaderViewModel::~CreatureHeaderViewModel()
{
}

CreatureHeaderModel* CreatureHeaderViewModel::addCreatureHeader(ICreatue* pCreature)
{
	TMXTiledMap* pRootView = GameSceneViewModel::point()->getTiledMap();
	if(NULL == pRootView)
		return NULL;
	CreatureHeaderView* pView = CreatureHeaderView::createView();
	CreatureHeaderModel* pModel = ViewModelManager::point()->createModel<CreatureHeaderModel>();
	if(NULL == pModel)
		return NULL;
	pModel->Event_PropertyChanged += ROUTEDEVENT_HANDLE_SCHEDULE_PARAM(mvvm::INotifyPropertyChanged*, 
		mvvm::NotifyPropertyChangedRoutedEventArgs*, CreatureHeaderViewModel::point(), CreatureHeaderViewModel::onCreatureHeaderModelPropertyChanged);
	pModel->Event_ModelDestory += ROUTEDEVENT_HANDLE_SCHEDULE(mvvm::IModel*, this, CreatureHeaderViewModel::onModelDestory);
	CreatureHeaderList::const_iterator it = mCreatureHeaderList.find(pModel);
	if(it != mCreatureHeaderList.end())
	{
		pRootView->removeChild(it->second);
		mCreatureHeaderList.erase(it);
	}
	mCreatureHeaderList.insert(CreatureHeaderList::value_type(pModel, pView));
	pView->setPosition(pCreature->getMovedBodyPos());
	pRootView->addChild(pView);
	pRootView->reorderChild(pView, 1001);
	pModel->MaxHP = 8000;
	pModel->NowHP = 8000;
	pModel->Visible = true;
	pCreature->setModel(pModel);
	pModel->setOwnerCreature(pCreature);
	Monster* pMonster = dynamic_cast<Monster*>(pCreature);
	if(NULL != pMonster)
	{
		pModel->NameText = tolua_getShowingMetaTextFromLuaFile(LuaEngine::getInstance()->getLuaStack()->getLuaState(), "monster");
		pModel->NameTextColor = Color3B(255, 50, 50);
		return pModel;
	}
	LocalPlayer* pLocalUser = dynamic_cast<LocalPlayer*>(pCreature);
	if(NULL != pLocalUser)
	{
		pModel->NameText = tolua_getShowingMetaTextFromLuaFile(LuaEngine::getInstance()->getLuaStack()->getLuaState(), "demo");
		pModel->NameTextColor = Color3B(50, 255, 50);
		return pModel;
	}
	return NULL;
}

void CreatureHeaderViewModel::removeCreatureHeader(ICreatue* pCreature)
{
	CreatureHeaderList::iterator it = mCreatureHeaderList.find(pCreature->getModel());
	if(it != mCreatureHeaderList.end())
	{
		CreatureHeaderModel* pModel = it->first;
		pModel->deleteModel();
		TMXTiledMap* pRootView = GameSceneViewModel::point()->getTiledMap();
		if(NULL != pRootView)
		{
			pRootView->removeChild(it->second);
		}
		else
		{
			it->second->release();
		}
		mCreatureHeaderList.erase(it);
		pCreature->setModel(NULL);
	}
}

void CreatureHeaderViewModel::onModelDestory(mvvm::IModel* sender, unity::RoutedEventArgs* args)
{
	CreatureHeaderModel* pModel = dynamic_cast<CreatureHeaderModel*>(sender);
	if(NULL != pModel)
	{
		this->removeCreatureHeader(pModel->getOwnerCreature());
	}
}

void CreatureHeaderViewModel::onCreatureHeaderModelPropertyChanged(mvvm::INotifyPropertyChanged* sender, mvvm::NotifyPropertyChangedRoutedEventArgs* args)
{
	CreatureHeaderModel* pModel = dynamic_cast<CreatureHeaderModel*>(sender);
	CreatureHeaderList::const_iterator it = mCreatureHeaderList.find(pModel);
	if(it == mCreatureHeaderList.end())
		return;
	const CreatureHeaderView* pView = it->second;
	if(NULL == pView)
		return;
	if("NameText" == args->PropertyName)
		callLuaFuncNoResult("LUACreatureHeaderView_NameTextChanged", pView, pModel->NameText);
	else if("NameTextColor" == args->PropertyName)
	{
		Color3B color = pModel->NameTextColor;
		callLuaFuncNoResult("LUACreatureHeaderView_NameTextColorChanged", pView, color.r, color.g, color.b);
	}
	else if("HPText" == args->PropertyName)
		callLuaFuncNoResult("LUACreatureHeaderView_HPTextChanged", pView, pModel->HPText);
	else if("HPTextColor" == args->PropertyName)
	{
		Color3B color = pModel->NameTextColor;
		callLuaFuncNoResult("LUACreatureHeaderView_HPTextColorChanged", pView, color.r, color.g, color.b);
	}
	else if("NowHP" == args->PropertyName)
	{
		callLuaFuncNoResult("LUACreatureHeaderView_NowHPChanged", pView, pModel->NowHP);
		int nowHP = pModel->NowHP;
		int maxHP = pModel->MaxHP;
		CCString* pText = CCString::createWithFormat("%d/%d", nowHP, maxHP);
		pModel->HPText = pText->getCString();
	}
	else if("MaxHP" == args->PropertyName)
	{
		callLuaFuncNoResult("LUACreatureHeaderView_MaxHPChanged", pView, pModel->MaxHP);
		int nowHP = pModel->NowHP;
		int maxHP = pModel->MaxHP;
		CCString* pText = CCString::createWithFormat("%d/%d", nowHP, maxHP);
		pModel->HPText = pText->getCString();
	}
	else if("Visible" == args->PropertyName)
		callLuaFuncNoResult("LUACreatureHeaderView_VisibleChanged", pView, pModel->Visible);
	else if("Position" == args->PropertyName)
	{
		Point pt = pModel->Position;
		callLuaFuncNoResult("LUACreatureHeaderView_PositionChanged", pView, pt.x, pt.y);
	}
}
