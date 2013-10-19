#pragma once

#include "unity/object.h"
#include "unity/property.h"
#include "unity/event.h"

namespace framework
{
	namespace mvvm
	{
		class NotifyPropertyChangedRoutedEventArgs : public unity::RoutedEventArgs
		{
		public:
			std::string PropertyName;
		};
		class INotifyPropertyChanged
		{
		public:
			unity::RoutedEvent<INotifyPropertyChanged*> PropertyChanged;
			virtual void RaisePropertyChanged(const char* propertyName)
			{
				NotifyPropertyChangedRoutedEventArgs args;
				args.PropertyName = propertyName;
				PropertyChanged(this, &args);
			}
		};

		class DispatcherObject{};
		// System.Windows.DependencyObject ��������
		class DependencyObject : public DispatcherObject
		{
		protected:
			struct DependencyPropertyChangedEventArgs
			{
				unity::object* oldValue;
				unity::object* newValue;
			};
			virtual void OnPropertyChanged(DependencyPropertyChangedEventArgs e){}
		};
		// System.Windows.Media.Visual
		class Visual : public DependencyObject
		{
		public:
			Visual();
			~Visual(){}

			PROPERTY_READONLY_DEFINED(VisualParent, DependencyObject*, Visual);
			PROPERTY_READONLY_DEFINED(VisualChildrenCount, size_t, Visual);

		protected:
			void AddVisualChild(Visual* child);
			Visual* GetVisualChild(size_t index);
			void RemoveVisualChild(Visual* child);

		private:
			std::vector<Visual*> mVisualChilden;
		};
		// System.Windows.UIElement
		class UIElement : public Visual
		{
		public:
			void RaiseEvent(unity::object* e);
		};
		//System.Windows.FrameworkElement
		class FrameworkElement : public UIElement
		{
		public:

		protected:
			unity::object* mDataContext;
			DependencyObject* mParent;
		};
	}	// namespace mvvm
}	// namespace framework