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
	size_t size1 = sizeof(mvvm::DispatcherObject);
	size_t size2 = sizeof(mvvm::DependencyObject);
	size_t size3 = sizeof(mvvm::DependencyProperty<int>);
	size_t size4 = sizeof(mvvm::DependencyPropertyImpl<int, 0>);
	size_t size5 = sizeof(unity::Property<int>);
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
