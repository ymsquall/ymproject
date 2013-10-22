#include "mvvm/framework.h"
#include "unity/singleton.h"
#include "unity/rtti.h"
#include <string>

using namespace framework;

enum RTTIType
{
	ERTT_Type_Test
};

static const char* RTTIStr;
static const int8 RTTIStrLength;
class RTTITest : public MAKER_ENUM2BTRTTI_TYPE(ERTT_Type_Test),
				public unity::IAsciiRTTI
{
public:
	RTTITest();
	

	static void test();

	//int mUsedByte;
};