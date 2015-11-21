using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _8Lecture_HomeWork
{
    public class Line: Point
    {
        private Point sPoint;
        private Point ePoint;

        public Point SPoint
        {
            get
            {
                return sPoint;
            }
            set
            {
                sPoint = value;
            }
        }
        public Point EPoint
        {
            get
            {
                return ePoint;
            }
            set
            {
                ePoint = value;
            }
        }

        public Line(Point sPoint, Point ePoint, int x, int y, double weight)
            : base(x, y, weight)
        {
            SPoint = sPoint;
            EPoint = ePoint;
        }
        public Line() : this(new Point(0, 0, 0), new Point(0, 0, 0), 0, 0, 0.0) { }
        public Line(Line l) : this(l.SPoint, l.EPoint, l.X, l.Y, l.Weight) { }

        public override string ToString()
        {
            return string.Format("Start point: {0}, End point: {1}", SPoint, EPoint);
        }
        public override double CalcWeight()
        {
            double length = Math.Abs(SPoint.X - EPoint.X);
            return (length * ((SPoint.Weight + EPoint.Weight) / 2));
        }
    }
}
