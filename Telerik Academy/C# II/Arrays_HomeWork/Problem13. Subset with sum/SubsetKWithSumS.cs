using System;
namespace Problem13.Subset_with_sum
{
    class SubsetKWithSumS
    {
        private static int n = 0;
        private static int k = 0;
        private static int s = 0;
        private static int[] array;

        private static void SubsetSum(int[] array, int k, int s)
        {
            int sum = 0;
            for (int i = 0; i < array.Length - k + 1; i++)
            {
                for (int j = i; j < k + i; j++)
                {
                    sum += array[j];
                }
                if (sum == s)
                {
                    Console.WriteLine("Sum is found {0} ", s);
                    return;
                }
                sum = 0;
            }
            Console.WriteLine("Sum is not found");
        }
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            Console.Write("K: ");
            k = int.Parse(Console.ReadLine());
            Console.Write("S: ");
            s = int.Parse(Console.ReadLine());
            array = new int[n];
            
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }

            SubsetSum(array, k, s);
            
        }
    }
}
