using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using clrcocos;

namespace editorcocos.Window
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
            if (mCCApp.RunApp() == 0)
                Application.Exit();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            mEglViewForm = new ccEglViewForm();
            mEglViewForm.Show(this);
        }

        public static CLRccApp ccApp
        {
            get { return mCCApp; }
        }
        
        private static CLRccApp mCCApp = new CLRccApp();
        private ccEglViewForm mEglViewForm;
    }
}
