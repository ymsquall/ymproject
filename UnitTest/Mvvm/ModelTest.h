#include "mvvm/framework.h"
#include "unity/singleton.h"
#include "unity/rtti.h"
#include "mvvm/model.h"
#include <string>

using namespace framework;

enum class ModelType : uint16
{
	Test = 1,
};

class TestModel : public mvvm::ModelBase<(uint16)ModelType::Test, 4>
{
public:
	typedef mvvm::ModelBase<(uint16)ModelType::Test, 4> SuperT;
	TestModel();
	

	static void test();

	//int mUsedByte;
};