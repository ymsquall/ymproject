#include "mvvm/framework.h"
#include "unity/singleton.h"
#include "unity/rtti.h"

using namespace framework;

class RTTITest : public unity::IAsciiRTTI<8>
{
public:
	typedef unity::IAsciiRTTI<8> SuperT;
	RTTITest(const char* rtti = "RTTITest");

	static void test();

	int mUsedByte;
};