using System;

namespace Problem2.Random_numbers
{
    class RandomNumbers
    {
        private static Random random = new Random();
        static void Main()
        {
            int number = random.Next(100, 200);
            Console.WriteLine("Random number is {0}" , number);
        }
    }
}
