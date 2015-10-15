using System;

namespace Problem10.Merge_Sort
{
    class MergeSort
    {
        private static int[] numbers;
        private static int n = 0;
        private static void Merge(int[] numbers, int left, int mid, int right)
        {
            int[] temp = new int[numbers.Length];
            int i, leftEnd, numElements, tmpPosition;

            leftEnd = mid - 1;
            tmpPosition = left;
            numElements = right - left + 1;

            while ((left <= leftEnd) && (mid <= right))
            {
                if (numbers[left] <= numbers[mid])
                {
                    temp[tmpPosition++] = numbers[left++];
                }
                else
                {
                    temp[tmpPosition++] = numbers[mid++];
                }
            }

            while (left <= leftEnd)
            {
                temp[tmpPosition++] = numbers[left++];
            }

            while (mid <= right)
            {
                temp[tmpPosition++] = numbers[mid++];
            }

            for (i = 0; i < numElements; i++)
            {
                numbers[right] = temp[right];
                right--;
            }
        }

        static public void MergeSortRecursive(int[] numbers, int left, int right)
        {
            int mid;

            if (right > left)
            {
                mid = (right + left) / 2;
                MergeSortRecursive(numbers, left, mid);
                MergeSortRecursive(numbers, (mid + 1), right);

                Merge(numbers, left, (mid + 1), right);
            }
        }


        static void Main(string[] args)
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            numbers = new int[n];

            for (int i = 0; i < numbers.Length; i++)
            {
                Console.Write("numbers[{0}] = ", i);
                numbers[i] = int.Parse(Console.ReadLine());
            }

            MergeSortRecursive(numbers, 0, numbers.Length - 1);
            Console.WriteLine("{0}" , string.Join(", ", numbers));
        }
    }
}
