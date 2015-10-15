using System;

namespace Problem5.Fisher_Yates_Shuffle
{
    class FisherYatesShuffle
    {
        private static int n = 0;
        private static Random random = new Random();
        private static void Shuffle<T>(T[] array)
        {
            int len = array.Length;
            int shuffler = 0;
            for (int i = 0; i < len; i++)
            {
                shuffler = i + (int)(random.NextDouble() * (len - i));
                T tmp = array[shuffler];
                array[shuffler] = array[i];
                array[i] = tmp;
            }
        }
        
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            int[] array = new int[n];
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }
            Shuffle(array);

            Console.WriteLine("({0})", string.Join(", ", array));

        }
    }
}
