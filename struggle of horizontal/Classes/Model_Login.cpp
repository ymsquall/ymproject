#include "Model_Login.h"
#include "ViewModelManager.h"

MODEL_TYPECLASS_DEFINE_CONSTRUCTOR(Login){
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

void LoginModel::finalize()
{

}