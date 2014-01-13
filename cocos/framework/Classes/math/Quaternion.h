// NOTE THAT THIS FILE IS BASED ON MATERIAL FROM:

// Magic Software, Inc.
// http://www.geometrictools.com/
// Copyright (c) 2000, All Rights Reserved
//
// Source code from Magic Software is supplied under the terms of a license
// agreement and may not be copied or disclosed except in accordance with the
// terms of that agreement.  The various license agreements may be found at
// the Magic Software web site.  This file is subject to the license
//
// FREE SOURCE CODE
// http://www.geometrictools.com/License/WildMagic3License.pdf
#pragma once

#include "Math_Common.h"
#include "Math.h"

namespace framework
{
	namespace math
	{
		/** 四元数，描述基于一个轴的旋转
		*/
		class Quaternion
		{
		public:

			template<typename T>
			inline explicit Quaternion(const T& o )
			{
				x = o.x;
				y = o.y;
				z = o.z;
				w = o.w;
			}



			inline Quaternion (
				Real fW = Real_One,
				Real fX = 0.0, Real fY = 0.0, Real fZ = 0.0)
			{
				w = fW;
				x = fX;
				y = fY;
				z = fZ;
			}
			/// Construct a quaternion from a rotation matrix
			inline Quaternion(const Matrix3& rot)
			{
				this->FromRotationMatrix(rot);
			}
			/// Construct a quaternion from an angle/axis
			inline Quaternion(const Radian& rfAngle, const Vector3& rkAxis)
			{
				this->FromAngleAxis(rfAngle, rkAxis);
			}
			/// Construct a quaternion from 3 orthonormal local axes
			inline Quaternion(const Vector3& xaxis, const Vector3& yaxis, const Vector3& zaxis)
			{
				this->FromAxes(xaxis, yaxis, zaxis);
			}
			/// Construct a quaternion from 3 orthonormal local axes
			inline Quaternion(const Vector3* akAxis)
			{
				this->FromAxes(akAxis);
			}
			/// Construct a quaternion from 4 manual w/x/y/z values
			inline Quaternion(Real* valptr)
			{
				memcpy(&w, valptr, sizeof(Real)*4);
			}


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
			Quaternion& from (const T& src)
			{
				x=src.x;
				y=src.y;
				z=src.z;
				w=src.w;
				return *this;
			}
			template <typename T>
			T& to(T& t)const
			{
				t.x=x;
				t.y=y;
				t.z=z;
				t.w=w;
				return t;
			}

			/** Exchange the contents of this quaternion with another. 
			*/
			inline void swap(Quaternion& other)
			{
				std::swap(w, other.w);
				std::swap(x, other.x);
				std::swap(y, other.y);
				std::swap(z, other.z);
			}

			/// Array accessor operator
			inline Real operator [] ( const size_t i ) const
			{
				CCASSERT( i < 4, "Quaternion only 4 items");

				return *(&w+i);
			}

			/// Array accessor operator
			inline Real& operator [] ( const size_t i )
			{
				CCASSERT( i < 4, "Quaternion only 4 items" );

				return *(&w+i);
			}

			/// Pointer accessor for direct copying
			inline Real* ptr()
			{
				return &w;
			}

			/// Pointer accessor for direct copying
			inline const Real* ptr() const
			{
				return &w;
			}

			void FromRotationMatrix (const Matrix3& kRot);
			void ToRotationMatrix (Matrix3& kRot) const;
			void FromAngleAxis (const Radian& rfAngle, const Vector3& rkAxis);
			void ToAngleAxis (Radian& rfAngle, Vector3& rkAxis) const;
			inline void ToAngleAxis (Degree& dAngle, Vector3& rkAxis) const {
				Radian rAngle;
				ToAngleAxis ( rAngle, rkAxis );
				dAngle = rAngle;
			}
			void FromAxes (const Vector3* akAxis);
			void FromAxes (const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis);
			void ToAxes (Vector3* akAxis) const;
			void ToAxes (Vector3& xAxis, Vector3& yAxis, Vector3& zAxis) const;
			/// Get the local x-axis
			Vector3 xAxis(void) const;
			/// Get the local y-axis
			Vector3 yAxis(void) const;
			/// Get the local z-axis
			Vector3 zAxis(void) const;

			inline Quaternion& operator= (const Quaternion& rkQ)
			{
				w = rkQ.w;
				x = rkQ.x;
				y = rkQ.y;
				z = rkQ.z;
				return *this;
			}
			Quaternion operator+ (const Quaternion& rkQ) const;
			Quaternion operator- (const Quaternion& rkQ) const;
			Quaternion operator* (const Quaternion& rkQ) const;
			Quaternion operator* (Real fScalar) const;
			friend Quaternion operator* (Real fScalar,
				const Quaternion& rkQ);
			Quaternion operator- () const;
			inline bool operator== (const Quaternion& rhs) const
			{
				return (rhs.x == x) && (rhs.y == y) &&
					(rhs.z == z) && (rhs.w == w);
			}
			inline bool operator!= (const Quaternion& rhs) const
			{
				return !operator==(rhs);
			}
			// functions of a quaternion
			Real Dot (const Quaternion& rkQ) const;  // dot product
			Real Norm () const;  // squared-length
			/// Normalises this quaternion, and returns the previous length
			Real normalise(void); 
			Quaternion Inverse () const;  // apply to non-zero quaternion
			Quaternion UnitInverse () const;  // apply to unit-length quaternion
			Quaternion Exp () const;
			Quaternion Log () const;

			// rotation of a vector by a quaternion
			Vector3 operator* (const Vector3& rkVector) const;

   			/** Calculate the local roll element of this quaternion.
			@param reprojectAxis By default the method returns the 'intuitive' result
				that is, if you projected the local Y of the quaternion onto the X and
				Y axes, the angle between them is returned. If set to false though, the
				result is the actual yaw that will be used to implement the quaternion,
				which is the shortest possible path to get to the same orientation and 
				may involve less axial rotation. 
			*/
			Radian getRoll(bool reprojectAxis = true) const;
   			/** Calculate the local pitch element of this quaternion
			@param reprojectAxis By default the method returns the 'intuitive' result
				that is, if you projected the local Z of the quaternion onto the X and
				Y axes, the angle between them is returned. If set to true though, the
				result is the actual yaw that will be used to implement the quaternion,
				which is the shortest possible path to get to the same orientation and 
				may involve less axial rotation. 
			*/
			Radian getPitch(bool reprojectAxis = true) const;
   			/** Calculate the local yaw element of this quaternion
			@param reprojectAxis By default the method returns the 'intuitive' result
				that is, if you projected the local Z of the quaternion onto the X and
				Z axes, the angle between them is returned. If set to true though, the
				result is the actual yaw that will be used to implement the quaternion,
				which is the shortest possible path to get to the same orientation and 
				may involve less axial rotation. 
			*/
			Radian getYaw(bool reprojectAxis = true) const;		
			/// Equality with tolerance (tolerance is max angle difference)
			bool equals(const Quaternion& rhs, const Radian& tolerance) const;
		
			// spherical linear interpolation
			static Quaternion Slerp (Real fT, const Quaternion& rkP,
				const Quaternion& rkQ, bool shortestPath = false);

			static Quaternion SlerpExtraSpins (Real fT,
				const Quaternion& rkP, const Quaternion& rkQ,
				int iExtraSpins);

			// setup for spherical quadratic interpolation
			static void Intermediate (const Quaternion& rkQ0,
				const Quaternion& rkQ1, const Quaternion& rkQ2,
				Quaternion& rka, Quaternion& rkB);

			// spherical quadratic interpolation
			static Quaternion Squad (Real fT, const Quaternion& rkP,
				const Quaternion& rkA, const Quaternion& rkB,
				const Quaternion& rkQ, bool shortestPath = false);

			// normalised linear interpolation - faster but less accurate (non-constant rotation velocity)
			static Quaternion nlerp(Real fT, const Quaternion& rkP, 
				const Quaternion& rkQ, bool shortestPath = false);

			// cutoff for sine near zero
			static const Real ms_fEpsilon;

			// special values
			static const Quaternion ZERO;
			static const Quaternion IDENTITY;

			Real w, x, y, z;

			/** Function for writing to a stream. Outputs "Quaternion(w, x, y, z)" with w,x,y,z
				being the member values of the quaternion.
			*/
			inline friend std::ostream& operator <<
				( std::ostream& o, const Quaternion& q )
			{
				o << "Quaternion(" << q.w << ", " << q.x << ", " << q.y << ", " << q.z << ")";
				return o;
			}

		};
	}	// namespace math
}	// namespace framework
