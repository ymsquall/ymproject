using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using clrcocos;
using System.Threading;
using System.Windows.Forms;

namespace editorcocos
{
    public class ccAppProcess
    {
        public static void Proc(Object param)
        {
            CLRccApp pApp = new CLRccApp();
            int ret = pApp.RunApp();
        }

        public static Thread SelfThread
        {
            get { return mSelfThread; }
        }

        private static Thread mSelfThread = new Thread(Proc);
    }
}
