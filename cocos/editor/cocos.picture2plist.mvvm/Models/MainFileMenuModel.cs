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
        RelayCommand mImportResCommand = null;
        public ICommand ImportResCommand
        {
            get
            {
                if (mImportResCommand == null)
                {
                    mImportResCommand = new RelayCommand((p) => OnImportRes(p), (p) => CanImportRes(p));
                }

                return mImportResCommand;
            }
        }
        private bool CanImportRes(object parameter)
        {
            return true;
        }
        private void OnImportRes(object parameter)
        {
            MainWindowViewModel mainVM = parameter as MainWindowViewModel;
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Title = "选择文件";
            openFileDialog.Filter = "图片资源文件|*.plist;*.png;*.jpg;*.bmp | 所有文件|*.*";
            openFileDialog.Multiselect = false;
            openFileDialog.FileName = string.Empty;
            openFileDialog.FilterIndex = 1;
            openFileDialog.RestoreDirectory = true;
            DialogResult result = openFileDialog.ShowDialog();
            if (result == System.Windows.Forms.DialogResult.Cancel)
            {
                return;
            }
            int fileNamePos = openFileDialog.FileName.LastIndexOf('\\')+1;
            string filePath = openFileDialog.FileName.Substring(0, fileNamePos);
            string fileName = openFileDialog.FileName.Substring(fileNamePos);
            int exNamePos = fileName.LastIndexOf('.');
            string itemName = fileName.Substring(0, exNamePos);
            string exname = fileName.Substring(exNamePos);
            string picName = filePath + itemName + ".png";
            string plistName = filePath + itemName + ".plist";
            bool needCreatePlist = false;
            if (exname == ".plist")
            {
                if (!File.Exists(picName))
                    picName = filePath + itemName + ".jpg";
                if (!File.Exists(picName))
                    picName = filePath + itemName + ".bmp";
                if (!File.Exists(picName))
                {
                    System.Windows.MessageBox.Show(string.Format("找不到{0}对应de图片文件!", itemName));
                    return;
                }
            }
            else if (exname == ".png" || exname == ".jpg" || exname == ".bmp")
            {
                needCreatePlist = !File.Exists(plistName);
            }
            else
            {
                System.Windows.MessageBox.Show(string.Format("选择的{0}文件类型不正确!", fileName));
                return;
            }
            mainVM.ResourceImport(itemName, picName, plistName, needCreatePlist);
            //FolderBrowserDialog m_Dialog = new FolderBrowserDialog();
            //DialogResult result = m_Dialog.ShowDialog();

            //if (result == System.Windows.Forms.DialogResult.Cancel)
            //{
            //    return;
            //}
            //string m_Dir = m_Dialog.SelectedPath.Trim();
            //this.textBox1.Text = m_Dir;
        }
        #endregion
    }
}
