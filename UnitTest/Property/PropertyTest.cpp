#include "PropertyTest.h"

PropertyTest::PropertyTest():
Value1(this),
Value2(this),
Value3(this)
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

static void staticTest()
{
	// ʹ��ģ������ԣ����ڱ�����������̫ˬ��
	PropertyTest test;
	test.Value1 = 444;
	//test.Value2 = 555;	// �������
	test.Value3 = 666;

	int v1 = test.Value1;
	int v2 = test.Value2;
	test.setValue2(555);
	v2 = test.Value2;
	//int v3 = test.Value3;	// �������
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
