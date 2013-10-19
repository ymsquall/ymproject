#include "int64_for_lua.h"

namespace framework
{
	namespace math
	{
		int64_for_lua::int64_for_lua(double v):value((__int64)v)
		{
		}
		int64_for_lua::int64_for_lua(unsigned __int64 v)
		{
			value=(__int64)v;
		}
	}	// namespace math
}	// namespace framework