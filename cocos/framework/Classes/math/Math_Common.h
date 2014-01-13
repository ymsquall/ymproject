#pragma once

#include "cocos2d.h"
#include "unity/platform.h"

namespace framework
{
	namespace math
	{
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
//#include<stdio.h>
//		int main()
//		{
//			double x,y,x0,y0,x1,y1,x2,y2,x3,y3,k1,k2;
//			scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x0,&y0,&x1,&y1,&x2,&y2,&x3,&y3);
//			k1=(y0-y1)/(x0-x1);
//			k2=(y2-y3)/(x2-x3);
//			x=(k1*x0-k2*x2+y2-y0)/(k1-k2);
//			y=y0+(x-x0)*k1;
//			printf("%lf %lf\n",x,y);
//			return 0;
//		}
	}	// namespace math
}	// namespace framework

#define MATH_API

#include <iostream>
#include <vector>
#include <list>
