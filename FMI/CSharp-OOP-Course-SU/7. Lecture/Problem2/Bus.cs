using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Problem2
{
    public class Bus: MotorVehicle
    {
        private int numPassengers;
        private bool airCond;

        public Bus(int numPassengers, bool airCond, string regNum, double tankVolume):base(regNum, tankVolume)
        {
            NumPassengers = numPassengers;
            AirCond = airCond;
        }

        public Bus() : this(0, false, "AA0000AA", 0.0)
        {
        }

        public Bus(Bus b): this(b.NumPassengers, b.AirCond, b.RegNum, b.TankVolume)
        {
        }

        public int NumPassengers
        {
            get
            {
                return numPassengers;
            }

            set
            {
                if (value >= 0)
                {
                    numPassengers = value;
                }
                else
                {
                    numPassengers = 0;
                }
            }
        }

        public bool AirCond
        {
            get
            {
                return airCond;
            }

            set
            {
                airCond = value;
            }
        }
        public override void GiveInfo()
        {
            base.GiveInfo();
            Console.Write("Bus : ");
            Console.WriteLine("Number of passengers: {0}, Air condition: {1}", NumPassengers, AirCond);
        }
    }
}