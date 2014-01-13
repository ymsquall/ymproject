#include "Degree.h"
#include "Math.h"
#include "Radian.h"

namespace framework
{
	namespace math
	{
		Degree::Degree(Real d)
			: mDeg(d)
		{
		}
		Degree::Degree ( const Radian& r )
			: mDeg(r.valueDegrees())
		{
		}
		Degree& Degree::operator = ( const Real& f )
		{
			mDeg = f;
			return *this;
		}
		Degree& Degree::operator = ( const Degree& d )
		{
			mDeg = d.mDeg;
			return *this;
		}
		Degree& Degree::operator = ( const Radian& r )
		{
			mDeg = r.valueDegrees();
			return *this;
		}

		Real Degree::valueDegrees() const
		{
			return mDeg;
		}
		Real Degree::valueRadians() const
		{
			return Math::DegreesToRadians ( mDeg );
		}
		Real Degree::valueAngleUnits() const
		{
			return Math::DegreesToAngleUnits ( mDeg );
		}

		const Degree& Degree::operator + () const
		{
			return *this;
		}
		Degree Degree::operator + ( const Degree& d ) const
		{
			return Degree ( mDeg + d.mDeg );
		}
		Degree Degree::operator + ( const Radian& r ) const
		{
			return Degree ( mDeg + r.valueDegrees() );
		}
		Degree& Degree::operator += ( const Degree& d )
		{
			mDeg += d.mDeg; return *this;
		}
		Degree& Degree::operator += ( const Radian& r )
		{
			mDeg += r.valueDegrees(); return *this;
		}
		Degree Degree::operator - () const
		{
			return Degree(-mDeg);
		}
		Degree Degree::operator - ( const Degree& d ) const
		{
			return Degree ( mDeg - d.mDeg );
		}
		Degree Degree::operator - ( const Radian& r ) const
		{
			return Degree ( mDeg - r.valueDegrees() );
		}
		Degree& Degree::operator -= ( const Degree& d )
		{
			mDeg -= d.mDeg;
			return *this;
		}
		Degree& Degree::operator -= ( const Radian& r )
		{
			mDeg -= r.valueDegrees();
			return *this;
		}
		Degree Degree::operator * ( Real f ) const { return Degree ( mDeg * f ); }
		Degree Degree::operator * ( const Degree& f ) const
		{
			return Degree ( mDeg * f.mDeg );
		}
		Degree& Degree::operator *= ( Real f )
		{
			mDeg *= f; return *this;
		}
		Degree Degree::operator / ( Real f ) const
		{
			return Degree ( mDeg / f );
		}
		Degree& Degree::operator /= ( Real f )
		{
			mDeg /= f; return *this;
		}

		bool Degree::operator <  ( const Degree& d ) const
		{
			return mDeg <  d.mDeg;
		}
		bool Degree::operator <= ( const Degree& d ) const
		{
			return mDeg <= d.mDeg;
		}
		bool Degree::operator == ( const Degree& d ) const
		{
			return mDeg == d.mDeg;
		}
		bool Degree::operator != ( const Degree& d ) const
		{
			return mDeg != d.mDeg;
		}
		bool Degree::operator >= ( const Degree& d ) const
		{
			return mDeg >= d.mDeg;
		}
		bool Degree::operator >  ( const Degree& d ) const
		{
			return mDeg >  d.mDeg;
		}
	}	// namespace math
}	// namespace framework
