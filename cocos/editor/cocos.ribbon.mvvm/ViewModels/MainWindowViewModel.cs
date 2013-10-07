using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.ObjectModel;
using cocos.ribbon.mvvm.Tools;

namespace cocos.ribbon.mvvm.ViewModels
{
    class MainWindowViewModel : ObservableObject
    {
        #region -----------------构造器-----------------

        public MainWindowViewModel()
        {
            SceneViewModel sceneView = new SceneViewModel();
            Documents.Add(sceneView);
            ActiveDocument = sceneView;

            ExplorerViewModel tool1 = new ExplorerViewModel();
            PropertyViewModel tool2 = new PropertyViewModel();
            OutputViewModel tool3 = new OutputViewModel();
            PropertyViewModel tool4 = new PropertyViewModel();
            Tools.Add(tool1);
            Tools.Add(tool2);
            Tools.Add(tool3);
        }

        #endregion

        #region -----------------属性-----------------
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
                    //RaisePropertyChanged("HasDriveActive");
                    //RaisePropertyChanged("HasBookActive");
                    //RaisePropertyChanged("HasRssActive");
                    //RaisePropertyChanged("HasLibraryActive");
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

        #endregion
    }
}
