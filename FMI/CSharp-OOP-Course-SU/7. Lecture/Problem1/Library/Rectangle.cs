using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class Rectangle : Point
    {
        private Point upperLeft;
        private Point lowerRight;

        public Point UpperLeft
        {
            get
            {
                return upperLeft;
            }
            set
            {
                if (value != null)
                {
                    upperLeft = new Point(value);
                }
                else
                {
                    upperLeft = new Point();
                }
            }
        }
        public Point LowerRight
        {
            get
            {
                return lowerRight;
            }
            set
            {
                if (value != null)
                {
                    lowerRight = new Point(value);
                }
                else
                {
                    lowerRight = new Point();
                }
            }
        }

        public Rectangle(Point upperLeft, Point lowerRight)
        {
            UpperLeft = upperLeft;
            LowerRight = lowerRight;
        }
        public Rectangle() : this(new Point(), new Point()) { }

        public Rectangle(Rectangle r) : this(r.upperLeft, r.lowerRight) { }

        public override string ToString()
        {
            return string.Format("Upper Left Corner : {0}, Lower Right Corner : {1}", UpperLeft.ToString(), LowerRight.ToString());
        }

        public int[] CalculateLines()
        {
            int[] lines = new int[2];
            int maxX = Math.Max(UpperLeft.Coordinates[0], LowerRight.Coordinates[0]);
            int maxY = Math.Max(UpperLeft.Coordinates[1], LowerRight.Coordinates[1]);
            int minX = Math.Min(UpperLeft.Coordinates[0], LowerRight.Coordinates[0]);
            int minY = Math.Min(UpperLeft.Coordinates[1], LowerRight.Coordinates[1]);

            lines[0] = maxX - minX;
            lines[1] = maxY - minY;
            return lines;
        }

        public virtual double Area()
        {
            double area = 0.0;
            area = CalculateLines()[0] * CalculateLines()[1];

            return area;
        }
    }
}
