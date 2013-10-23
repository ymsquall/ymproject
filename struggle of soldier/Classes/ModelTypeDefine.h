#pragma once
#include "unity/platform.h"
#include "mvvm/model.h"
#include "application/CCLuaEngine.h"

using namespace framework;

// 这里使用c++11新特性解决枚举尺寸问题
enum class ModelType : uint16
{
	ZERO	= 0,			// unused
	Login		= 1,
	GameLand	= 2,
	LIMIT	= 0xffff,		// unused
};

static const size_t ModelNameLength_Login		= 5;	// LoginModel
static const size_t ModelNameLength_GameLand	= 8;	// GameLandModel

template<typename uint16 typeValue, typename size_t rttiLength>
class ModelImpl : public mvvm::ModelBase<typeValue, rttiLength>
{
public:
	ModelImpl(const char* ascType) : mvvm::ModelBase<typeValue, rttiLength>(ascType)
	{
		mLuaEngine = cocos2d::LuaEngine::getInstance();
		mEnabled = false;
	}

	virtual bool init()
	{
		return this->initImpl();
	}

	virtual void update(float dt)
	{
		if(!mEnabled)
			return;
		this->updateImpl(dt);
	}

	void enable()
	{
		mEnabled = true;
	}
	void disable()
	{
		mEnabled = false;
	}

protected:
	virtual bool initImpl(){ return false; }
	virtual void updateImpl(float dt){ }

protected:
	cocos2d::LuaEngine* mLuaEngine;
	bool mEnabled;
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
		name##Model::name##Model() : name##Model::SuperT(name##Model::TypeName.c_str())

#define MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(name) name##Model::~name##Model()

#define MODEL_TYPECLASS_DECLARE_END };
