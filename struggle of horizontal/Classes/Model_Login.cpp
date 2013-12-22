#include "Model_Login.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(Login){
    mModelManager = ViewModelManager::point();
	// 构造函数，代码写这里
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(Login)
	// 析构函数，代码写这里
MODEL_TYPECLASS_DEFINE_BEGINING

bool LoginModel::initImpl()
{
	return true;
}

void LoginModel::updateImpl(float dt)
{

}

bool LoginModel::finalize()
{
	return true;
}