#pragma once
#include <string>
#include "cocos2d.h"

namespace framework
{
	namespace unity
	{
		class Type;
		class Object;
		typedef Object object;
		class Object : public cocos2d::Object
		{
		protected:
			Object();
			virtual ~Object();
		public:
			// ȷ��ָ���� Object �Ƿ���ڵ�ǰ�� Object��
			virtual bool Equals(const object* obj) const;
			// ȷ��ָ���Ķ���ʵ���Ƿ���Ϊ��ȡ�
			static bool Equals(const object* objA, const object* objB);
			// �����ض����͵Ĺ�ϣ������
			virtual int GetHashCode() const;
			// ��ȡ��ǰʵ���� Type��
			Type* GetType() const;
			// ������ǰ Object ��ǳ������
			object MemberwiseClone() const;
			// ȷ��ָ���� Object ʵ���Ƿ�����ͬ��ʵ����
			static bool ReferenceEquals(const object& objA, const object& objB);
			// ���ر�ʾ��ǰ������ַ�����
			virtual std::string ToString() const;

		protected:
			Type* mObjectType;
		};

		class Type
		{
		protected:
			Type();
			virtual ~Type();
		public:
			virtual std::string ToString() const;
		};
	}	// namespace unity
}	// namespace framework
