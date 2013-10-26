using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Input;
using cocos.picture2plist.mvvm.Tools;

namespace cocos.picture2plist.mvvm.ViewModels
{
	public abstract class DocumentViewModel : PanelViewModel
    {
        #region -----------------构造器-----------------

        protected DocumentViewModel()
		{
		}

		#endregion

		
        //#region -----------------CloseCommand-----------------

        //RelayCommand _closeCommand;

        ///// <summary>
        ///// Returns the command that, when invoked, attempts
        ///// to remove this from the user interface.
        ///// </summary>
        //public ICommand CloseCommand
        //{
        //    get
        //    {
        //        if (_closeCommand == null)
        //            _closeCommand = new RelayCommand(param => this.OnRequestClose());

        //        return _closeCommand;
        //    }
        //}

        //#endregion

        //#region -----------------RequestClose [event]-----------------

        ///// <summary>
        ///// Raised when this should be removed from the UI.
        ///// </summary>
        /////public event EventHandler RequestClose;

        //virtual protected void OnRequestClose()
        //{
        //    //EventHandler handler = this.RequestClose;
        //    //if (handler != null)
        //    //    handler(this, EventArgs.Empty);
        //    Mediator.Instance.NotifyColleagues<DocumentViewModel>(ViewModelMessages.DocumentRequestClose, this);
        //}

        //#endregion
	}
}
