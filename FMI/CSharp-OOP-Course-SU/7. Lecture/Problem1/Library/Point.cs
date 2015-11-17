using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class Point
    {
        private int[] coordinates;

        public int[] Coordinates
        {
            get
            {
                return coordinates;
            }
            set
            {
                if (value != null && value.Length == 2)
                {
                    coordinates = new int[value.Length];
                    for (int i = 0; i < value.Length; i++)
                    {
                        coordinates[i] = value[i];
                    }
                }
                else
                {
                    coordinates = new int[2];
                }
            }
        }

        public Point(int[] coordinates)
        {
            Coordinates = coordinates;
        }
        public Point() : this(new int[2] { 0, 0 }) { }
        public Point(Point p) : this(p.coordinates) { }

        public override string ToString()
        {
            return string.Format("X: {0}, Y: {1}", coordinates[0], coordinates[1]);
        }

    }
}
