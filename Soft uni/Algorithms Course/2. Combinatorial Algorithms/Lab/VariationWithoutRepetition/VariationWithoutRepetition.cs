using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VariationWithoutRepetition
{
    class VariationWithoutRepetition
    {
        private static int n = 0;
        private static int k = 0;
        private static int[] array;
        private static bool[] used;
        public static void GenerateVariations(int[] array, int sizeOfSet, bool[] used, int index = 0)
        {
            if (index >= array.Length)
            {
                Print(array);
            }
            else
            {
                for (int i = 1; i <= sizeOfSet; i++)
                {

                    if (!used[i])
                    {
                        used[i] = true;
                        array[index] = i;
                        GenerateVariations(array, sizeOfSet, used, index + 1);
                        used[i] = false;
                    }
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
            used = new bool[n + 1];

            GenerateVariations(array, n, used); 
        }
    }
}
