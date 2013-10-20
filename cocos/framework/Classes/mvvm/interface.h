#pragma once

#include "unity/object.h"
#include "unity/property.h"
#include "unity/event.h"
#include "dependency.h"

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

		
		// System.Windows.Media.Visual
		class Visual : public DependencyObject
		{
		public:
			Visual();
			virtual ~Visual(){}

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
			UIElement(){}
			virtual ~UIElement(){}
			void RaiseEvent(unity::object* e){}
		};
		class Model;
		//System.Windows.FrameworkElement
		class FrameworkElement : public UIElement
		{
		public:
			FrameworkElement(){}
			virtual ~FrameworkElement(){}

			virtual bool initForMvvm();

		protected:
			Model* mDataContext;
			DependencyObject* mParent;
		};
	}	// namespace mvvm
}	// namespace framework