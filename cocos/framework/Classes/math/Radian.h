#pragma once
#include "Math_Common.h"

namespace framework
{
	namespace math
	{
		/** Wrapper class which indicates a given angle value is in Radians.
		@remarks
		Radian values are interchangeable with Degree values, and conversions
		will be done automatically between them.
		*/
		class Degree;
		class Radian
		{
			Real mRad;
		public:
			explicit Radian ( Real r=0 );
			Radian ( const Degree& d );
			Radian& operator = ( const Real& f );
			Radian& operator = ( const Radian& r );
			Radian& operator = ( const Degree& d );

			Real valueDegrees() const; // see bottom of this file
			Real valueRadians() const;
			Real valueAngleUnits() const;

			const Radian& operator + () const;
			Radian operator + ( const Radian& r ) const;
			Radian operator + ( const Degree& d ) const;
			Radian& operator += ( const Radian& r );
			Radian& operator += ( const Degree& d );
			Radian operator - () const;
			Radian operator - ( const Radian& r ) const;
			Radian operator - ( const Degree& d ) const;
			Radian& operator -= ( const Radian& r );
			Radian& operator -= ( const Degree& d );
			Radian operator * ( Real f ) const;
			Radian operator * ( const Radian& f ) const;
			Radian& operator *= ( Real f );
			Radian operator / ( Real f ) const;
			Radian& operator /= ( Real f );

			bool operator <  ( const Radian& r ) const;
			bool operator <= ( const Radian& r ) const;
			bool operator == ( const Radian& r ) const;
			bool operator != ( const Radian& r ) const;
			bool operator >= ( const Radian& r ) const;
			bool operator >  ( const Radian& r ) const;

			inline friend std::ostream& operator << ( std::ostream& o, const Radian& v )
			{
				o << "Radian(" << v.valueRadians() << ")";
				return o;
			}
		};
	}	// namespace math
}	// namespace framework
