#pragma once

namespace framework
{
	namespace mvvm
	{
		class DispatcherObject
		{
		public:
			DispatcherObject(){}
			virtual ~DispatcherObject(){}
		};
		// System.Windows.DependencyObject “¿¿µ∂‘œÛ
		class DependencyObject : public DispatcherObject
		{
		public:
			DependencyObject(){}
			virtual ~DependencyObject(){}

		protected:
			struct DependencyPropertyChangedEventArgs
			{
				unity::object* oldValue;
				unity::object* newValue;
			};
			virtual void OnPropertyChanged(DependencyPropertyChangedEventArgs e){}
		};
		// System.Windows.DependencyProperty “¿¿µ Ù–‘
		template<class ValueT>
		class DependencyProperty : public DependencyObject
		{
		public:
			DependencyProperty(){}
			virtual ~DependencyProperty(){}

			virtual operator ValueT() const = 0;
			virtual void operator = (const ValueT& value) = 0;
		};
		// 
		template<class ValueT, typename ValueT defaultV>
		class DependencyPropertyImpl : public DependencyProperty<ValueT>,
										public unity::Property<ValueT>
		{
		public:
			DependencyPropertyImpl()
			{
				this->mValue = defaultV;
			}
			virtual ~DependencyPropertyImpl(){}
		};
	}	// namespace mvvm
}	// namespace framework