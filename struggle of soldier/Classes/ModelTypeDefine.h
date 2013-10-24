#pragma once
#include "unity/platform.h"
#include "unity/event.h"
#include "unity/property.h"
#include "mvvm/model.h"
#include "application/CCLuaEngine.h"

using namespace framework;

// ����ʹ��c++11�����Խ��ö�ٳߴ�����
enum class ModelType : uint16
{
	ZERO	= 0,			// unused
	Login		= 1,
	GameLand	= 2,
	LIMIT	= 0xffff,		// unused
};

static const size_t ModelNameLength_Login		= 5;	// LoginModel
static const size_t ModelNameLength_GameLand	= 8;	// GameLandModel

// PropertyChanged NameString
static const char* ModelPropertyChangedName_Enabled = "Enabled";

class ModelManager;
template<typename uint16 typeValue, typename size_t rttiLength>
class ModelImpl : public mvvm::ModelBase<typeValue, rttiLength>
{
public:
	typedef ModelImpl<typeValue, rttiLength> ThisT;
	ModelImpl(const char* ascType) : mvvm::ModelBase<typeValue, rttiLength>(ascType), Enabled(this)
	{
		mLuaEngine = cocos2d::LuaEngine::getInstance();
		mModelManager = NULL;
		Enabled = false;
	}

	virtual bool init()
	{
		return this->initImpl();
	}

	virtual void update(float dt)
	{
		if(!Enabled)
			return;
		this->updateImpl(dt);
	}
	void setEnabled(const bool& b)
	{
		if(Enabled != b)
			this->RaisePropertyChanged(ModelPropertyChangedName_Enabled);
	}

protected:
	virtual bool initImpl(){ return false; }
	virtual void updateImpl(float dt){ }

protected:
	cocos2d::LuaEngine* mLuaEngine;
	ModelManager* mModelManager;
	// property
	PROPERTY_DEFINED_SETTER(Enabled, bool, ThisT, setEnabled);
};

#define MODEL_TYPECLASS_DECLARE_HEADER(name) class name##Model :  \
			public ModelImpl<(uint16)ModelType::name, ModelNameLength_##name> \
		{ \
		public: \
			typedef ModelImpl<(uint16)ModelType::name, ModelNameLength_##name> SuperT; \
			name##Model(); \
			~name##Model(); \
			static const std::string TypeName; \
			static unity::object* TypeCreator() \
			{ \
				return new name##Model(); \
			} \
			virtual bool initImpl(); \
			virtual void updateImpl(float dt); \
			virtual void finalize(); 

#define MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(name) const std::string name##Model::TypeName = #name; \
		name##Model::name##Model() : name##Model::SuperT(name##Model::TypeName.c_str()) \
		{ \
			mModelManager = ModelManager::point();
#define MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(name) } name##Model::~name##Model() {
#define MODEL_TYPECLASS_DEFINE_BEGINING }

#define MODEL_TYPECLASS_DECLARE_END };
