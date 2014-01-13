#pragma once

#include "unity/platform.h"

namespace framework
{
	namespace math
	{
		//class Degree;
		//class Radian;
		//class Vector2;
		//class Vector3;
		//class Vector4;
		//class Quaternion;
		//class ColourValue;
		//class Matrix3;
		//class Matrix4;
		//class Ray;
		//class Rectangle;
		//class Plane;
		//class Sphere;
		//class AxisAlignedBox;

		typedef float Real;
		static const Real Real_One=1.0f;
		static const Real Real_Two=2.0f;
		static const Real Real_Zero=0.0f;
		static const Real Real_Half=0.5f;
		static const Real Real_Epsilon=1e-06f;

		/*
		#include<stdio.h>
		int main()
		{
		double x,y,x0,y0,x1,y1,x2,y2,x3,y3,k1,k2;
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x0,&y0,&x1,&y1,&x2,&y2,&x3,&y3);
		k1=(y0-y1)/(x0-x1);
		k2=(y2-y3)/(x2-x3);
		x=(k1*x0-k2*x2+y2-y0)/(k1-k2);
		y=y0+(x-x0)*k1;
		printf("%lf %lf\n",x,y);
		return 0;
		}
		*/

	}	// namespace math
}	// namespace framework

#include <iostream>
#include <vector>
#include <list>
