using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cocos.picture2plist.mvvm.ViewModels
{
    class SceneViewModel : DocumentViewModel
    {
        public SceneViewModel()
        {
            DisplayName = "plist";
        }
        public SceneViewModel(string title = "plist")
        {
            DisplayName = title;
        }
    }
}
