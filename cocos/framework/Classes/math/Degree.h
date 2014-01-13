#pragma once
#include "Math_Common.h"

namespace framework
{
	namespace math
	{
		/** Wrapper class which indicates a given angle value is in Degrees.
		@remarks
			Degree values are interchangeable with Radian values, and conversions
			will be done automatically between them.
		*/
		class Radian;
		class Degree
		{
			Real mDeg; // if you get an error here - make sure to define/typedef 'Real' first

		public:
			explicit Degree ( Real d=0 );
			Degree ( const Radian& r );
			Degree& operator = ( const Real& f );
			Degree& operator = ( const Degree& d );
			Degree& operator = ( const Radian& r );

			Real valueDegrees() const;
			Real valueRadians() const; // see bottom of this file
			Real valueAngleUnits() const;

			const Degree& operator + () const;
			Degree operator + ( const Degree& d ) const;
			Degree operator + ( const Radian& r ) const;
			Degree& operator += ( const Degree& d );
			Degree& operator += ( const Radian& r );
			Degree operator - () const;
			Degree operator - ( const Degree& d ) const;
			Degree operator - ( const Radian& r ) const;
			Degree& operator -= ( const Degree& d );
			Degree& operator -= ( const Radian& r );
			Degree operator * ( Real f ) const;
			Degree operator * ( const Degree& f ) const;
			Degree& operator *= ( Real f );
			Degree operator / ( Real f ) const;
			Degree& operator /= ( Real f );

			bool operator <  ( const Degree& d ) const;
			bool operator <= ( const Degree& d ) const;
			bool operator == ( const Degree& d ) const;
			bool operator != ( const Degree& d ) const;
			bool operator >= ( const Degree& d ) const;
			bool operator >  ( const Degree& d ) const;

			inline friend std::ostream& operator << ( std::ostream& o, const Degree& v )
			{
				o << "Degree(" << v.valueDegrees() << ")";
				return o;
			}
		};
	}	// namespace math
}	// namespace framework
