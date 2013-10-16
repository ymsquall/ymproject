#pragma once
#include "event.h"
#include "unity/property.h"

namespace framework
{
	class DispatcherObject{};
	class INotifyPropertyChanged
	{
	public:
		virtual void RaisePropertyChanged(const char* propertyName) = 0;
	};

	// System.Windows.DependencyObject ∏Ωº” Ù–‘
	class DependencyObject : public DispatcherObject, unity::object
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

	protected:
		void AddVisualChild(Visual child);
	};
	// System.Windows.UIElement
	class Element : public Visual
	{
	public:
		void RaiseEvent(unity::object* e);
	};
	//System.Windows.FrameworkElement
	class FrameworkElement : public Element
	{
	public:
		
	protected:
		unity::object* mDataContext;
		DependencyObject* mParent;
	};
}