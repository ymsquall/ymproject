#pragma once

#include "cocos2d.h"

namespace framework
{
	namespace math
	{
		/* See if we can use __forceinline or if we need to use __inline instead */
		#if COMPILER == COMPILER_MSVC
		#   define FORCEINLINE __forceinline
		#elif defined(__MINGW32__)
		#   if !defined(FORCEINLINE)
		#       define FORCEINLINE __inline
		#   endif
		#else
		#   define FORCEINLINE __inline
		#endif

		#define MATH_API

		class Degree;
		class Radian;
		class Vector2;
		class Vector3;
		class Vector4;
		class Quaternion;
		class ColourValue;
		class Matrix3;
		class Matrix4;
		class Ray;
		class Rectangle;
		class Plane;
		class Sphere;
		class AxisAlignedBox;

		typedef float Real;
		static const Real Real_One=1.0f;
		static const Real Real_Two=2.0f;
		static const Real Real_Zero=0.0f;
		static const Real Real_Half=0.5f;
		static const Real Real_Epsilon=1e-06f;
	}	// namespace math
}	// namespace framework

#include <iostream>
#include <vector>
#include <list>