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
		// 确定指定的 Object 是否等于当前的 Object。
		virtual bool Equals(const object* obj) const;
		// 确定指定的对象实例是否被视为相等。
		static bool Equals(const object* objA, const object* objB);
		// 用作特定类型的哈希函数。
		virtual int GetHashCode() const;
		// 获取当前实例的 Type。
		Type* GetType() const;
		// 创建当前 Object 的浅表副本。
		object MemberwiseClone() const;
		// 确定指定的 Object 实例是否是相同的实例。
		static bool ReferenceEquals(const object& objA, const object& objB);
		// 返回表示当前对象的字符串。
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