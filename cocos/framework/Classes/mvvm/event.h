#pragma once
/// <summary>
/// 仿造c#中的事件
/// </summary>
#include <vector>
#include "delegate.h"

namespace framework
{
#pragma region 事件处理者
	template<typename SenderT, typename ParamT>
	class EventHandler : public unity::object
	{
	public:
	#pragma region 构造器
		EventHandler() : mDelegate(NULL){}
		template <typename FuncT> EventHandler(const FuncT& func)
			: mDelegate(new delegate_sf<FuncT, SenderT, ParamT>(func)){}
		template <typename RecObjT, typename RecMethodT> EventHandler(const RecObjT& pObj, const RecMethodT& pMemFun)  
			: mDelegate(new delegate_mm<RecObjT, RecMethodT, SenderT, ParamT>(pObj, pMemFun)){}
		EventHandler(const EventHandler<SenderT, ParamT>& eventHandler)
			: mDelegate(NULL){ *this = eventHandler; }
		virtual ~EventHandler(){ this->clear(); }
	#pragma endregion

	#pragma region 运算符
		EventHandler& operator=(const EventHandler<SenderT, ParamT>& eventHandler)	// 赋值操作符重载
		{
			this->clear();
			if(NULL != eventHandler.mDelegate)
				mDelegate = eventHandler.mDelegate->clone();
			return *this;
		}
		void operator()(SenderT sender, ParamT param) const	// 事件委托调用
		{
			if (mDelegate)
				(*mDelegate)(sender, param);
		}
		bool operator==(const EventHandler<SenderT, ParamT>& othh)	// 比较两个事件处理器是否相同
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
		delegate<SenderT, ParamT>* mDelegate;//委托对象指针
	};
#pragma endregion

#pragma region 事件接口模板
	template<typename SenderT, typename ParamT>  
	struct IEvent : public unity::object
	{
		typedef EventHandler<SenderT, ParamT> HandlerT;
		virtual ~IEvent(){}
	#pragma region 接口
		virtual void schedule(const HandlerT& handler) = 0;	// 注册事件处理对象
		virtual void unschedule(const HandlerT& handler) = 0;	// 注销事件处理对象
		virtual void fire(SenderT sender, ParamT param) = 0;	// 触发事件委托
		virtual size_t length() = 0;  // 获得事件处理者个数 
		virtual const HandlerT& handlerAt(const int nIndex) = 0;  // 获得特定索引的事件处理者对象
	#pragma endregion
	};
#pragma endregion

#pragma region 事件实现类模板
	template<typename SenderT, typename ParamT>
	class event : public IEvent<SenderT, ParamT>
	{
	public:
		typedef IEvent<SenderT, ParamT> SuperT;
		typedef event<SenderT, ParamT> ThisT;
		typedef EventHandler<SenderT, ParamT> HandlerT;
	#pragma region 构造器
		event(){}
		virtual ~event(){ mHanderArray.clear(); }
	#pragma endregion

	public:
	#pragma region 运算符
		virtual void operator()(SenderT sender, ParamT param){ this->fire(sender, param); }	// 重载操作符，触发事件委托
		event& operator+= (const HandlerT& handler)	// 重载操作符，注册事件处理对象
		{  
			this->schedule(handler);  
			return *this;  
		}
		event& operator-= (const HandlerT& handler)	// 重载操作符，注销事件处理对象
		{
			this->unschedule(handler);
			return *this;
		}
	#pragma endregion

		virtual void fire(SenderT sender, ParamT param)	// 触发事件委托
		{
			HandleList handlers;
			handlers.resize(mHanderArray.size());
			//放到另一数组里，以免原数组在调用过程中有变化
			std::copy(mHanderArray.begin(), mHanderArray.end(), handlers.begin());
			for(HandleList::const_iterator it = handlers.begin(); it != handlers.end(); ++ it)
			{
				const HandlerT& eventHandler = it;
				eventHandler(sender, param);
			}
		}
		size_t length(){ return mHanderArray.size(); }	// 获得事件处理者个数
		const HandlerT& handlerAt(const int nIndex)	// 获得特定索引的事件处理者对象
		{
			assert((nIndex >= 0) && (nIndex < (int)mHanderArray.size()));
			return mHanderArray[nIndex];
		}
		virtual void schedule(const HandlerT& handler)	// 注册事件处理对象
		{
			mHanderArray.push_back(handler);
		}
		virtual void unschedule(const HandlerT& handler)	// 注销事件处理对象
		{
			size_t nCount = mHanderArray.size();
			for(HandleList::iterator it = mHanderArray.begin();
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
		HandleList mHanderArray;	//事件处理对象列表
	};
#pragma endregion

#pragma region 路由事件参数基本类型
	class RoutedEventArgs
	{
	public:
		RoutedEventArgs(){ mClaimed = false; }
		virtual ~RoutedEventArgs(){}
		bool mClaimed;	// 是否被消耗
	};
#pragma endregion

#pragma region 路由事件实现
	template<typename SenderT>
	class RoutedEvent : public event<SenderT, RoutedEventArgs*>
	{
	public:
		typedef event<SenderT, RoutedEventArgs*> SuperT;
		typedef RoutedEvent<SenderT> ThisT;
		typedef EventHandler<SenderT, RoutedEventArgs*> HandlerT;
		virtual void fire(SenderT sender, RoutedEventArgs* param)	// 触发事件委托
		{
			HandleList handlers;
			handlers.resize(mHanderArray.size());
			//放到另一数组里，以免原数组在调用过程中有变化
			std::copy(mHanderArray.begin(), mHanderArray.end(), handlers.begin());
			for(HandleList::const_iterator it = handlers.begin(); it != handlers.end(); ++ it)
			{
				const HandlerT& eventHandler = it;
				eventHandler(sender, param);
				if(NULL != param && param->mClaimed)
					break;	// 事件被消耗掉不继续向下传递
			}
		}
	};
#pragma endregion

}
