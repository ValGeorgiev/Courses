using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2_Structs
{
    public struct Point:Comparable
    {
        private double x;
        private double y;
        private double z;

        public double X
        {
            get
            {
                return x;
            }
            set
            {
                x = value;
            }
        }
        public double Y
        {
            get
            {
                return y;
            }
            set
            {
                y = value;
            }
        }
        public double Z
        {
            get
            {
                return z;
            }
            set
            {
                z = value;
            }
        }

        public Point(double x, double y, double z):this()
        {
            X = x;
            Y = y;
            Z = z;
        }

        public double SizeOf()
        {
            return Math.Abs(X) + Math.Abs(Y) + Math.Abs(Z);
        }
        public override string ToString()
        {
            return string.Format("Size of Point : {0:D2}", SizeOf());
        }
    }
}
