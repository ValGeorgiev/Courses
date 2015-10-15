using System;


namespace Problem1.Insertion_Sort
{
    public class InsertionSort
    {
        private static int n = 0;
        private static int[] array;

        public InsertionSort()
        {

        }
        public static void Sort(int[] array)
        {
            for (int i = 1 ; i < array.Length; i++)
            {
                int extract = i;
                while (extract > 0 && array[extract] < array[extract - 1])
                {
                    array[extract] = array[extract] + array[extract - 1];
                    array[extract - 1] = array[extract] - array[extract - 1];
                    array[extract] = array[extract] - array[extract - 1];
                    extract--;
                }
            }
            Console.WriteLine("({0})", string.Join(", ", array));
        }
        public static void Main()
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
