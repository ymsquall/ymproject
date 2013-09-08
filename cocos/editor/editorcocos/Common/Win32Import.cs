using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace editorcocos.Common
{
    public class Win32Import
    {
        [DllImport("user32.dll", EntryPoint = "SetParent")]
        public static extern IntPtr SetParent(IntPtr hWndChild, IntPtr hWndNewParent);
        [DllImport("user32.dll", EntryPoint = "SetWindowPos")]
        public static extern Int32 SetWindowPos(IntPtr hWnd, IntPtr hWndInsertAfter, Int32 x, Int32 y,
                                                Int32 cx, Int32 cy, UInt32 uFlags);

        public const Int32 SWP_NOZORDER = 0x0004;
        public const Int32 WM_QUIT = 0x0012;
    }
}
