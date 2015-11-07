using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class Point
    {
        private int[] points;

        public int[] Points
        {
            get
            {
                int[] getPoints = new int[points.Length];
                for (int i = 0; i < points.Length; i++)
                {
                    getPoints[i] = points[i];
                }
                return getPoints;
            }
            set
            {
                if (value != null && value.Length == 2)
                {
                    points = new int[value.Length];
                    for (int i = 0; i < value.Length ; i++)
                    {
                        points[i] = value[i];
                    } 
                }
                else
                {
                    points = new int[2];
                }
            }
        }

        public Point(int[] points)
        {
            Points = points;
        }
        public Point():this(new int[2]{0,0})
        {

        }
        public Point(Point p):this(p.Points)
        {

        }

        public override string ToString()
        {
            return string.Format("x : {0} , y : {1}", points[0], points[1]);
        }
    }
}
