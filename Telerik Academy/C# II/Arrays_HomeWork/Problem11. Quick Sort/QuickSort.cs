using System;

namespace Problem11.Quick_Sort
{
    class QuickSort
    {
        private static int n = 0;
        private static int[] array;

        private static int Partition(int[] array, int left, int right)
        {
            int pivot = array[right - 1];
            int j = left;
            int tmp = 0;

            for (int i = left; i < right - 1; i++)
            {
                if (array[i] < pivot)
                {
                    tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                    j++;
                }
            }
            tmp = array[j];
            array[j] = pivot;
            array[right - 1] = tmp;
            return j;
        }

        private static void QuickSortRecursive(int[] array, int left, int right)
        {
            if (left >= right)
            {
                return;
            }
            int p = Partition(array, left, right);
            QuickSortRecursive(array, left, p - 1);
            QuickSortRecursive(array, p + 1, right);
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

            QuickSortRecursive(array, 0, array.Length);
            Console.WriteLine("{0}", string.Join(", ", array));        
        }
    }
}
