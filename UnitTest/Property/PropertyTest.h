#include "mvvm/framework.h"
#include "unity/singleton.h"

class PropertyTest : public unity::SingletonAutoT<PropertyTest>
{
public:
	PropertyTest();

	void test();
	void setValue2(const int& v);

private:
	void setValue1(const int& v);
	void setValue3(const int& v);

public:
	unity::Property<int, PropertyTest, &PropertyTest::setValue1> Value1;
	unity::PropertyReadOnly<int, PropertyTest> Value2;
	unity::PropertyWriteOnly<int, PropertyTest, &PropertyTest::setValue3> Value3;
};