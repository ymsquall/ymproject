#include "int64_for_lua.h"

namespace framework
{
	namespace math
	{
		int64_for_lua::int64_for_lua(double v):value((int64)v)
		{
		}
		int64_for_lua::int64_for_lua(uint64 v)
		{
			value=(int64)v;
		}
	}	// namespace math
}	// namespace framework