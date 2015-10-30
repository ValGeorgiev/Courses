using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem4
{
    class Groups
    {
        private static Random rand = new Random();
        private const int COUNT = 100;
        private static int[] array = new int[COUNT];

        private static void CreateGroups(int[] array)
        {
            int i = 1;
            var allGroups = array
                .GroupBy(x => x)
                .Select(y => y.Key)
                .ToList();

            Console.WriteLine("Number : ");
            foreach (var value in allGroups)
            {
                Console.WriteLine("  {0}", value);
            }

            var allGroupsCount = array
                .GroupBy(x => x)
                .Select(y => y.Count())
                .ToList();

            Console.SetCursorPosition(10, 0);
            Console.WriteLine("Total numbers : ");
            foreach (var value in allGroupsCount)
            {
                Console.SetCursorPosition(10, i++);
                Console.WriteLine("   {0}" ,value);
            }
        }
        static void Main()
        {
            for (int i = 0; i < array.Length; i++)
            {
                array[i] = rand.Next(20, 51) % 8;
            }

            CreateGroups(array);
        }
    }
}
