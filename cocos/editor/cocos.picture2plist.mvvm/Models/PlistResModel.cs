using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.ObjectModel;
using cocos.picture2plist.mvvm.Tools;
using cocos.picture2plist.mvvm.Commands;
using cocos.picture2plist.mvvm.ViewModels;
using System.Windows;
using System.IO;
using System.Windows.Input;
using System.Windows.Forms;
using PropertyTools.Wpf;

namespace cocos.picture2plist.mvvm.Models
{
    class PlistResModel : CompositeNode
    {
        public PlistResModel()
        {

        }
        public PlistResModel(string resName, string picName, string plistName)
        {
            ResName = resName;
            PicName = picName;
            PlistName = plistName;
        }
        public string ResName
        {
            get;
            set;
        }
        public string PicName
        {
            get;
            set;
        }
        public string PlistName
        {
            get;
            set;
        }
        //private string[] mResNames = new string[3];
        //public string ResName 
        //{
        //    get{ return mResNames[0]; }
        //    set { mResNames[0] = value; }
        //}
        //public string PicName
        //{
        //    get { return mResNames[1]; }
        //    set { mResNames[1] = value; }
        //}
        //public string PlistName
        //{
        //    get { return mResNames[2]; }
        //    set { mResNames[2] = value; }
        //}
    }
}
