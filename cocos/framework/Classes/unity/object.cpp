#include "object.h"
#include "factroy.h"

namespace framework
{
	namespace unity
	{
		Type::Type()
		{

		}
		Type::~Type()
		{

		}
		std::string Type::ToString() const
		{
			return "[type]";
		}

		Object::Object()
		{
			mObjectType = NULL;
		}
		Object::~Object()
		{
			TypeFactroy::release(mObjectType);
		}
		bool Object::Equals(const object* obj) const
		{
			return this == obj;
		}
		bool Object::Equals(const object* objA, const object* objB)
		{
			return objA == objB;
		}
		int Object::GetHashCode() const
		{
			return 0xffffffff;
		}
		Type* Object::GetType() const
		{
			return mObjectType;
		}
		object Object::MemberwiseClone() const
		{
			return *this;
		}
		bool Object::ReferenceEquals(const object& objA, const object& objB)
		{
			return objA.GetHashCode() == objB.GetHashCode();
		}
		std::string Object::ToString() const
		{
			return "[object]";
		}
	}	// namespace unity
}	// namespace framework
