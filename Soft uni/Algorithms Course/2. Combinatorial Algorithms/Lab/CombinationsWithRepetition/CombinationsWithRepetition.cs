using System;

namespace CombinationsWithRepetition
{
    class CombinationsWithRepetition
    {
        private static int n = 0;
        private static int k = 0;
        private static int[] array;
        private static void GenerateCombinations(int[] array, int sizeOfSet, int index = 0, int start = 1)
        {
            if (index >= array.Length)
            {
                Print(array);
            }
            else
            {
                for (int i = start; i <= sizeOfSet; i++)
                {
                    array[index] = i;
                    GenerateCombinations(array, sizeOfSet, index + 1, i);
                }
            }
        }
        private static void Print(int[] array)
        {
            Console.WriteLine("({0})", string.Join(", ", array));
        }
        static void Main()
        {
            Console.Write("N = ");
            n = int.Parse(Console.ReadLine());
            Console.Write("K = ");
            k = int.Parse(Console.ReadLine());
            array = new int[k];
            GenerateCombinations(array, n);
        }
    }
}
