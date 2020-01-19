using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{

    public partial class Form1 : Form
    {
        [DllImport("OpencvDll.dll", EntryPoint = "AddNum")]

        public extern static int AddNum(int a, int b);

        public Form1()
        {
            InitializeComponent();
            int sum = AddNum((int)30,(int) 40);
            label1.Text = sum.ToString();
        }
    }
}
