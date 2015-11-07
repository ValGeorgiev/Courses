using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class Problem1Test
    {
        public static void Main()
        {
            int[] arr = new int[2]{1,2};
            int[] arr1 = new int[2]{2,2};
            int[] arr2 = new int[2]{3,2};
            int[] arr3 = new int[2]{4,2};

            Point first = new Point(arr);
            Point second = new Point(arr1);
            Point third = new Point(arr2);
            Point forth = new Point(arr3);
            List<Rectangle> lists = new List<Rectangle>(){ 
                new Rectangle(first, 11,2),
                new Rectangle(second, 3,2),
                new Rectangle(third, 4,2),
                new Rectangle(forth, 4,4)
            };
            Console.WriteLine(first);
            Console.WriteLine(second);
            Console.WriteLine(third);
            Console.WriteLine(forth);


            Console.WriteLine("Sort by Area: ");
            var sortListByArea = Rectangle.Sort(lists, Rectangle.Area);
            foreach(var item in sortListByArea){
                Console.WriteLine(item);
            }

            Console.WriteLine("Sort by Diagonal: ");
            var sortListByDiagonal = Rectangle.Sort(lists, Rectangle.Diagonal);
            foreach (var item in sortListByDiagonal)
            {
                Console.WriteLine(item);
            }
        }

    }
}
