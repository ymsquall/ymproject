#include "ColourValue.h"
#include "Math.h"

namespace framework
{
	namespace math
	{
		const ColourValue ColourValue::ZERO = ColourValue(Real_Zero,Real_Zero,Real_Zero,Real_Zero);
		const ColourValue ColourValue::Black = ColourValue(Real_Zero,Real_Zero,Real_Zero,Real_One);
		const ColourValue ColourValue::White = ColourValue(Real_One,Real_One,Real_One,Real_One);
		const ColourValue ColourValue::Red = ColourValue(Real_One,Real_Zero,Real_Zero,Real_One);
		const ColourValue ColourValue::Green = ColourValue(Real_Zero,Real_One,Real_Zero,Real_One);
		const ColourValue ColourValue::Blue = ColourValue(Real_Zero,Real_Zero,Real_One,Real_One);

		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		ABGR ColourValue::getAsABGR(void) const
	#else
		RGBA ColourValue::getAsRGBA(void) const
	#endif
		{
			uint8 val8;
			uint32 val32 = 0;

			// Convert to 32bit pattern
			// (RGBA = 8888)

			// Red
			val8 = static_cast<uint8>(r * 255);
			val32 = val8 << 24;

			// Green
			val8 = static_cast<uint8>(g * 255);
			val32 += val8 << 16;

			// Blue
			val8 = static_cast<uint8>(b * 255);
			val32 += val8 << 8;

			// Alpha
			val8 = static_cast<uint8>(a * 255);
			val32 += val8;

			return val32;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		BGRA ColourValue::getAsBGRA(void) const
	#else
		ARGB ColourValue::getAsARGB(void) const
	#endif
		{
			uint8 val8;
			uint32 val32 = 0;

			// Convert to 32bit pattern
			// (ARGB = 8888)

			// Alpha
			val8 = static_cast<uint8>(a * 255);
			val32 = val8 << 24;

			// Red
			val8 = static_cast<uint8>(r * 255);
			val32 += val8 << 16;

			// Green
			val8 = static_cast<uint8>(g * 255);
			val32 += val8 << 8;

			// Blue
			val8 = static_cast<uint8>(b * 255);
			val32 += val8;


			return val32;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		ARGB ColourValue::getAsARGB(void) const
	#else
		BGRA ColourValue::getAsBGRA(void) const
	#endif
		{
			uint8 val8;
			uint32 val32 = 0;

			// Convert to 32bit pattern
			// (ARGB = 8888)

			// Blue
			val8 = static_cast<uint8>(b * 255);
			val32 = val8 << 24;

			// Green
			val8 = static_cast<uint8>(g * 255);
			val32 += val8 << 16;

			// Red
			val8 = static_cast<uint8>(r * 255);
			val32 += val8 << 8;

			// Alpha
			val8 = static_cast<uint8>(a * 255);
			val32 += val8;


			return val32;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		RGBA ColourValue::getAsRGBA(void) const
	#else
		ABGR ColourValue::getAsABGR(void) const
	#endif
		{
			uint8 val8;
			uint32 val32 = 0;

			// Convert to 32bit pattern
			// (ABRG = 8888)

			// Alpha
			val8 = static_cast<uint8>(a * 255);
			val32 = val8 << 24;

			// Blue
			val8 = static_cast<uint8>(b * 255);
			val32 += val8 << 16;

			// Green
			val8 = static_cast<uint8>(g * 255);
			val32 += val8 << 8;

			// Red
			val8 = static_cast<uint8>(r * 255);
			val32 += val8;


			return val32;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		void ColourValue::setAsABGR(const ABGR val)
	#else
		void ColourValue::setAsRGBA(const RGBA val)
	#endif
		{
			uint32 val32 = val;

			// Convert from 32bit pattern
			// (RGBA = 8888)

			// Red
			r = ((val32 >> 24) & 0xFF) / 255.0f;

			// Green
			g = ((val32 >> 16) & 0xFF) / 255.0f;

			// Blue
			b = ((val32 >> 8) & 0xFF) / 255.0f;

			// Alpha
			a = (val32 & 0xFF) / 255.0f;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		void ColourValue::setAsBGRA(const BGRA val)
	#else
		void ColourValue::setAsARGB(const ARGB val)
	#endif
		{
			uint32 val32 = val;

			// Convert from 32bit pattern
			// (ARGB = 8888)

			// Alpha
			a = ((val32 >> 24) & 0xFF) / 255.0f;

			// Red
			r = ((val32 >> 16) & 0xFF) / 255.0f;

			// Green
			g = ((val32 >> 8) & 0xFF) / 255.0f;

			// Blue
			b = (val32 & 0xFF) / 255.0f;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		void ColourValue::setAsARGB(const ARGB val)
	#else
		void ColourValue::setAsBGRA(const BGRA val)
	#endif
		{
			uint32 val32 = val;

			// Convert from 32bit pattern
			// (ARGB = 8888)

			// Blue
			b = ((val32 >> 24) & 0xFF) / 255.0f;

			// Green
			g = ((val32 >> 16) & 0xFF) / 255.0f;

			// Red
			r = ((val32 >> 8) & 0xFF) / 255.0f;

			// Alpha
			a = (val32 & 0xFF) / 255.0f;
		}
		//---------------------------------------------------------------------
	#if ENDIAN == ENDIAN_BIG_VALUE
		void ColourValue::setAsRGBA(const RGBA val)
	#else
		void ColourValue::setAsABGR(const ABGR val)
	#endif
		{
			uint32 val32 = val;

			// Convert from 32bit pattern
			// (ABGR = 8888)

			// Alpha
			a = ((val32 >> 24) & 0xFF) / 255.0f;

			// Blue
			b = ((val32 >> 16) & 0xFF) / 255.0f;

			// Green
			g = ((val32 >> 8) & 0xFF) / 255.0f;

			// Red
			r = (val32 & 0xFF) / 255.0f;
		}
		//---------------------------------------------------------------------
		bool ColourValue::operator==(const ColourValue& rhs) const
		{
			return (r == rhs.r &&
				g == rhs.g &&
				b == rhs.b &&
				a == rhs.a);
		}
		//---------------------------------------------------------------------
		bool ColourValue::operator!=(const ColourValue& rhs) const
		{
			return !(*this == rhs);
		}
		//---------------------------------------------------------------------
		void ColourValue::setHSB(Real hue, Real saturation, Real brightness)
		{
			// wrap hue
			if (hue > Real_One)
			{
				hue -= (int)hue;
			}
			else if (hue < Real_One)
			{
				hue += (int)hue + 1;
			}
			// clamp saturation / brightness
			saturation = std::min(saturation, Real_One);
			saturation = std::max(saturation, Real_Zero);
			brightness = std::min(brightness, Real_One);
			brightness = std::max(brightness, Real_Zero);

			if (brightness == 0.0f)
			{   
				// early exit, this has to be black
				r = g = b = 0.0f;
				return;
			}

			if (saturation == 0.0f)
			{   
				// early exit, this has to be grey

				r = g = b = brightness;
				return;
			}


			Real hueDomain  = hue * 6.0f;
			if (hueDomain >= 6.0f)
			{
				// wrap around, and allow mathematical errors
				hueDomain = 0.0f;
			}
			unsigned short domain = (unsigned short)hueDomain;
			Real f1 = brightness * (1 - saturation);
			Real f2 = brightness * (1 - saturation * (hueDomain - domain));
			Real f3 = brightness * (1 - saturation * (1 - (hueDomain - domain)));

			switch (domain)
			{
			case 0:
				// red domain; green ascends
				r = brightness;
				g = f3;
				b = f1;
				break;
			case 1:
				// yellow domain; red descends
				r = f2;
				g = brightness;
				b = f1;
				break;
			case 2:
				// green domain; blue ascends
				r = f1;
				g = brightness;
				b = f3;
				break;
			case 3:
				// cyan domain; green descends
				r = f1;
				g = f2;
				b = brightness;
				break;
			case 4:
				// blue domain; red ascends
				r = f3;
				g = f1;
				b = brightness;
				break;
			case 5:
				// magenta domain; blue descends
				r = brightness;
				g = f1;
				b = f2;
				break;
			}


		}
		//---------------------------------------------------------------------
		void ColourValue::getHSB(Real* hue, Real* saturation, Real* brightness) const
		{

			Real vMin = std::min(r, std::min(g, b));
			Real vMax = std::max(r, std::max(g, b));
			Real delta = vMax - vMin;

			*brightness = vMax;

			if (Math::RealEqual(delta, Real_Zero, static_cast<Real>(1e-6)) )
			{
				// grey
				*hue = 0;
				*saturation = 0;
			}
			else                                    
			{
				// a colour
				*saturation = delta / vMax;

				Real deltaR = (((vMax - r) / 6.0f) + (delta / 2.0f)) / delta;
				Real deltaG = (((vMax - g) / 6.0f) + (delta / 2.0f)) / delta;
				Real deltaB = (((vMax - b) / 6.0f) + (delta / 2.0f)) / delta;

				if (Math::RealEqual(r, vMax))
					*hue = deltaB - deltaG;
				else if (Math::RealEqual(g, vMax))
					*hue = 0.3333333f + deltaR - deltaB;
				else if (Math::RealEqual(b, vMax)) 
					*hue = 0.6666667f + deltaG - deltaR;

				if (*hue < Real_Zero) 
					*hue += Real_One;
				if (*hue > Real_One)
					*hue -= Real_One;
			}
		}
	}	// namespace math
}	// namespace framework

