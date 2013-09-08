using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Threading;
using clrcocos;

namespace editorcocos
{
    static class Entry
    {
        /// <summary>
        /// 应用程序的主入口点。
        /// </summary>
        [STAThread]
        static int Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);

            FormAppProcess.SelfThread.Start(null);
            //ccAppProcess.SelfThread.Start(null);
            CLRccApp pApp = new CLRccApp();
            int ret = pApp.RunApp();
            while (FormAppProcess.SelfThread.ThreadState != ThreadState.Stopped)
            {
            }

            //ccAppProcess.SelfThread.Abort();
            FormAppProcess.SelfThread.Abort();
            return ret;
        }
    }
}
