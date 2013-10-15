#pragma once

namespace unity
{
	class Type;
	class ObjectFactroy
	{
	public:
		template<class ObjT, class TypeT>
		static ObjT* create()
		{
			ObjT* pRet = new ObjT();
			pRet->mObjectType = createType<TypeT>();
			return pRet;
		}

	private:
		friend class TypeFactroy;
		template<class TypeT>
		static Type* createType()
		{
			Type* pRet = new TypeT();
			return pRet;
		}
	};

	class TypeFactroy
	{
	public:
		template<class TypeT>
		static Type* create()
		{
			Type* pType = ObjectFactroy::createType<TypeT>();
			return pType;
		}
		static void release(Type* pType)
		{
			if(NULL != pType)
				delete pType;
		}
	};
}