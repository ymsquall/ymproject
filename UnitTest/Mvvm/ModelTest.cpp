#include "ModelTest.h"

TestModel::TestModel():
	SuperT("TestModel")
{
	size_t size = sizeof(*this);
	size = 0;
}

void TestModel::test()
{
	size_t size = sizeof(TestModel);
	TestModel rttiObj;
	size = sizeof(rttiObj);

	return;
}
