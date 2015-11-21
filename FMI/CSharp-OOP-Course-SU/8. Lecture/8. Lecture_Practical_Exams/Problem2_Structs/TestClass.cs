using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2_Structs
{
    public class TestClass
    {
        public static void Main()
        {
            Point a = new Point(1, 2, 3);
            Point b = new Point(2, 3, 4);

            Vector ab = new Vector(a, b);
            Vector ba = new Vector(b, a);

            Triangle t = new Triangle(ab, ba);
            Console.WriteLine(t.SizeOf());
        }
    }
}
