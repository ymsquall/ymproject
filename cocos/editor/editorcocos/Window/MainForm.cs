using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Xceed.Wpf.AvalonDock;
using Xceed.Wpf.AvalonDock.Layout;
using Xceed.Wpf.AvalonDock.Layout.Serialization;
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
            //////////////////////////////////////////////////////////////////////////
            // test way
            XmlLayoutSerializer serializer = new XmlLayoutSerializer(mDockingManager);
            serializer.LayoutSerializationCallback += (s, args) =>
            {
                switch (args.Model.ContentId)
                {
                    case "toolWindow1":
                        args.Content = new System.Windows.Controls.TextBlock() { Text = args.Model.ContentId };
                        break;
                    default:
                        args.Content = new System.Windows.Controls.TextBox() { Text = args.Model.ContentId };
                        break;
                }

            };
            serializer.Deserialize(
                new System.IO.StringReader(
                Properties.Settings.Default.DefaultLayout));
            mElementHost.Child = mDockingManager;
            //////////////////////////////////////////////////////////////////////////
        }

        public static CLRccApp ccApp
        {
            get { return mCCApp; }
        }
        
        private static CLRccApp mCCApp = new CLRccApp();
        private ccEglViewForm mEglViewForm;
        public static DockingManager mDockingManager = new DockingManager();
    }
}
