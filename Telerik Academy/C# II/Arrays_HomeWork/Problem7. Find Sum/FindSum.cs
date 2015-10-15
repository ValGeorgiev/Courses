using System;
namespace Problem7.Find_Sum
{
    class FindSum
    {
        private static int n = 0;
        private static int[] array;
        private static int sum = 0;

        private static void FindSumArray(int[] array, int sum)
        {
            int currentSum = 0;
            int startIndex = 0;
            int endIndex = 0;
            for (int i = 0; i < array.Length; i++)
            {
                for (int j = i; j < array.Length; j++)
                {
                    currentSum += array[j];
                    if (currentSum > sum)
                    {
                        break;
                    }
                    if(currentSum == sum)
                    {
                        startIndex = i;
                        endIndex = j;
                    }
                }
                currentSum = 0;
            }
            int[] findArray = new int[endIndex - startIndex + 1];
            int k = 0;
            for (int i = startIndex; i <= endIndex; i++)
            {
                findArray[k] = array[i];
                k++;
            }
            Console.WriteLine("({0})", string.Join(", ", findArray));
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
            Console.Write("Sum: ");
            sum = int.Parse(Console.ReadLine());
            FindSumArray(array, sum);
        }
    }
}
