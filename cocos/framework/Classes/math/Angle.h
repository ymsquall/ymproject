#pragma once
#include "Math_Common.h"

namespace framework
{
	namespace math
	{
		class Radian;
		class Degree;
		/** Wrapper class which identifies a value as the currently default angle 
			type, as defined by Math::setAngleUnit.
		@remarks
			Angle values will be automatically converted between radians and degrees,
			as appropriate.
		*/
		class Angle
		{
			Real mAngle;
		public:
			explicit Angle ( Real angle );
			operator Radian() const;
			operator Degree() const;
		};
	}	// namespace math
}	// namespace framework
