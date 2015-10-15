using System;

namespace SubsetOfStringArray
{
    class SubsetsOfStringArray
    {
        private static int n = 0;
        private static int k = 0;
        private static string[] array;
        private static bool[] used;
        private static string[] stringArray;
        public static void GenerateCombinations(string[] array, string[] stringArray, int sizeOfSet,  bool[] used, int index = 0, int start = 1)
        {
            if (index >= array.Length)
            {
                Print(array);
            }
            else
            {
                for (int i = start; i <= sizeOfSet; i++)
                {

                    if (!used[i])
                    {
                        used[i] = true;
                        array[index] = stringArray[i - 1];
                        GenerateCombinations(array, stringArray, sizeOfSet, used, index + 1, i);
                        used[i] = false;
                    }
                }
            }
        }
        private static void Print(string[] array)
        {
            Console.WriteLine("({0})", string.Join(", ", array));
        }
        static void Main()
        {
            Console.Write("K = ");
            k = int.Parse(Console.ReadLine());
            array = new string[k];
            stringArray = new string[]
            {
                "test", "rock", "fun"
            };
            used = new bool[stringArray.Length + 1];

            GenerateCombinations(array, stringArray, stringArray.Length, used);
        }
    }
}
