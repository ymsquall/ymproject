#pragma once
#include "interface.h"

namespace framework
{
	namespace mvvm
	{
		template<class T, class SuperT>
		class IView : public SuperT, public FrameworkElement
		{
		public:
			static T* createView(bool autoRelease = true)
			{
				T* pRet = new T();
				if(pRet->init() && pRet->initForMvvm())
				{
					if(autoRelease)
						pRet->autorelease();
					return pRet;
				}
				delete pRet;
				return NULL;
			}
		};
	}	// namespace mvvm
}	// namespace framework