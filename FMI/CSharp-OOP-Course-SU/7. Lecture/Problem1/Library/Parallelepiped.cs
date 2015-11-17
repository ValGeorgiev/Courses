using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class Parallelepiped : Rectangle
    {
        private Rectangle baseSide;
        private double height;

        public Rectangle BaseSide
        {
            get
            {
                return baseSide;
            }
            set
            {
                if (value != null)
                {
                    baseSide = new Rectangle(value);
                }
                else
                {
                    baseSide = new Rectangle();
                }
            }
        }
        public double Height
        {
            get
            {
                return height;
            }
            set
            {
                if (value >= 0.0)
                {
                    height = value;
                }
                else
                {
                    height = 0.0;
                }

            }
        }

        public Parallelepiped(Rectangle baseSide, double height)
        {
            BaseSide = baseSide;
            Height = height;
        }
        public Parallelepiped() : this(new Rectangle(), 0.0) { }

        public Parallelepiped(Parallelepiped p) : this(p.BaseSide, p.Height) { }

        public override string ToString()
        {
            return string.Format("Base side: {0},  Height: {1}", BaseSide.ToString(), Height);
        }
        public override double Area()
        {
            return BaseSide.Area();
        }
    }
}
