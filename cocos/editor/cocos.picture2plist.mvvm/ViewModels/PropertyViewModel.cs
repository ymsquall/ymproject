using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cocos.picture2plist.mvvm.ViewModels
{
    class PropertyViewModel : ToolViewModel
    {
        public PropertyViewModel()
        {
            DisplayName = "属性";
        }
        public PropertyViewModel(string title = "属性")
            : base(title)
        {

        }

        private object mSelectedItem;
        public object SelectedItem
        {
            get
            {
                return this.mSelectedItem;
            }
            set
            {
                this.mSelectedItem = value;
                RaisePropertyChanged("SelectedItem");
            }
        }
    }
}
