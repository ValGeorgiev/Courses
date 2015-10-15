using System;

namespace Problem6.Frequent_number
{
    class FrequentNumber
    {
        private static int n = 0;
        private static int[] array;

        private static void FrequentNum(int[] array)
        {
            int number = 0;
            int maxNumber = 0;
            int counter = 1;
            int maxCounter = 0;
            for (int i = 0; i < array.Length; i++)
            {
                number = array[i];
                for (int j = i + 1; j < array.Length; j++)
                {
                    if(number == array[j]){
                        counter++;
                    }
                }
                if (counter > maxCounter)
                {
                    maxCounter = counter;
                    maxNumber = number;
                }
                counter = 1;
            }
            Console.WriteLine("Number: {0} ({1} times)", maxNumber, maxCounter);
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
            FrequentNum(array);
        }
    }
}
