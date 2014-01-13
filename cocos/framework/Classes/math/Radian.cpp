#include "Radian.h"
#include "Math.h"
#include "Degree.h"

namespace framework
{
	namespace math
	{
		Radian::Radian( Real r )
			: mRad(r)
		{
		}
		Radian::Radian( const Degree& d )
		{
		}
		Radian& Radian::operator = ( const Real& f )
		{
			mRad = f;
			return *this;
		}
		Radian& Radian::operator = ( const Radian& r )
		{
			mRad = r.mRad;
			return *this;
		}
		Radian& Radian::operator = ( const Degree& d )
		{
			mRad = d.valueRadians();
			return *this;
		}
		Real Radian::valueDegrees() const
		{
			return Math::RadiansToDegrees( mRad );
		}
		Real Radian::valueRadians() const
		{
			return mRad;
		}
		Real Radian::valueAngleUnits() const
		{
			return Math::RadiansToAngleUnits ( mRad );
		}
		const Radian& Radian::operator + () const
		{
			return *this;
		}
		Radian Radian::operator + ( const Radian& r ) const
		{
			return Radian ( mRad + r.mRad );
		}
		Radian Radian::operator + ( const Degree& d ) const
		{
			return Radian ( mRad + d.valueRadians() );
		}
		Radian& Radian::operator += ( const Radian& r )
		{
			mRad += r.mRad;
			return *this;
		}
		Radian& Radian::operator += ( const Degree& d )
		{
			mRad += d.valueRadians();
			return *this;
		}
		Radian Radian::operator - () const
		{
			return Radian(-mRad);
		}
		Radian Radian::operator - ( const Radian& r ) const
		{
			return Radian ( mRad - r.mRad );
		}
		Radian Radian::operator - ( const Degree& d ) const
		{
			return Radian ( mRad - d.valueRadians() );
		}
		Radian& Radian::operator -= ( const Radian& r )
		{
			mRad -= r.mRad;
			return *this;
		}
		Radian& Radian::operator -= ( const Degree& d )
		{
			mRad -= d.valueRadians();
			return *this;
		}
		Radian Radian::operator * ( Real f ) const
		{
			return Radian ( mRad * f );
		}
		Radian Radian::operator * ( const Radian& f ) const
		{
			return Radian ( mRad * f.mRad );
		}
		Radian& Radian::operator *= ( Real f )
		{
			mRad *= f; return *this;
		}
		Radian Radian::operator / ( Real f ) const
		{
			return Radian ( mRad / f );
		}
		Radian& Radian::operator /= ( Real f )
		{
			mRad /= f; return *this;
		}

		bool Radian::operator <  ( const Radian& r ) const
		{
			return mRad <  r.mRad;
		}
		bool Radian::operator <= ( const Radian& r ) const
		{
			return mRad <= r.mRad;
		}
		bool Radian::operator == ( const Radian& r ) const
		{
			return mRad == r.mRad;
		}
		bool Radian::operator != ( const Radian& r ) const
		{
			return mRad != r.mRad;
		}
		bool Radian::operator >= ( const Radian& r ) const
		{
			return mRad >= r.mRad;
		}
		bool Radian::operator >  ( const Radian& r ) const
		{
			return mRad >  r.mRad;
		}
	}	// namespace math
}	// namespace framework
