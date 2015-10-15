using System;

namespace Problem2.Maximal_sequence
{
    class MaximalSequence
    {
        private static int n = 0;
        private static int[] array;
        private static int[] maxSequenceArray;
        private static void MaxSequence(int[] array)
        {
            int sequence = 0;
            int maxSequence = 0;
            int startMax = 0;
            for (int i = 0; i < array.Length - 1; i++)
            {
                if (array[i] == array[i + 1])
                {
                    sequence++;
                }
                else
                {
                    if (maxSequence < sequence)
                    {
                        maxSequence = sequence;
                        startMax = i - sequence;
                    }
                    sequence = 0;

                }
            }
            maxSequenceArray = new int[maxSequence + 1];
            int j = 0;
            for (int i = startMax; i <= startMax + maxSequence; i++)
            {
                maxSequenceArray[j] = array[i];
                j++;
            }
            Console.WriteLine("({0})" , string.Join(", ", maxSequenceArray));
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
            MaxSequence(array);
        }
    }
}
