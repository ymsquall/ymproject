#pragma once
#include <string>
#include "cocos2d.h"

namespace unity
{
	class Type;
	class Object;
	typedef Object object;
	class Object : public cocos2d::Object
	{
	protected:
		friend class ObjectFactroy;
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
		// ������ǰ Object ��ǳ��������
		object MemberwiseClone() const;
		// ȷ��ָ���� Object ʵ���Ƿ�����ͬ��ʵ����
		static bool ReferenceEquals(const object& objA, const object& objB);
		// ���ر�ʾ��ǰ������ַ�����
		virtual std::string ToString() const;

	protected:
		Type* mObjectType;
	};

	class Type : public Object
	{
	protected:
		friend class TypeFactroy;
		Type();
		virtual ~Type();
	public:
		virtual std::string ToString() const;
	};
}