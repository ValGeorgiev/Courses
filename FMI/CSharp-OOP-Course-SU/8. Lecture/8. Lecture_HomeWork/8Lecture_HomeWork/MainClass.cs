using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _8Lecture_HomeWork
{
    public class MainClass
    {
        public static void MixHeavyObjects(HeavyElement[] hs)
        {
            Random rnd = new Random();
            hs = hs.OrderBy(x => rnd.Next()).ToArray();  
        }
        public static void Main()
        {
            Point pointA = new Point(0, 0, 10);
            Point pointB = new Point(1, 2, 20);

            Line myLineA = new Line(pointA, pointB, pointA.X, pointA.Y, pointA.Weight);
            Line myLineB = new Line(pointB, pointA, pointB.X, pointB.Y, pointB.Weight);

            HeavyElement[] hs = new HeavyElement[] { pointA, pointB, myLineA, myLineB };

            MixHeavyObjects(hs);

        }
    }
}
