#pragma once
/// <summary>
/// 仿造c#中的委托
/// </summary>
#include "unity/object.h"

namespace framework
{
	class TNullType{};
#pragma region 委托类型
	enum DelegateType
	{  
		DT_MemberMethod = 1,   //成员方法
		DT_StaticFunciton = 2, //静态函数
	};
#pragma endregion

#pragma region 委托基础类模板
	template<typename SenderT/*事件发送者类型*/, typename ParamT/*事件参数类型*/>
	class delegate : public unity::object
	{
	public:
		virtual ~delegate(){}
	#pragma region 接口
		virtual DelegateType type() const = 0;	// 获得委托类型
		virtual void operator()(SenderT sender, ParamT param) = 0;	// 重载操作符，实现委托的调用
		virtual bool operator==(const delegate& othd) = 0;	// 比较两个委托是否相等
		virtual delegate* clone() = 0;	// 克隆委托对象
	#pragma endregion
	};
#pragma endregion

#pragma region 成员方法委托模板
	template<typename RecObjT/*事件接收者对象类型*/, typename RecMethodT/*事件接收者成员函数*/, typename SenderT, typename ParamT>  
	class delegate_mm : public delegate<SenderT, ParamT>
	{
	public:
        typedef delegate<SenderT, ParamT> SuperT;
		typedef delegate_mm<RecObjT, RecMethodT, SenderT, ParamT> ThisT;
		delegate_mm(const RecObjT& pObj, RecMethodT pMemFn)
			: mReceiverObject(pObj), mReceiverMemberMethod(pMemFn){}
		virtual ~delegate_mm(){}
	#pragma region 接口实现
		virtual DelegateType type() const{ return DT_MemberMethod; }
		virtual void operator()(SenderT sender, ParamT param)
		{
			((*mReceiverObject).*mReceiverMemberMethod)(sender, param);
		}
		virtual SuperT* clone()
		{
			return new ThisT(mReceiverObject, mReceiverMemberMethod);
		}
		virtual bool operator==(const SuperT& othd)
		{
			if(othd.type() != DT_MemberMethod)
				return false;
			const ThisT& rFun = dynamic_cast<const ThisT&>(othd);
			return (mReceiverObject == rFun.mReceiverObject && mReceiverMemberMethod == rFun.mReceiverMemberMethod);
		}
	#pragma endregion
	protected:
	#pragma region 成员变量
		RecObjT mReceiverObject;			//事件接收者对象
		RecMethodT mReceiverMemberMethod;	//事件接收类成员方法
	#pragma endregion
	};  
#pragma endregion
	
#pragma region 静态函数或者全局函数委托模板
	template <typename FuncT, typename SenderT, typename ParamT>
	class delegate_sf : public delegate<SenderT, ParamT>
	{
	public:
		typedef delegate<SenderT, ParamT> SuperT;
		typedef delegate_sf<FuncT, SenderT, ParamT> ThisT;
		delegate_sf(const FuncT& func) : mFunction(func){}
		virtual ~delegate_sf(){}
#pragma region 接口实现
		virtual DelegateType type() const{ return DT_StaticFunciton; }
		virtual void operator()(SenderT sender, ParamT param)
		{
			(*mFunction)(sender, param);
		}
		virtual SuperT* clone()
		{
			return new ThisT(mFunction);
		}
		virtual bool operator==(const SuperT& othd)
		{
			if(othd.type() != DT_StaticFunciton)
				return false;
			const ThisT& rFun = dynamic_cast<const ThisT&>(othd);
			return mFunction == rFun.mFunction;
		}
#pragma endregion
	protected:
#pragma region 成员变量
		FuncT mFunction;
#pragma endregion
	};
#pragma endregion
}