using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
using System.Windows.Forms;


namespace editorcocos
{
    public class FormAppProcess
    {
        public static void Proc(Object param)
        {
            Application.Run((Window.MainForm)param);
        }

        public static Thread SelfThread
        {
            get { return mSelfThread; }
        }
        private static Thread mSelfThread = new Thread(Proc);
    }
}
