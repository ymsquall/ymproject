#include "Model_Login.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(Login){
    mModelManager = ViewModelManager::point();
	// ���캯��������д����
MODEL_TYPECLASS_DEFINE_DECONSTRUCTOR(Login)
	// ��������������д����
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