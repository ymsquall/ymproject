#include "mvvm/framework.h"
#include "unity/singleton.h"
#include "unity/rtti.h"
#include "mvvm/model.h"
#include <string>

using namespace framework;

enum ModelType
{
	EMTT_Type_Test
};

class TestModel : public mvvm::IModel<EMTT_Type_Test, 9>
{
public:
	typedef mvvm::IModel<EMTT_Type_Test, 9> SuperT;
	TestModel();
	

	static void test();

	//int mUsedByte;
};