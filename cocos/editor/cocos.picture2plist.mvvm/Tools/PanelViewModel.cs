using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cocos.picture2plist.mvvm.Tools
{
    public abstract class PanelViewModel : ObservableObject
    {
        #region -----------------构造器-----------------

        protected PanelViewModel()
		{
		}

		#endregion

		#region -----------------属性-----------------

		private string _Icon;
		public string Icon
		{
			get { return _Icon; }
			set
			{
				if (_Icon != value)
				{
					_Icon = value;
                    RaisePropertyChanged(() => Icon);
				}
			}
		}

		private string _contentId = null;
		public string ContentId
		{
			get { return _contentId; }
			set
			{
				if (_contentId != value)
				{
					_contentId = value;
                    RaisePropertyChanged(() => ContentId);
				}
			}
		}

		private bool _isSelected = false;
		public bool IsSelected
		{
			get { return _isSelected; }
			set
			{
				if (_isSelected != value)
				{
					_isSelected = value;
                    RaisePropertyChanged(() => IsSelected);
				}
			}
		}

		private bool _isActive = false;
		public bool IsActive
		{
			get { return _isActive; }
			set
			{
				if (_isActive != value)
				{
					_isActive = value;
                    RaisePropertyChanged(() => IsActive);
				}
			}

		}

		#endregion

    }
}
