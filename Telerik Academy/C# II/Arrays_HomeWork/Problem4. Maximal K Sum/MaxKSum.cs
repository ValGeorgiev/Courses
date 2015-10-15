using System;
namespace Problem4.Maximal_K_Sum
{
    class MaxKSum
    {
        private static int n = 0;
        private static int k = 0;
        private static int[] array;

        private static void MaxSum(int[] array, int k)
        {
            int maxSum = 0;
            int sum = 0;
            for (int i = 0; i < array.Length - k; i++)
            {
                for (int j = i; j < k + i; j++)
                {
                    sum += array[j];
                }
                if (sum > maxSum)
                {
                    maxSum = sum;
                }
                sum = 0;
            }
            Console.WriteLine("Max sum = {0}" , maxSum);
        }
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            Console.Write("K: ");
            k = int.Parse(Console.ReadLine());
            array = new int[n];
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = " , i);
                array[i] = int.Parse(Console.ReadLine());
            }
            MaxSum(array, k);
        }
    }
}
