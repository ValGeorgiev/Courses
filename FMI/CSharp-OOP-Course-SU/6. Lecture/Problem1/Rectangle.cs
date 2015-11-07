using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class Rectangle
    {
        #region Data-Members
        private Point myPoint;
        private double length;
        private double width;
        private static char[] indexator = new char[]{'x','y','w','h'};
        public delegate double Cmp(Rectangle r);        
        #endregion  

        #region Properties
        public Point MyPoint
        {
            get
            {
                return new Point(myPoint);
            }
            set
            {
                if (value != null && value.Points.Length == 2)
                {
                    myPoint = new Point(value);
                    for (int i = 0; i < value.Points.Length; i++)
                    {
                        if (value.Points[i] >= 0)
                        {
                            myPoint.Points[i] = value.Points[i];
                        }
                    }
                }
                else
                {
                    myPoint = new Point();
                }
            }
        }
        public double Length
        {
            get
            {
                return length;
            }
            set
            {
                if (value > 0.0)
                {
                    length = value;
                }
                else
                {
                    length = 0.0;
                }
            }
        }
        public double Width
        {
            get
            {
                return width;
            }
            set
            {
                if (value > 0.0)
                {
                    width = value;
                }
                else
                {
                    width = 0.0;
                }

            }
        }
        #endregion

        #region Constructors
        public Rectangle(Point myPoint, double length, double width)
        {
            MyPoint = myPoint;
            Length = length;
            Width = width;
        }
        public Rectangle() : this(new Point(), 0.0, 0.0) { }

        public Rectangle(Point myPoint) : this(myPoint, 0.0, 0.0) { }
        #endregion


        public double this[char index]
        {
            get
            {
                switch (index)  
                {
                    case 'x': return MyPoint.Points[0];
                    case 'y': return MyPoint.Points[1];
                    case 'w': return Length;
                    case 'h': return Width;
                    default:
                        throw new IndexOutOfRangeException("wtf");
                }
            }
            set
            {
                switch (index)
                {
                    case 'x': MyPoint.Points[0] = (int)value; break;
                    case 'y': MyPoint.Points[1] = (int)value; break;
                    case 'w': Length = value; break;
                    case 'h': Width = value; break;
                    default:
                        throw new IndexOutOfRangeException("wtf");
                }
            }
        }


        public static double Area(Rectangle r)
        {
            double area = r.Width * r.Length;
            return area;
        }

        public static double Diagonal(Rectangle r)
        {
            double diagonal = Math.Sqrt(r.Width * r.Width + r.Length * r.Length);
            return diagonal;
        }
        public override string ToString()
        {
            return string.Format("{0} , Length : {1}, Width: {2} , Area: {3}, Diagonal : {4}"
                , MyPoint, Length, Width, Area(this), Diagonal(this)) ;
        }
        public static IEnumerable<Rectangle> Sort(List<Rectangle> list, Cmp compare)
        {
            var sortList = list
                .OrderBy(x => compare(x));
            return sortList;
        }
    }
}
