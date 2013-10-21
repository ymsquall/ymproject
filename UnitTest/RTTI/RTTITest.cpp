#include "RTTITest.h"

RTTITest::RTTITest(const char* rtti):
	SuperT(rtti)
{
	size_t size = sizeof(*this);
	size = 0;
}
void RTTITest::test()
{
	size_t size1 = sizeof(mvvm::DispatcherObject);
	size_t size2 = sizeof(mvvm::DependencyObject);
	size_t size3 = sizeof(mvvm::DependencyProperty<int>);
	size_t size4 = sizeof(mvvm::DependencyPropertyImpl<int, 0>);
	size_t size5 = sizeof(unity::Property<int>);
	size_t size = sizeof(unity::IEnumRTTI<int16, 0>);
	size = sizeof(unity::IAsciiRTTI<4>);
	size = sizeof(RTTITest);
	RTTITest rttiObj;
	size = sizeof(rttiObj);

	return;
}
