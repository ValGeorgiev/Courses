using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _8Lecture_HomeWork
{
    public class Point: HeavyElement
    {
        private int x;
        private int y;

        public int X
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
        public int Y
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

        public Point(int x, int y, double weight)
            : base(weight)
        {
            X = x;
            Y = y;
        }
        public Point() : this(0, 0, 0.0) { }
        public Point(Point p) : this(p.X, p.Y, p.Weight) { }

        public override string ToString()
        {
            return string.Format("X: {0}, Y: {1}, Weight: {2}", X, Y, Weight);
        }
        public override double CalcWeight()
        {
            return Weight;
        }
    }
}
