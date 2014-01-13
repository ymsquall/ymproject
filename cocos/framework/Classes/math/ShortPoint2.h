#pragma once

#include "Math_Common.h"
#include "cmMath.h"

namespace framework
{
	namespace math
	{
		class MATH_API ShortPoint2
		{
		public:

			template<typename T>
			inline explicit ShortPoint2(const T& o )
			{
				x = o.x;
				y = o.y;
			}

			ShortPoint2(int16 _x, int16 _y)
			{
				x = _x;
				y = _y;
			}
			ShortPoint2()
			{
				x = 0;
				y = 0;
			}


			template <typename T>
			ShortPoint2& from (const T& src)
			{
				x=src.x;
				y=src.y;
				return *this;
			}
			template <typename T>
			T& to(T& t)const
			{
				t.x=x;
				t.y=y;
				return t;
			}


			void operator =(const ShortPoint2& other)
			{
				x = other.x;
				y = other.y;
			}

			ShortPoint2 operator +(const ShortPoint2& other) const
			{
				return ShortPoint2(x + other.x, y + other.y);
			}

			ShortPoint2 operator +(int16 number) const
			{
				return ShortPoint2(x + number,	y + number);
			}

			ShortPoint2& add(int16 _x, int16 _y)
			{
				x += _x;
				y += _y;
				return *this;
			}

			void set(int16 _x, int16 _y)
			{
				x = _x;
				y = _y;
			}

			void setRowCol(int16 row, int16 col)
			{
				x = col;
				y = row;
			}

			int getRow()
			{
				return y;
			}

			int getCol()
			{
				return x;
			}

			void set( const ShortPoint2& other)
			{
				x = other.x;
				y = other.y;
			}

			void init()
			{
				clear();
			}

			void clear()
			{
				x = 0;
				y = 0;
			}

			ShortPoint2 operator -(const ShortPoint2& other) const
			{
				return ShortPoint2(x - other.x, y - other.y);
			}

			ShortPoint2 operator - (int16 number) const
			{
				return ShortPoint2(x - number, y - number);
			}

			ShortPoint2 operator * (int16 number) const
			{
				return ShortPoint2( x * number, y * number);
			}

			bool operator == (const ShortPoint2& other) const
			{
				return (x == other.x && y == other.y);
			}
			bool operator != (const ShortPoint2& other) const
			{
				return !(x == other.x && y == other.y);
			}

			void normalise(void)
			{
				if( x != 0)
				{
					if( x < 0 ) x = -1;
					else				x = 1;
				}
				if( y != 0)
				{
					if( y < 0 ) y = -1;
					else				y = 1;
				}
			}
		
			//基于格子的距离，轴平行方向每格是1，斜方向是1.5.
			float distance2D(const ShortPoint2& o)
			{
				ShortPoint2 d=o-(*this);
				d.x=d.x<0?-d.x:d.x;
				d.y=d.y<0?-d.y:d.y;
				if(d.x>d.y)
				{
					float r=d.y*1.5f+(d.x-d.y);
					return r;
				}
				else
				{
					float r=d.x*1.5f+(d.y-d.x);
					return r;
				}
			}

			//基于格子的距离，轴平行方向每格是2，斜方向是3.
			int distance2D_Int(const ShortPoint2& o)
			{
				ShortPoint2 d=o-(*this);
				d.x=d.x<0?-d.x:d.x;
				d.y=d.y<0?-d.y:d.y;
				if(d.x>d.y)
				{
					int r=d.y*3+(d.x-d.y)*2;
					return r;
				}
				else
				{
					int r=d.x*3+(d.y-d.x)*2;
					return r;
				}
			}

			/**
			把9个方向的的枚举值转换成 一个 偏移坐标
			*/
			static ShortPoint2 ConvertFromDirectionIndex(int direction_index);

			/**
			把一个方向偏移 转换成一个方向
			*/
			static int ConvertToDirectionIndex(const ShortPoint2& offset);

			int16 x;
			int16 y;
		
			static const ShortPoint2 ZERO;
			static const ShortPoint2 UNIT_X;
			static const ShortPoint2 UNIT_Y;
			static const ShortPoint2 NEGATIVE_UNIT_X;
			static const ShortPoint2 NEGATIVE_UNIT_Y;
			static const ShortPoint2 UNIT_SCALE;
		};
	}	// namespace math
}	//namespace framework
