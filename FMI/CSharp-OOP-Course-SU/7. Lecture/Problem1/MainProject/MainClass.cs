using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace Problem1
{
    public class MainClass
    {
        public static void Main()
        {
            Point firstPoint = new Point(new int[2] { 5, 6 });
            Point secondPoint = new Point(new int[2] { 8, 10 });
            Console.WriteLine(firstPoint);
            Console.WriteLine(secondPoint);

            Rectangle r = new Rectangle(firstPoint, secondPoint);
            Console.WriteLine("Area of rectangle: {0}", r.Area());
            Console.WriteLine("Perimeter of rectangle: {0}", r.Perimeter());

            Parallelepiped p = new Parallelepiped(r, 2);

            Console.WriteLine(p);
            Console.WriteLine("Height of parallelepiped {0}", p.Height);
            Console.WriteLine("Volume of parallelepiped {0}", p.Volume());

        }
    }
}
