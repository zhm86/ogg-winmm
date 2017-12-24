using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace WinmmTestApp
{
    class Program
    {
        [DllImport(@"C:\Jeux\ABWFR\Wipeout 2097\Winmm.dll", CharSet = CharSet.Ansi, SetLastError = true)]
        public static extern uint mciSendCommandA(uint mciId, uint uMsg, uint dwParam1, IntPtr dwParam2);

        static void Main(string[] args)
        {
            mciSendCommandA(0, 0, 0, IntPtr.Zero);
        }
    }
}
