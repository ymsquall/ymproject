#pragma once

#include "Math_Common.h"
#include "Vector3.h"

namespace framework
{
	namespace math
	{
		/** 球。 可能用来做球形边界检查等
		@remarks
			Sphere存储了球的中心和半径
		*/
		class MATH_API Sphere
		{
		protected:
			Real mRadius;
			Vector3 mCenter;
		public:
			/** Standard constructor - creates a unit sphere around the origin.*/
			Sphere() : mRadius(1.0), mCenter(Vector3::ZERO) {}
			/** Constructor allowing arbitrary spheres. 
				@param center The center point of the sphere.
				@param radius The radius of the sphere.
			*/
			Sphere(const Vector3& center, Real radius)
				: mRadius(radius), mCenter(center) {}

			/** Returns the radius of the sphere. */
			Real getRadius(void) const { return mRadius; }

			/** Sets the radius of the sphere. */
			void setRadius(Real radius) { mRadius = radius; }

			/** Returns the center point of the sphere. */
			const Vector3& getCenter(void) const { return mCenter; }

			/** Sets the center point of the sphere. */
			void setCenter(const Vector3& center) { mCenter = center; }

			/** Returns whether or not this sphere intersects another sphere. */
			bool intersects(const Sphere& s) const
			{
				return (s.mCenter - mCenter).squaredLength() <=
					Math::Sqr(s.mRadius + mRadius);
			}
			/** Returns whether or not this sphere intersects a box. */
			bool intersects(const AxisAlignedBox& box) const
			{
				return Math::intersects(*this, box);
			}
			/** Returns whether or not this sphere intersects a plane. */
			bool intersects(const Plane& plane) const
			{
				return Math::intersects(*this, plane);
			}
			/** Returns whether or not this sphere intersects a point. */
			bool intersects(const Vector3& v) const
			{
				return ((v - mCenter).squaredLength() <= Math::Sqr(mRadius));
			}
		};
	}	// namespace math
}	// namespace framework
