using System;
using System.Collections.Generic;

namespace Problem3.Merge_Sort
{
    class MergeSort
    {
        private static int n = 0;
        private static int[] array;
        private static void Sort(int[] array, int left, int right)
        {
            int middle;

            if (right > left)
            {
                middle = (right + left) / 2;
                Sort(array, left, middle);
                Sort(array, middle + 1, right);
                Merge(array, left, middle + 1, right);
            }

        }

        private static void Merge(int[] array, int left, int middle, int right)
        {
            int[] tmp = new int[array.Length];
            int i, leftEnd, arrayElements, tmpPosition;

            leftEnd = middle - 1;
            tmpPosition = left;
            arrayElements = (right - left + 1);

            while ((left <= leftEnd) && (middle <= right))
            {
                if (array[left] <= array[middle])
                {
                    tmp[tmpPosition++] = array[left++];
                }
                else
                {
                    tmp[tmpPosition++] = array[middle++];
                }
            }
            while (left <= leftEnd)
            {
                tmp[tmpPosition++] = array[left++];
            }
            while (middle <= right)
            {
                tmp[tmpPosition++] = array[middle++];
            }
            for (i = 0; i < arrayElements; i++)
            {
                array[right] = tmp[right];
                right--;
            }
        }
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("list[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }
            Sort(array, 0, array.Length - 1);
            Console.WriteLine("({0})", string.Join(", ", array));
        }
    }
}
