using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using cocos.picture2plist.mvvm.Tools;

namespace cocos.picture2plist.mvvm.ViewModels
{
	public abstract class ToolViewModel : PanelViewModel
	{
		#region -----------------构造器-----------------
        protected ToolViewModel()
        {
        }
		protected ToolViewModel( string title )
		{
			DisplayName = title;
		}

		#endregion

		#region -----------------属性-----------------

		private bool _isVisible = true;
		public bool IsVisible
		{
			get { return _isVisible; }
			set
			{
				if (_isVisible != value)
				{
					_isVisible = value;
                    RaisePropertyChanged(() => IsVisible);
				}
			}
		}

		#endregion
	}
}
