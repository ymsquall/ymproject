#pragma once
#include "interface.h"
#include "unity/platform.h"
#include "unity/reflection.h"
#include "unity/rtti.h"

namespace framework
{
	namespace mvvm
	{
		class IModel : public INotifyPropertyChanged,
					   public unity::object
		{
		public:
			// Model销毁事件
			framework::unity::RoutedEvent<IModel*> Event_ModelDestory;

			void deleteModel()
			{
				unity::RoutedEventArgs eventArgs;
				Event_ModelDestory(this, &eventArgs);
				this->finalize();
				delete this;
			}

			virtual std::string getTypeName() const = 0;
			virtual uint32 getRTTIType() const = 0;
			virtual bool init() = 0;
			virtual void finalize() = 0;
			virtual void update(float dt) = 0;
		};
		
		// 这里使用c++11新特性解决枚举尺寸问题
		enum class ModelFactoryType : uint8
		{
			String,
			Enum,
		};

		template<typename uint16 typeValue, typename size_t rttiLength>
		class ModelBase : public MAKER_ENUM2BTRTTI_TYPE(typeValue),
						  public MAKER_ASCIIFIXEDRTTI_TYPE(rttiLength),
						  public IModel
		{
		public:
			ModelBase(const char* ascType) :
				IAsciiFixedRTTI<rttiLength>(ascType)
			{
			}
			virtual std::string getTypeName() const
			{
				return this->sType();
			}
			virtual uint32 getRTTIType() const
			{
				return static_cast<uint32>(this->eType());
			}
		};

		class IModelFactory
		{
		public:
			IModelFactory()
			{
				mModelCreator = NULL;
			}
			virtual ~IModelFactory()
			{
				if(NULL != mModelCreator)
					delete mModelCreator;
			}
			virtual ModelFactoryType getType() = 0;

			void registerModelCreator(const std::string& strType, unity::__baseReflectFunc strFunc)
			{
				if(mModelCreator->getType() == unity::ReflectionType::String)
				{
					mModelCreator->registerReflect(strType, strFunc);
				}
			}
			void registerModelCreator(uint32 enumType, unity::__baseReflectFunc enumFunc)
			{
				if(mModelCreator->getType() == unity::ReflectionType::Enum)
				{
					mModelCreator->registerReflect(enumType, enumFunc);
				}
			}

			unity::object* createModel(const std::string& strType)
			{
				if(this->getType() == ModelFactoryType::String)
				{
					return this->createModelImpl(strType);
				}
				return NULL;
			}
			unity::object* createModel(uint32 enumType)
			{
				if(this->getType() == ModelFactoryType::Enum)
				{
					return this->createModelImpl(enumType);
				}
				return NULL;
			}

		protected:
			virtual unity::object* createModelImpl(const std::string& strType){ return NULL; }
			virtual unity::object* createModelImpl(uint32 enumType){ return NULL; }

		protected:
			unity::IReflection* mModelCreator;
		};
		class ModelFactoryWithString : public IModelFactory
		{
		public:
			ModelFactoryWithString()
			{
				mModelCreator = new unity::ReflectionWithStr();
			}
			virtual ModelFactoryType getType(){ return ModelFactoryType::String; }

		protected:
			virtual unity::object* createModelImpl(const std::string& strType)
			{
				unity::object* pObject = mModelCreator->reflect(strType);
				return pObject;
			}
		};
		template<typename EnumT>
		class ModelFactoryWithEnum : public IModelFactory
		{
		public:
			typedef unity::ReflectionWithEnum<EnumT> SuperT;
			ModelFactoryWithEnum()
			{
				mModelCreator = new SuperT();
			}
			virtual ModelFactoryType getType(){ return ModelFactoryType::Enum; }

		protected:
			virtual unity::object* createModelImpl(uint32 enumType)
			{
				EnumT et = static_cast<EnumT>(enumType);
				unity::object* pObject = mModelCreator->reflect(et);
				return pObject;
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
			void addModel()
			{
				mModelFactory->registerModelCreator(T::TypeName, (unity::__baseReflectFunc)T::TypeCreator);
				unity::object* pObject = mModelFactory->createModel(T::TypeName);
				IModel* pIModel = dynamic_cast<IModel*>(pObject);
				T* pModel = dynamic_cast<T*>(pObject);
				if(!pModel->init())
				{
					pModel->deleteModel();
					return;
				}
				pModel->Event_ModelDestory += ROUTEDEVENT_MAKER(IModel*, this, IModelManager::onModelDestory);
				mModelList.push_back(pModel);
			}

			void onModelDestory(IModel* sender, unity::RoutedEventArgs* args)
			{
				ModelListV::iterator it = std::find(mModelList.begin(), mModelList.end(), sender);
				if(mModelList.end() != it)
					mModelList.erase(it);
			}

		protected:
			ModelListV mModelList;
			IModelFactory* mModelFactory;
		};
	}	// namespace mvvm
}	// namespace framework