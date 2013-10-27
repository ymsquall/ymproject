using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using cocos.picture2plist.mvvm.Models;
using System.Windows;
using System.Windows.Controls;

namespace cocos.picture2plist.mvvm.ViewModels
{
    class SceneViewModel : DocumentViewModel
    {
        public SceneViewModel()
        {
            DisplayName = "plist";
        }
        public SceneViewModel(PlistResModel resMedel)
        {
            ResModel = resMedel;
            DisplayName = ResModel.ResName;
        }

        public PlistResModel ResModel { get; set; }
    }
}
