#include "Vector2.h"
#include "cmMath.h"

namespace framework
{
	namespace math
	{
		const Vector2 Vector2::ZERO( 0, 0);

		const Vector2 Vector2::UNIT_X( 1, 0);
		const Vector2 Vector2::UNIT_Y( 0, 1);
		const Vector2 Vector2::NEGATIVE_UNIT_X( -1,  0);
		const Vector2 Vector2::NEGATIVE_UNIT_Y(  0, -1);
		const Vector2 Vector2::UNIT_SCALE(1, 1);
	}	// namespace math
}	// namespace framework
