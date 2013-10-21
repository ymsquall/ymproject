#include "PropertyTest.h"

PropertyTest::PropertyTest():
Value1(this),
Value2(this),
Value3(this),
Value4(this)
{
}

void PropertyTest::setValue2(const int& v)
{
}

void PropertyTest::setValue1(const int& v)
{
}

void PropertyTest::setValue3(const int& v)
{
}

void PropertyTest::setValue4(const int& v)
{

}

const int& PropertyTest::getValue4() const
{
	return 0;
}

static void staticTest()
{
	// 使用模板的特性，能在编译器检查错误，太爽了
	PropertyTest test;
	test.Value1 = 444;
	//test.Value2 = 555;	// 编译错误
	test.Value3 = 666;

	int v1 = test.Value1;
	int v2 = test.Value2;
	test.setValue2(555);
	v2 = test.Value2;
	//int v3 = test.Value3;	// 编译错误
}
void PropertyTest::test()
{
	PropertyTest test;
	test.Value1 = 444;
	test.Value2 = 555;
	test.Value3 = 666;

	int v1 = test.Value1;
	int v2 = test.Value2;
	test.setValue2(555);
	v2 = test.Value2;
	int v3 = test.Value3;
	staticTest();
}
