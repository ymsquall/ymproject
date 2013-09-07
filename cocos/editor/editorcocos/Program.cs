using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using clrcocos;

namespace editorcocos
{
    static class Program
    {
        /// <summary>
        /// 应用程序的主入口点。
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            CLRccApp pApp = new CLRccApp();
            pApp.RunApp();
            Application.Run(new MainForm());
        }
    }
}
