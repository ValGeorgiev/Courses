using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Problem2
{
    public class PrivateCar: MotorVehicle
    {
        private int numSeats;

        public PrivateCar(int numSeats, string regNum, double tankVolume) : base(regNum, tankVolume)
        {
            NumSeats = numSeats;
        }

        public PrivateCar():this(1,"AA0000AA",0.0)
        {
        }
        public PrivateCar(PrivateCar p): this(p.numSeats, p.RegNum, p.TankVolume)
        {
        }
        public int NumSeats
        {
            get
            {
                return numSeats;
            }

            set
            {
                if (value > 0)
                {
                    numSeats = value;
                }
                else
                {
                    numSeats = 1;
                }
            }
        }

        public override void GiveInfo()
        {
            base.GiveInfo();

            Console.Write("Private car: ");
            Console.WriteLine("Number of seats: {0}", NumSeats);
        }
    }
}