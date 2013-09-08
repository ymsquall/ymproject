using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace editorcocos.Window
{
    public partial class ccEglViewForm : Form
    {
        public ccEglViewForm()
        {
            InitializeComponent();
            Common.Win32Import.SetParent(MainForm.ccApp.CLREGLViewHWnd, mEglViewPanel.Handle);
        }

        private void ViewForm_Load(object sender, EventArgs e)
        {
            mCCAppMainProcTimer.Interval = (int)(MainForm.ccApp.CLRAnimInva * 1000.0f);
            mCCAppMainProcTimer.Enabled = true;
            this.Dock = DockStyle.Fill;
            this.OnResize(null);
        }

        private void ccEglViewPanel_Resize(object sender, EventArgs e)
        {
            Common.Win32Import.SetWindowPos(MainForm.ccApp.CLREGLViewHWnd, mEglViewPanel.Handle, 0, 0, mEglViewPanel.Size.Width, mEglViewPanel.Size.Height, Common.Win32Import.SWP_NOZORDER);
        }

        private void CCAppMainProcTimer_Tick(object sender, EventArgs e)
        {
            if (MainForm.ccApp == null || MainForm.ccApp.RunOneStep() == Common.Win32Import.WM_QUIT)
                Application.Exit();
        }
    }
}
