#pragma once
#include "interface.h"
#include "unity/platform.h"
#include "unity/reflection.h"
#include "unity/rtti.h"
#include "unity/factory.h"
#include "unity/interface.h"

namespace framework
{
	namespace mvvm
	{
		class IView;
		class IModel : public INotifyPropertyChanged,
					   public unity::object,
					   public unity::IUpdateWithTypeAndInitAbstract
		{
		public:
			IModel() : Enabled(this)
			{
				Enabled = false;
				mBindingTarget = NULL;
			}
			// ModelÏú»ÙÊÂ¼þ
			framework::unity::RoutedEvent<IModel*> Event_ModelDestory;

			void deleteModel()
			{
				unity::RoutedEventArgs eventArgs;
				Event_ModelDestory(this, &eventArgs);
				this->finalize();
				delete this;
			}
			//// property
			//void setEnabled(const bool& b)
			//{
			//	this->RaisePropertyChanged("Enabled");
			//}
			//PROPERTY_DEFINED_SETTER_DECLEAR(Enabled, bool, IModel, setEnabled);
			PROPERTY_DEFINED_SETTER_DEFINED(Enabled, bool, IModel);

			//virtual std::string getTypeName() const = 0;
			//virtual uint32 getRTTIType() const = 0;
			//virtual bool init() = 0;
			//virtual void finalize() = 0;
			//virtual void update(float dt) = 0;
			virtual void setBindingTarget(IView* view)
			{
				mBindingTarget = view;
			}

		protected:
			IView* mBindingTarget;
		};
		
		template<uint16 typeValue, size_t rttiLength>
		class ModelBase : public MAKER_ENUM2BTRTTI_TYPE(typeValue),
						  public MAKER_ASCIIFIXEDRTTI_TYPE(rttiLength),
						  public IModel
		{
		public:
			ModelBase(const char* ascType) :
				unity::IAsciiFixedRTTI<rttiLength>(ascType)
			{
			}
			virtual const char* tname() const
			{
				return this->sType();
			}
			virtual uint32 rtti() const
			{
				return static_cast<uint32>(this->eType());
			}
		};

		class IModelManager
		{
		public:
			IModelManager()
			{
				mModelFactory = NULL;
			}
			virtual ~IModelManager()
			{
				std::vector<IModel*> tmpList;
				for(ModelListV::iterator it = mModelList.begin();
					it != mModelList.end(); ++ it)
				{
					tmpList.push_back(*it);
				}
				mModelList.clear();
				for(ModelListV::iterator it = tmpList.begin();
					it != tmpList.end(); ++ it)
				{
					IModel* pModel = *it;
					if(NULL != pModel)
					{
						pModel->deleteModel();
						pModel = NULL;
					}
				}
				if(NULL != mModelFactory)
					delete mModelFactory;
			}
			typedef std::vector<IModel*> ModelListV;

			template<class T>
			T* addModel()
			{
				mModelFactory->registerCreator(T::TypeName, (unity::__baseReflectFunc)T::TypeCreator);
				unity::object* pObject = mModelFactory->create(T::TypeName);
				IModel* pIModel = dynamic_cast<IModel*>(pObject);
				T* pModel = dynamic_cast<T*>(pObject);
				if(!pModel->init())
				{
					pModel->deleteModel();
					return NULL;
				}
				pModel->Event_ModelDestory += ROUTEDEVENT_HANDLE_SCHEDULE(IModel*, this, IModelManager::onModelDestory);
				mModelList.push_back(pModel);
				return pModel;
			}

		private:
			void onModelDestory(IModel* sender, unity::RoutedEventArgs* args)
			{
				ModelListV::iterator it = std::find(mModelList.begin(), mModelList.end(), sender);
				if(mModelList.end() != it)
					mModelList.erase(it);
			}

		protected:
			ModelListV mModelList;
			unity::IFactory* mModelFactory;
		};
	}	// namespace mvvm
}	// namespace framework