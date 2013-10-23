#pragma once
/// <summary>
/// ����c#�е��¼�
/// </summary>
#include "delegate.h"

namespace framework
{
	namespace unity
	{
	#pragma region �¼�������
		template<typename SenderT, typename ParamT>
		class EventHandler
		{
		public:
		#pragma region ������
			EventHandler() : mDelegate(NULL){}
			template <typename FuncT> EventHandler(const FuncT& func)
				: mDelegate(new delegate_sf<FuncT, SenderT, ParamT>(func)){}
			template <typename RecObjT, typename RecMethodT> EventHandler(const RecObjT& pObj, const RecMethodT& pMemFun)  
				: mDelegate(new delegate_mm<RecObjT, RecMethodT, SenderT, ParamT>(pObj, pMemFun)){}
			EventHandler(const EventHandler<SenderT, ParamT>& eventHandler)
				: mDelegate(NULL){ *this = eventHandler; }
			virtual ~EventHandler(){ this->clear(); }
		#pragma endregion

		#pragma region �����
			EventHandler& operator=(const EventHandler<SenderT, ParamT>& eventHandler)	// ��ֵ����������
			{
				this->clear();
				if(NULL != eventHandler.mDelegate)
					mDelegate = eventHandler.mDelegate->clone();
				return *this;
			}
			void operator()(SenderT sender, ParamT param) const	// �¼�ί�е���
			{
				if (mDelegate)
					(*mDelegate)(sender, param);
			}
			bool operator==(const EventHandler<SenderT, ParamT>& othh)	// �Ƚ������¼��������Ƿ���ͬ
			{
				if (NULL == mDelegate && NULL == othh.mDelegate)
					return true;
				if (NULL == mDelegate || NULL == othh.mDelegate)
					return false;
				if(mDelegate->type() == othh.mDelegate->type())
					return (*mDelegate) == (*(othh.mDelegate));
				return false;  
			}  
		#pragma endregion

			void clear()
			{
				if (NULL != mDelegate)
				{
					delete mDelegate;
					mDelegate = NULL;
				}
			}

		protected:
			delegate<SenderT, ParamT>* mDelegate;//ί�ж���ָ��
		};
	#pragma endregion

	#pragma region �¼��ӿ�ģ��
		template<typename SenderT, typename ParamT>  
		struct IEvent
		{
			typedef EventHandler<SenderT, ParamT> HandlerT;
			virtual ~IEvent(){}
		#pragma region �ӿ�
			virtual void schedule(const HandlerT& handler) = 0;	// ע���¼��������
			virtual void unschedule(const HandlerT& handler) = 0;	// ע���¼��������
			virtual void fire(SenderT sender, ParamT param) = 0;	// �����¼�ί��
			virtual size_t length() = 0;  // ����¼������߸��� 
			virtual const HandlerT& handlerAt(const int nIndex) = 0;  // ����ض��������¼������߶���
		#pragma endregion
		};
	#pragma endregion

	#pragma region �¼�ʵ����ģ��
		template<typename SenderT, typename ParamT>
		class event : public IEvent<SenderT, ParamT>
		{
		public:
			typedef IEvent<SenderT, ParamT> SuperT;
			typedef event<SenderT, ParamT> ThisT;
			typedef EventHandler<SenderT, ParamT> HandlerT;
		#pragma region ������
			event(){}
			virtual ~event(){ mHanderArray.clear(); }
		#pragma endregion

		public:
		#pragma region �����
			virtual void operator()(SenderT sender, ParamT param){ this->fire(sender, param); }	// ���ز������������¼�ί��
			event& operator+= (const HandlerT& handler)	// ���ز�������ע���¼��������
			{
				this->schedule(handler);
				return *this;
			}
			event& operator-= (const HandlerT& handler)	// ���ز�������ע���¼��������
			{
				this->unschedule(handler);
				return *this;
			}
		#pragma endregion

			virtual void fire(SenderT sender, ParamT param)	// �����¼�ί��
			{
				HandleList handlers;
				handlers.resize(mHanderArray.size());
				//�ŵ���һ���������ԭ�����ڵ��ù������б仯
				std::copy(mHanderArray.begin(), mHanderArray.end(), handlers.begin());
				for(typename HandleList::const_iterator it = handlers.begin(); it != handlers.end(); ++ it)
				{
					const HandlerT& eventHandler = it;
					eventHandler(sender, param);
				}
			}
			size_t length(){ return mHanderArray.size(); }	// ����¼������߸���
			const HandlerT& handlerAt(const int nIndex)	// ����ض��������¼������߶���
			{
				assert((nIndex >= 0) && (nIndex < (int)mHanderArray.size()));
				return mHanderArray[nIndex];
			}
			virtual void schedule(const HandlerT& handler)	// ע���¼��������
			{
				mHanderArray.push_back(handler);
			}
			virtual void unschedule(const HandlerT& handler)	// ע���¼��������
			{
				//size_t nCount = mHanderArray.size();
				for(typename HandleList::iterator it = mHanderArray.begin();
					it != mHanderArray.end(); ++ it)
				{
					HandlerT& eventHandler = *it;
					if(eventHandler == handler)
					{
						mHanderArray.erase(it);
						return;
					}
				}
			}
		protected:
			typedef std::vector<HandlerT> HandleList;
			HandleList mHanderArray;	//�¼���������б�
		};
	#pragma endregion

	#pragma region ·���¼�������������
		class RoutedEventArgs
		{
		public:
			RoutedEventArgs(){ mClaimed = false; }
			virtual ~RoutedEventArgs(){}
			bool mClaimed;	// �Ƿ�����
		};
	#pragma endregion

	#pragma region ·���¼�ʵ��
		template<typename SenderT>
		class RoutedEvent : public event<SenderT, RoutedEventArgs*>
		{
		public:
			typedef event<SenderT, RoutedEventArgs*> SuperT;
			typedef RoutedEvent<SenderT> ThisT;
			typedef EventHandler<SenderT, RoutedEventArgs*> HandlerT;
			virtual void fire(SenderT sender, RoutedEventArgs* param)	// �����¼�ί��
			{
				typename SuperT::HandleList handlers;
				handlers.resize(this->mHanderArray.size());
				//�ŵ���һ���������ԭ�����ڵ��ù������б仯
				std::copy(this->mHanderArray.begin(), this->mHanderArray.end(), handlers.begin());
				for(typename SuperT::HandleList::const_iterator it = handlers.begin(); it != handlers.end(); ++ it)
				{
					const HandlerT& eventHandler = it;
					eventHandler(sender, param);
					if(NULL != param && param->mClaimed)
						break;	// �¼������ĵ����������´���
				}
			}
		};
	#pragma endregion
	}	// namespace unity
}	// namespace framework

#define ROUTEDEVENT_MAKER(senderT, sender, recvFunc) framework::unity::RoutedEvent<senderT>::HandlerT(sender, &recvFunc);