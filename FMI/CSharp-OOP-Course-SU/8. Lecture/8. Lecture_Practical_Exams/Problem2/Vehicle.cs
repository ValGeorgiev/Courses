using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public abstract class Vehicle
    {
        private decimal price;
        private readonly string NUMBER;
        private static int counter;

        public decimal Price { get; set; }

        public string GetNUMBER {
            get
            {
                return NUMBER;
            }
        }

        public Vehicle(decimal price) {
            Price =  price;
            NUMBER = string.Format("CA{0:D4}AB", counter++);
            
        }
        public Vehicle(Vehicle v) : this(v.price) { }
        public Vehicle() : this(0.0M) { }
        public abstract void GiveInfo();

        public override string ToString()
        {
            return string.Format("{0} price: {1}", NUMBER, price);
        }
        public override bool Equals(object obj)
        {
            if (obj == null || GetType() != obj.GetType())
            {
                return false;
            }
            Vehicle v = (Vehicle)obj;
            return v.price == price;
        }
        public override int GetHashCode()
        {
            return ToString().GetHashCode();
        }

        public static bool operator ==(Vehicle v1, Vehicle v2)
        {
            if ((object)v1 == null)
            {
                return false;
            }
            return v1.Equals(v2);
        }
        public static bool operator !=(Vehicle v1, Vehicle v2)
        {
            if ((object)v1 == null)
            {
                return true;
            }
            return !v1.Equals(v2);
        }
    }
}
