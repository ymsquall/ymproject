using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.ObjectModel;
using cocos.picture2plist.mvvm.Tools;
using cocos.picture2plist.mvvm.Models;
using PropertyTools.Wpf;
using System.Windows;
using System.Windows.Controls;
using Fluent;
using Xceed.Wpf.AvalonDock.Layout;
using Xceed.Wpf.AvalonDock.Controls;

namespace cocos.picture2plist.mvvm.ViewModels
{
    class MainWindowViewModel : ObservableObject
    {
        #region -----------------构造器-----------------

        public MainWindowViewModel()
        {
            //SceneViewModel sceneView = new SceneViewModel();
            //Documents.Add(sceneView);
            //ActiveDocument = sceneView;

            //ExplorerViewModel tool1 = new ExplorerViewModel();
            //PropertyViewModel tool2 = new PropertyViewModel();
            //OutputViewModel tool3 = new OutputViewModel();
            //PropertyViewModel tool4 = new PropertyViewModel();
            //Tools.Add(tool1);
            //Tools.Add(tool2);
            //Tools.Add(tool3);
        }

        #endregion

        #region -----------------属性-----------------

        public MainWindow ParentView
        {
            get;
            set;
        }

        private ObservableCollection<DocumentViewModel> _Documents;
        public ObservableCollection<DocumentViewModel> Documents
        {
            get
            {
                if (_Documents == null)
                {
                    _Documents = new ObservableCollection<DocumentViewModel>();
                }
                return _Documents;
            }
        }

        private DocumentViewModel _ActiveDocument = null;
        public DocumentViewModel ActiveDocument
        {
            get
            {
                return _ActiveDocument;
            }
            set
            {
                if (_ActiveDocument != value)
                {
                    _ActiveDocument = value;

                    RaisePropertyChanged(() => ActiveDocument);
                }
            }
        }

        private ObservableCollection<ToolViewModel> _Tools = new ObservableCollection<ToolViewModel>();
        public ObservableCollection<ToolViewModel> Tools
        {
            get
            {
                return _Tools;
            }
        }


        private ExplorerViewModel mExplorerViewModel = new ExplorerViewModel();
        public ExplorerViewModel ExplorerVM
        {
            get
            {
                return mExplorerViewModel;
            }
        }
        public NodeViewModel TreeListRootNode
        {
            get
            {
                return mExplorerViewModel.RootModel;
            }
        }
        public IEnumerable TreeListRoot
        {
            get
            {
                return mExplorerViewModel.Root;
            }
        }

        private PropertyViewModel mPropertyViewModel = new PropertyViewModel();
        public object PropertyViewItem
        {
            get
            {
                return mPropertyViewModel.SelectedItem;
            }
        }

        private MainFileMenuModel mMainFileMenuModel = new MainFileMenuModel();
        public MainFileMenuModel MainFileMenuCommand
        {
            get
            {
                return mMainFileMenuModel;
            }
        }
        #endregion

        #region -----------------事件-----------------
        public void ResourceImport(string itemName, string fileName, string plistName, bool createPlist)
        {
            NodeViewModel rootNode = TreeListRootNode;
            //var rootEnum = TreeListRoot;
            //if(rootEnum != null)
            //{
            //    foreach (var item in rootEnum)
            //    {
            //        rootNode = item as NodeViewModel;
            //        if (rootNode != null && rootNode.Name == "Root")
            //            break;
            //    }
            //}
            NodeViewModel childNode = rootNode.AddChild();
            childNode.Name = itemName;
            var resModel = childNode.Node as PlistResModel;
            resModel.ResName = itemName;
            resModel.PicName = fileName;
            resModel.PlistName = plistName;
        }

        public void OnTreeListSelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            var treeList = sender as TreeListBox;
            var selectNode = treeList.SelectedValue as NodeViewModel;
            NodeViewModel rootNode = TreeListRootNode;
            int selIndex = rootNode.Children.IndexOf(selectNode);
            if (selIndex == -1)
                return;
            PlistResModel resModel = selectNode.Node as PlistResModel;
            foreach (var item in Documents)
            {
                var viewModel = item as SceneViewModel;
                if (viewModel.ResModel == resModel)
                {
                    ActiveDocument = viewModel;
                    return;
                }
            }
            SceneViewModel sceneView = new SceneViewModel(resModel);
            Documents.Add(sceneView);
            ActiveDocument = sceneView;

            var mainWindow = ParentView as MainWindow;
            var firstDocumentPane = mainWindow.mDockingManager.Layout.Descendents().OfType<LayoutDocumentPane>().FirstOrDefault();
            
            if (firstDocumentPane != null)
            {
                foreach (var item in firstDocumentPane.Children.OfType<LayoutDocument>())
                {
                    var itemViewModel = item.Content as SceneViewModel;
                    if (itemViewModel == sceneView)
                    {
                        var layoutItem = mainWindow.mDockingManager.GetLayoutItemFromModel(item) as LayoutDocumentItem;
                        var textView = new TextBlock();
                        textView.Text = "腐蚀毒粉  福施福实得分实得分";
                        textView.DataContext = textView;
                        //layoutItem. = textView;
                        break;
                    }
                }
            }
            var firstAnchorablePane = mainWindow.mDockingManager.Layout.Descendents().OfType<LayoutAnchorablePane>().FirstOrDefault();
            if (firstAnchorablePane != null)
            {
                foreach (var item in firstAnchorablePane.Children.OfType<LayoutAnchorable>())
                {
                    var itemViewModel = item.Content as SceneViewModel;
                    if (itemViewModel == sceneView)
                    {
                        break;
                    }
                }
            }
        }

        #endregion
    }
}
