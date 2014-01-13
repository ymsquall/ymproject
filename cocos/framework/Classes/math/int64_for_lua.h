#pragma once

#include "Math_Common.h"

namespace framework
{
	namespace math
	{
		class MATH_API int64_for_lua
		{
		public:
			int64_for_lua(void){value=0;}
			~int64_for_lua(void){}


			int64_for_lua(int64 v):value(v){}

			int64_for_lua(uint64 v);

			int64_for_lua(char v):value(v){}
			int64_for_lua(unsigned char v):value(v){}
			int64_for_lua(short v):value(v){}
			int64_for_lua(unsigned short v):value(v){}
			int64_for_lua(int v):value(v){}
			int64_for_lua(unsigned int v):value(v){}
			int64_for_lua(long v):value(v){}
			int64_for_lua(unsigned long v):value(v){}
			int64_for_lua(double v);

			int64_for_lua(const int64_for_lua &source):value(source.value){};


			int64 getValue()const
			{
				return value;
			}

			int64_for_lua& operator = (const int64_for_lua& source)
			{
				value=source.value;
				return *this;
			};

	

			int64_for_lua operator | (const int64_for_lua& source) const
			{
				return value|(source.value);
			}
			int64_for_lua operator & (const int64_for_lua& source) const
			{
				return value&source.value;
			}
			int64_for_lua operator ^ (const int64_for_lua& source) const
			{
				return value^source.value;
			}
			int64_for_lua operator ~ () const
			{
				return ~value;
			}

			bool operator == (const int64_for_lua& source) const
			{
				return value==source.value;
			}

			bool operator > (const int64_for_lua& source) const
			{
				return value>source.value;
			}
			bool operator < (const int64_for_lua& source) const
			{
				return value<source.value;
			}
			bool operator >= (const int64_for_lua& source) const
			{
				return value>=source.value;
			}
			bool operator <= (const int64_for_lua& source) const
			{
				return value<=source.value;
			}
			bool operator != (const int64_for_lua& source) const
			{
				return value!=source.value;
			}

			int64_for_lua operator + (const int64_for_lua& source) const
			{
				return value+source.value;
			}
			int64_for_lua operator - (const int64_for_lua& source) const
			{
				return value-source.value;
			}
			int64_for_lua operator * (const int64_for_lua& source) const
			{
				return value*source.value;
			}
			int64_for_lua operator / (const int64_for_lua& source) const
			{
				return value/source.value;
			}

			int64_for_lua operator + (const double& source) const
			{
				return value+(int64)source;
			}
			int64_for_lua operator - (const double& source) const
			{
				return value-(int64)source;
			}
			int64_for_lua operator * (const double& source) const
			{
				return value*(int64)source;
			}
			int64_for_lua operator / (const double& source) const
			{
				return value/(int64)source;
			}



			/** Function for writing to a stream.
			*/
			inline MATH_API friend std::ostream& operator <<
				( std::ostream& o, const int64_for_lua& c )
			{
				o << c.value;
				return o;
			}

		private:
			int64 value;
		};
	}	// namespace math
}	// namespace framework