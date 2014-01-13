#include "Angle.h"
#include "Math.h"
#include "Radian.h"
#include "Degree.h"

namespace framework
{
	namespace math
	{
		Angle::Angle( Real angle )
			: mAngle(angle)
		{
		}
		Angle::operator Radian() const
		{
			return Radian(Math::AngleUnitsToRadians(mAngle));
		}

		Angle::operator Degree() const
		{
			return Degree(Math::AngleUnitsToDegrees(mAngle));
		}

	}	// namespace math
}	// namespace framework
