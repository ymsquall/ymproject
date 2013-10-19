#include "mvvm/framework.h"
#include "unity/singleton.h"

class PropertyTest : public unity::object
{
public:
	PropertyTest();

	static void test();
	void setValue2(const int& v);

private:
	void setValue1(const int& v);
	void setValue3(const int& v);

public:
	PROPERTY_DEFINED(Value1, int, PropertyTest, setValue1);
	PROPERTY_READONLY_DEFINED(Value2, int, PropertyTest);
	PROPERTY_WRITEONLY_DEFINED(Value3, int, PropertyTest, setValue3);
	//unity::Property<int, PropertyTest, &PropertyTest::setValue1> Value1;
	//unity::PropertyReadOnly<int, PropertyTest> Value2;
	//unity::PropertyWriteOnly<int, PropertyTest, &PropertyTest::setValue3> Value3;
};