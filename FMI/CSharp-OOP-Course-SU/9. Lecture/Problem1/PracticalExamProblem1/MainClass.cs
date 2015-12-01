using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalExamProblem1
{
    public class MainClass
    {
        public static void Main()
        {
            int[] arr = new int[]{1,2,3};
            Vector my = new Vector(0, arr);

            Console.WriteLine(my);
        }
    }
}
