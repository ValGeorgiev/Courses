using System;

namespace Problem5.Selection_Sort
{
    class SelectionSort
    {
        private static int n = 0;
        private static int[] array;

        private static void Sort(int[] array)
        {
            int min = int.MaxValue;
            int minIndex = 0;
            int tmp = 0;
            for (int i = 0; i < array.Length; i++)
            {
                for (int j = i; j < array.Length; j++)
                {
                    if (min > array[j])
                    {
                        min = array[j];
                        minIndex = j;
                    }
                }
                tmp = array[i];
                array[i] = array[minIndex];
                array[minIndex] = tmp;

                min = int.MaxValue;
            }
            Console.WriteLine("({0})", string.Join(", ", array));
        }
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }
            Sort(array);
        }
    }
}
