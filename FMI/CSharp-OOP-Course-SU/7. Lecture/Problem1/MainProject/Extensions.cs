using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Problem1
{
    public static class Problem1Extensions
    {
        public static double Volume(this Parallelepiped p)
        {
            double volume = p.BaseSide.Area() * p.Height;
            return volume;
        }
        public static double Perimeter(this Rectangle r)
        {
            double perimeter = 2 * r.CalculateLines()[0] + 2 * r.CalculateLines()[1];
            return perimeter;
        }
    }
}
