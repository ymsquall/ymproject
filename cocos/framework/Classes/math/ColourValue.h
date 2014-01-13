#pragma once

#include "Math_Common.h"

namespace framework
{
	namespace math
	{
		typedef uint32 RGBA;
		typedef uint32 ARGB;
		typedef uint32 ABGR;
		typedef uint32 BGRA;

		/** Class representing colour.
			@remarks
				Colour is represented as 4 components, each of which is a
				floating-point value from Real_Zero to 1.0.
			@par
				The 3 'normal' colour components are red, green and blue, a higher
				number indicating greater amounts of that component in the colour.
				The forth component is the 'alpha' value, which represents
				transparency. In this case, Real_Zero is completely transparent and 1.0 is
				fully opaque.
		*/
		class ColourValue
		{
		public:
			static const ColourValue ZERO;
			static const ColourValue Black;
			static const ColourValue White;
			static const ColourValue Red;
			static const ColourValue Green;
			static const ColourValue Blue;


			ColourValue(unsigned int argb_format_color)
			{
				setAsARGB(argb_format_color);
			}
			ColourValue():r(1.0f),g(1.0f),b(1.0f),a(1.0f)
			{
			}
			explicit ColourValue( float red,
						float green,
						float blue,
						float alpha = 1.0f ) : r(red), g(green), b(blue), a(alpha)
			{ }

			template <typename T> T& force_cast()
			{
				char t[sizeof(T)==sizeof(*this)?1:0]={0};
				return reinterpret_cast<T&>(*this);
			}
			template <typename T> const T& force_cast()const
			{
				char t[sizeof(T)==sizeof(*this)?1:0]={0};
				return reinterpret_cast<const T&>(*this);
			}

			template <typename T>
			ColourValue& from (const T& src)
			{
				r=src.r;
				g=src.g;
				b=src.b;
				a=src.a;
				return *this;
			}
			template <typename T>
			T& to(T& t)const
			{
				t.r=r;
				t.g=g;
				t.b=b;
				t.a=a;
				return t;
			}

			ColourValue& operator =(unsigned int argb_format_color)
			{
				setAsARGB(argb_format_color);
				return *this;
			}

			bool operator==(const ColourValue& rhs) const;
			bool operator!=(const ColourValue& rhs) const;

			float r,g,b,a;

			/** Retrieves colour as RGBA.
			*/
			RGBA getAsRGBA(void) const;

			/** Retrieves colour as ARGB.
			*/
			ARGB getAsARGB(void) const;

			/** Retrieves colour as BGRA.
			*/
			BGRA getAsBGRA(void) const;

			/** Retrieves colours as ABGR */
			ABGR getAsABGR(void) const;

			/** Sets colour as RGBA.
			*/
			void setAsRGBA(const RGBA val);

			/** Sets colour as ARGB.
			*/
			void setAsARGB(const ARGB val);

			/** Sets colour as BGRA.
			*/
			void setAsBGRA(const BGRA val);

			/** Sets colour as ABGR.
			*/
			void setAsABGR(const ABGR val);

			/** Clamps colour value to the range [0, 1].
			*/
			void saturate(void)
			{
				if (r < 0)
					r = 0;
				else if (r > 1)
					r = 1;

				if (g < 0)
					g = 0;
				else if (g > 1)
					g = 1;

				if (b < 0)
					b = 0;
				else if (b > 1)
					b = 1;

				if (a < 0)
					a = 0;
				else if (a > 1)
					a = 1;
			}

			/** As saturate, except that this colour value is unaffected and
				the saturated colour value is returned as a copy. */
			ColourValue saturateCopy(void) const
			{
				ColourValue ret = *this;
				ret.saturate();
				return ret;
			}

			/// Array accessor operator
			inline float operator [] ( const size_t i ) const
			{
				CCASSERT( i < 4, "ColourValue only 4 items" );

				return *(&r+i);
			}

			/// Array accessor operator
			inline float& operator [] ( const size_t i )
			{
				CCASSERT( i < 4, "ColourValue only 4 items" );

				return *(&r+i);
			}

			/// Pointer accessor for direct copying
			inline float* ptr()
			{
				return &r;
			}
			/// Pointer accessor for direct copying
			inline const float* ptr() const
			{
				return &r;
			}

		
			// arithmetic operations
			inline ColourValue operator + ( const ColourValue& rkVector ) const
			{
				ColourValue kSum;

				kSum.r = r + rkVector.r;
				kSum.g = g + rkVector.g;
				kSum.b = b + rkVector.b;
				kSum.a = a + rkVector.a;

				return kSum;
			}

			inline ColourValue operator - ( const ColourValue& rkVector ) const
			{
				ColourValue kDiff;

				kDiff.r = r - rkVector.r;
				kDiff.g = g - rkVector.g;
				kDiff.b = b - rkVector.b;
				kDiff.a = a - rkVector.a;

				return kDiff;
			}

			inline ColourValue operator * (const float fScalar ) const
			{
				ColourValue kProd;

				kProd.r = fScalar*r;
				kProd.g = fScalar*g;
				kProd.b = fScalar*b;
				kProd.a = fScalar*a;

				return kProd;
			}

			inline ColourValue operator * ( const ColourValue& rhs) const
			{
				ColourValue kProd;

				kProd.r = rhs.r * r;
				kProd.g = rhs.g * g;
				kProd.b = rhs.b * b;
				kProd.a = rhs.a * a;

				return kProd;
			}

			inline ColourValue operator / ( const ColourValue& rhs) const
			{
				ColourValue kProd;

				kProd.r = rhs.r / r;
				kProd.g = rhs.g / g;
				kProd.b = rhs.b / b;
				kProd.a = rhs.a / a;

				return kProd;
			}

			inline ColourValue operator / (const Real fScalar ) const
			{
				CCASSERT( fScalar != Real_Zero , "/ zero!"  );

				ColourValue kDiv;

				Real fInv = Real_One / fScalar;
				kDiv.r = r * fInv;
				kDiv.g = g * fInv;
				kDiv.b = b * fInv;
				kDiv.a = a * fInv;

				return kDiv;
			}

			inline friend ColourValue operator * (const Real fScalar, const ColourValue& rkVector )
			{
				ColourValue kProd;

				kProd.r = fScalar * rkVector.r;
				kProd.g = fScalar * rkVector.g;
				kProd.b = fScalar * rkVector.b;
				kProd.a = fScalar * rkVector.a;

				return kProd;
			}

			// arithmetic updates
			inline ColourValue& operator += ( const ColourValue& rkVector )
			{
				r += rkVector.r;
				g += rkVector.g;
				b += rkVector.b;
				a += rkVector.a;

				return *this;
			}

			inline ColourValue& operator -= ( const ColourValue& rkVector )
			{
				r -= rkVector.r;
				g -= rkVector.g;
				b -= rkVector.b;
				a -= rkVector.a;

				return *this;
			}

			inline ColourValue& operator *= (const Real fScalar )
			{
				r *= fScalar;
				g *= fScalar;
				b *= fScalar;
				a *= fScalar;
				return *this;
			}

			inline ColourValue& operator /= (const Real fScalar )
			{
				CCASSERT( fScalar != Real_Zero , "/ zero!"  );

				Real fInv = Real_One / fScalar;

				r *= fInv;
				g *= fInv;
				b *= fInv;
				a *= fInv;

				return *this;
			}

			/** Set a colour value from Hue, Saturation and Brightness.
			@param hue Hue value, scaled to the [0,1] range as opposed to the 0-360
			@param saturation Saturation level, [0,1]
			@param brightness Brightness level, [0,1]
			*/
			void setHSB(Real hue, Real saturation, Real brightness);

			/** Convert the current colour to Hue, Saturation and Brightness values. 
			@param hue Output hue value, scaled to the [0,1] range as opposed to the 0-360
			@param saturation Output saturation level, [0,1]
			@param brightness Output brightness level, [0,1]
			*/
			void getHSB(Real* hue, Real* saturation, Real* brightness) const;



			/** Function for writing to a stream.
			*/
			inline friend std::ostream& operator <<
				( std::ostream& o, const ColourValue& c )
			{
				o << "ColourValue(" << c.r << ", " << c.g << ", " << c.b << ", " << c.a << ")";
				return o;
			}

		};
	}	// namespace math
}	// namespace framework
