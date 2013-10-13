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
			pRet->mObjectType = TypeFactroy::create<TypeT>();
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
			Type* pType = ObjectFactroy<TypeT>::createType();
			return pType;
		}
		static void release(Type* pType)
		{
			if(NULL != pType)
				delete pType;
		}
	};
}