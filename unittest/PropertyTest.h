#include "mvvm/framework.h"

class PropertyTest
{
public:
	PropertyTest():
		Value1(this),
		//Value2(this),
		Value3(this)
	{
		Value1 = 111;
		//Value2 = 222;
		Value2.mValue = 222;
		Value3 = 333;
	}
	void setValue2(const int& v)
	{
		Value2.mValue = v;
	}
private:
	void setValue1(const int& v)
	{

	}
	void setValue3(const int& v)
	{
	}

public:
	unity::Property<int, PropertyTest, &PropertyTest::setValue1> Value1;
	unity::PropertyReadOnly<int, PropertyTest> Value2;
	unity::PropertyWriteOnly<int, PropertyTest, &PropertyTest::setValue3> Value3;
};