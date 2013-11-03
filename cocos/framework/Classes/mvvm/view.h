#pragma once
#include "interface.h"
#include "unity/platform.h"
#include "unity/reflection.h"
#include "unity/rtti.h"
#include "model.h"

namespace framework
{
	namespace mvvm
	{
		class IView : public FrameworkElement
		{
		public:
			virtual ~IView(){}
		};
		
		template<class T, class SuperT>
		class ViewBase : public SuperT, public IView
		{
		public:
			ViewBase()
			{
				mBindingSource = NULL;
			}
			typedef ViewBase<T, SuperT> ViewSuperT;
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

			virtual void setBindingSource(IModel* binding)
			{
				mBindingSource = binding;
				mBindingSource->setBindingTarget(this);
			}

		private:
			static void create(){}	// 防止外部使用SuperT::create;

		protected:
			IModel* mBindingSource;
		};

		
	}	// namespace mvvm
}	// namespace framework