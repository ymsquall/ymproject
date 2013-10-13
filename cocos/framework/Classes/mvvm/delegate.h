#pragma once
/// <summary>
/// ����c#�е�ί��
/// </summary>
#include "unity/object.h"

namespace framework
{
	class TNullType{};
#pragma region ί������
	enum DelegateType
	{  
		DT_MemberMethod = 1,   //��Ա����
		DT_StaticFunciton = 2, //��̬����
	};
#pragma endregion

#pragma region ί�л�����ģ��
	template<typename SenderT/*�¼�����������*/, typename ParamT/*�¼���������*/>
	class delegate : public unity::object
	{
	public:
		virtual ~delegate(){}
	#pragma region �ӿ�
		virtual DelegateType type() const = 0;	// ���ί������
		virtual void operator()(SenderT sender, ParamT param) = 0;	// ���ز�������ʵ��ί�еĵ���
		virtual bool operator==(const delegate& othd) = 0;	// �Ƚ�����ί���Ƿ����
		virtual delegate* clone() = 0;	// ��¡ί�ж���
	#pragma endregion
	};
#pragma endregion

#pragma region ��Ա����ί��ģ��
	template<typename RecObjT/*�¼������߶�������*/, typename RecMethodT/*�¼������߳�Ա����*/, typename SenderT, typename ParamT>  
	class delegate_mm : public delegate<SenderT, ParamT>
	{
	public:
		typedef delegate_mm<RecObjT, RecMethodT, SenderT, ParamT> ThisT;
		delegate_mm(const RecObjT& pObj, RecMethodT pMemFn)
			: mReceiverObject(pObj), mReceiverMemberMethod(pMemFn){}
		virtual ~delegate_mm(){}
	#pragma region �ӿ�ʵ��
		virtual DelegateType type() const{ return DT_MemberMethod; }
		virtual void operator()(SenderT sender, ParamT param)
		{
			((*mReceiverObject).*mReceiverMemberMethod)(sender, param);
		}
		virtual delegate* clone()
		{
			return new ThisT(mReceiverObject, mReceiverMemberMethod);
		}
		virtual bool operator==(const delegate& othd)
		{
			if(othd.type() != DT_MemberMethod)
				return false;
			const ThisT& rFun = dynamic_cast<const ThisT&>(othd);
			return (mReceiverObject == rFun.mReceiverObject && mReceiverMemberMethod == rFun.mReceiverMemberMethod);
		}
	#pragma endregion
	protected:
	#pragma region ��Ա����
		RecObjT mReceiverObject;			//�¼������߶���
		RecMethodT mReceiverMemberMethod;	//�¼��������Ա����
	#pragma endregion
	};  
#pragma endregion
	
#pragma region ��̬��������ȫ�ֺ���ί��ģ��
	template <typename FuncT, typename SenderT, typename ParamT>
	class delegate_sf : public delegate<SenderT, ParamT>
	{
	public:
		typedef delegate_sf<FuncT, SenderT, ParamT> ThisT;
		delegate_sf(const FuncT& func) : mFunction(func){}
		virtual ~delegate_sf(){}
#pragma region �ӿ�ʵ��
		virtual DelegateType type() const{ return DT_StaticFunciton; }
		virtual void operator()(SenderT sender, ParamT param)
		{
			(*mFunction)(sender, param);
		}
		virtual delegate* clone()
		{
			return new ThisT(mFunction);
		}
		virtual bool operator==(const delegate& othd)
		{
			if(othd.type() != DT_StaticFunciton)
				return false;
			const ThisT& rFun = dynamic_cast<const ThisT&>(othd);
			return mFunction == rFun.mFunction;
		}
#pragma endregion
	protected:
#pragma region ��Ա����
		FuncT mFunction;
#pragma endregion
	};
#pragma endregion
}