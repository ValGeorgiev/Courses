using System;

namespace Combinatorial_Algorithms_Lab
{
    class VariationWithRepetition
    {
        private static int n = 0;
        private static int k = 0;
        private static int[] array;
        private static void GenerateVariations(int[] array, int sizeOfSet, int index = 0)
        {
            if (index >= array.Length)
            {
                Print(array);
            }
            else
            {
                for (int i = 1; i <= sizeOfSet; i++)
                {
                    array[index] = i;
                    GenerateVariations(array, sizeOfSet, index + 1);
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
            GenerateVariations(array, n); 
        }
    }
}
