#include "PropertyTest.h"

PropertyTest::PropertyTest():
Value1(this),
//Value2(this),
Value3(this)
{
	Value1 = 111;
	//Value2 = 222;
	Value2.mValue = 222;
	Value3 = 333;
}

void PropertyTest::setValue2(const int& v)
{
	Value2.mValue = v;
}

void PropertyTest::setValue1(const int& v)
{
}

void PropertyTest::setValue3(const int& v)
{
}

void PropertyTest::test()
{
	PropertyTest test;
	test.Value1 = 444;
	//test.Value2 = 555;
	test.Value3 = 666;

	int v1 = test.Value1;
	int v2 = test.Value2;
	test.setValue2(555);
	v2 = test.Value2;
	//int v3 = test.Value3;
}