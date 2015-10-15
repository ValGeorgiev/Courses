using System;

namespace Problem8.Binary_Search
{
    class BinarySearch
    {
        private static int target = 0;
        private static int n = 0;
        private static int[] array;

        private static void Search(int[] array, int start, int end, int target)
        {
            int mid = (end + start) / 2;

            if (target == array[mid])
            {
                Console.WriteLine("Your search found {0} at position {1}", target, mid);
                return;
            }
            if (start >= end)
            {
                Console.WriteLine("Nothing is found");
                return;
            }
            if (target < array[mid])
            {
                Search(array, start, mid - 1, target);
            }
            if(target > array[mid])
            {
                Search(array, mid + 1, end, target);
            }
        }
        static void Main()
        {
            Console.Write("Target: ");
            target = int.Parse(Console.ReadLine());
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }
            Search(array, 0, array.Length - 1, target);
        }
    }
}
