using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2_Structs
{
    public struct Triangle:Comparable
    {
        private Vector a;
        private Vector b;

        public Vector A
        {
            get
            {
                return a;
            }
            set
            {
                a = value;
            }
        }
        public Vector B
        {
            get
            {
                return b;
            }
            set
            {
                b = value;
            }
        }

        public Triangle(Vector a, Vector b)
            : this()
        {
            A = a;
            B = b;
        }
        public double SizeOf()
        {
            return Math.Abs((A.SizeOf() * B.SizeOf()) / 2);
        }
        public override string ToString()
        {
            return string.Format("Size of Triangle : {0:D2}", SizeOf());
        }
    }
}
