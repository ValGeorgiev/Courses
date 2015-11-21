using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2_Structs
{
    public struct Vector:Comparable
    {
        private Point start;
        private Point end;

        public Point Start
        {
            get
            {
                return start;
            }
            set
            {
                start = value;
            }
        }
        public Point End
        {
            get
            {
                return end;
            }
            set
            {
                end = value;
            }
        }

        public Vector(Point start, Point end):this()
        {
            Start = start;
            End = end;
        }

        public double SizeOf()
        {
            return Math.Abs(Start.SizeOf() - End.SizeOf());
        }

        public override string ToString()
        {
            return string.Format("Size of vector: {0:D2} ", SizeOf());
        }
    }
}
