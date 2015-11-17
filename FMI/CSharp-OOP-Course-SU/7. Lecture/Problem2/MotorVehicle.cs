using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Problem2
{
    public class MotorVehicle:Vehicle
    {
        private string regNum;
        private double tankVolume;

        public MotorVehicle(string regNum, double tankVolume)
        {
            RegNum = regNum;
            TankVolume = tankVolume;
        }

        public MotorVehicle() :this("AA0000AA", 0.0)
        {
        }

        public MotorVehicle(MotorVehicle mv):this(mv.RegNum, mv.TankVolume)
        {
        }

        public string RegNum
        {
            get
            {
                return regNum;
            }

            set
            {
                if (value != null)
                {
                    regNum = value;
                }
                else
                {
                    regNum = "AA0000AA";
                }
            }
        }

        public double TankVolume
        {
            get
            {
                return tankVolume;
            }

            set
            {
                if (value > 0.0)
                {
                    tankVolume = value;
                }
                else
                {
                    tankVolume = 1.0;
                }
            }
        }

        public override void GiveInfo()
        {
            Console.WriteLine("Motor Vehicle");
            Console.WriteLine("Data: Register number: {0}, Tank volume: {1}", RegNum, TankVolume);
        }
        
        public bool Greater(MotorVehicle v)
        {
            return this.TankVolume > v.TankVolume;
        }
    }
}