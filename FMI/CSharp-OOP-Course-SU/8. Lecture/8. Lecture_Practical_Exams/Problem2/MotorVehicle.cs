using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public class MotorVehicle: Vehicle
    {
        private string reg_num;
        private double tankVolume;

        public string Reg_Num
        {
            get
            {
                return reg_num;
            }
            private set
            {
                reg_num = GetNUMBER;
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
                if (value > 0)
                {
                    tankVolume = value;
                }
                else
                {
                    tankVolume = 0;
                }
            }
        }

        public MotorVehicle(double tankVolume, decimal price)
            : base(price)
        {
            TankVolume = tankVolume;
            Reg_Num = reg_num;
        }

        public MotorVehicle() : this(0.0, 0.0m) { }

        public MotorVehicle(MotorVehicle mv) : this(mv.TankVolume, mv.Price) { }

        public override void GiveInfo()
        {
            Console.WriteLine("Registration number: {0}, Tank volume: {1}", Reg_Num, tankVolume);
        }

        public bool Greater(MotorVehicle v)
        {
            return (this.tankVolume + (double)this.Price) > (v.TankVolume + (double)v.Price);
        }

        public override bool Equals(object obj)
        {
            if (obj == null || GetType() != obj.GetType())
            {
                return false;
            }
            MotorVehicle v = (MotorVehicle)obj;
            if (v.Reg_Num.CompareTo(Reg_Num) == 0)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        public override int GetHashCode()
        {
            return ToString().GetHashCode();
        }

        public static bool operator ==(MotorVehicle v1, MotorVehicle v2)
        {
            if ((object)v1 == null)
            {
                return false;
            }
            return v1.Equals(v2);

        }
        public static bool operator !=(MotorVehicle v1, MotorVehicle v2)
        {
            if ((object)v1 == null)
            {
                return true;
            }
            return !v1.Equals(v2);
        }

    }
}
