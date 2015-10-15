using System;

namespace Problem2.Appearance_count
{
    class AppearanceCount
    {
        private static int n = 0;
        private static int number = 0;
        private static int[] array;
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            Console.Write("Number: ");
            number = int.Parse(Console.ReadLine());
            array = new int[n];

            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine(findNumberCount(array, number));

        }

        private static int findNumberCount(int[] array, int number)
        {
            int counter = 0;
            for (int i = 0; i < array.Length; i++)
            {
                if (array[i] == number)
                {
                    counter++;
                }
            }
            return counter;
        }
    }
}
