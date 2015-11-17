using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Problem2
{
    public class Truck: MotorVehicle
    {
        private int maxLoad;

        public Truck(int maxLoad, string regNum, double tankVolume):base(regNum, tankVolume)
        {
            MaxLoad = maxLoad;
        }

        public Truck():this(0,"AA0000AA", 0.0)
        {
        }

        public Truck(Truck t): this(t.MaxLoad, t.RegNum, t.TankVolume)
        {
        }

        public int MaxLoad
        {
            get
            {
                return maxLoad;
            }

            set
            {
                if (value >= 0) 
                {
                    maxLoad = value;
                }
                else
                {
                    maxLoad = 0;
                }
            }
        }
        public override void GiveInfo()
        {
            base.GiveInfo();

            Console.Write("Truck: ");
            Console.WriteLine("Max Load : {0}", MaxLoad);
        }
    }
}