using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Problem2
{
    public class MiniBus: Bus
    {
        public override void GiveInfo()
        {
            base.GiveInfo();
            Console.WriteLine("Mini bus");
        }
    }
}