using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Controls;
using System.Windows;
using cocos.ribbon.mvvm.ViewModels;

namespace cocos.ribbon.mvvm.Selectors
{
	public class PanelsStyleSelector : StyleSelector
	{
		public Style ToolStyle
		{
			get;
			set;
		}

		public Style DocumentStyle
		{
			get;
			set;
		}

		public override System.Windows.Style SelectStyle(object item, System.Windows.DependencyObject container)
		{
			if (item is ToolViewModel)
				return ToolStyle;

			if (item is DocumentViewModel)
				return DocumentStyle;

			return base.SelectStyle(item, container);
		}
	}
}
