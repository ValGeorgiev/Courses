using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public class MainClass
    {
        public static void Main()
        {
            MotorVehicle mv = new MotorVehicle(100, 200.50M);
            mv.GiveInfo();

            MotorVehicle mv1 = new MotorVehicle(100, 200.50M);
            mv1.GiveInfo();
            Console.WriteLine(mv1.GetHashCode());
        }
    }
}
