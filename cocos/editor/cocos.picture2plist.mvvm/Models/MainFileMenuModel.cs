using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.ObjectModel;
using cocos.picture2plist.mvvm.Tools;
using cocos.picture2plist.mvvm.commands;
using System.Windows.Input;

namespace cocos.picture2plist.mvvm.Models
{
    class MainFileMenuModel : ObservableObject
    {
        #region -----------------构造器-----------------
        public MainFileMenuModel()
        {
        }
        #endregion

        #region -----------------OpenCommand-----------------
        RelayCommand mOpenCommand = null;
        public ICommand OpenCommand
        {
            get
            {
                if (mOpenCommand == null)
                {
                    mOpenCommand = new RelayCommand((p) => OnOpen(p), (p) => CanOpen(p));
                }

                return mOpenCommand;
            }
        }
        private bool CanOpen(object parameter)
        {
            return true;
        }
        private void OnOpen(object parameter)
        {
        }
        #endregion

        #region -----------------SaveCommand-----------------
        RelayCommand mSaveCommand = null;
        public ICommand SaveCommand
        {
            get
            {
                if (mSaveCommand == null)
                {
                    mSaveCommand = new RelayCommand((p) => OnSave(p), (p) => CanSave(p));
                }

                return mSaveCommand;
            }
        }
        private bool CanSave(object parameter)
        {
            return true;
        }
        private void OnSave(object parameter)
        {
        }
        #endregion

        #region -----------------SaveAsCommand-----------------
        RelayCommand mSaveAsCommand = null;
        public ICommand SaveAsCommand
        {
            get
            {
                if (mSaveAsCommand == null)
                {
                    mSaveAsCommand = new RelayCommand((p) => OnSaveAs(p), (p) => CanSaveAs(p));
                }

                return mSaveAsCommand;
            }
        }
        private bool CanSaveAs(object parameter)
        {
            return true;
        }
        private void OnSaveAs(object parameter)
        {
        }
        #endregion

        #region -----------------SaveAllCommand-----------------
        RelayCommand mSaveAllCommand = null;
        public ICommand SaveAllCommand
        {
            get
            {
                if (mSaveAllCommand == null)
                {
                    mSaveAllCommand = new RelayCommand((p) => OnSaveAll(p), (p) => CanSaveAll(p));
                }

                return mSaveAllCommand;
            }
        }
        private bool CanSaveAll(object parameter)
        {
            return true;
        }
        private void OnSaveAll(object parameter)
        {
        }
        #endregion

        #region -----------------ExportCommand-----------------
        RelayCommand mInportResCommand = null;
        public ICommand InportCommand
        {
            get
            {
                if (mInportResCommand == null)
                {
                    mInportResCommand = new RelayCommand((p) => OnInportRes(p), (p) => CanInportRes(p));
                }

                return mInportResCommand;
            }
        }
        private bool CanInportRes(object parameter)
        {
            return true;
        }
        private void OnInportRes(object parameter)
        {
        }
        #endregion
    }
}
