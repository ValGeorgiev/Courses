using System;
using System.Collections.Generic;

namespace Problem2.Longest_Zigzag_Subsequence
{
    class LongestZigzag
    {
        private static int n = 0;
        private static int[] array;

        private static void Longest(int[] array)
        {
            bool isRaise = false;
            int tmp = array[0];

            if (array[0] > array[1])
            {
                isRaise = true;
            }
            else
            {
                isRaise = false;
            }
            Console.Write(" " + array[0]);
            for (int i = 1; i < array.Length; i++)
            {
                
                if (isRaise)
                {
                    if (tmp > array[i])
                    {
                        Console.Write(" " + array[i]);
                        isRaise = false;
                        tmp = array[i];
                    }
                }
                else
                {
                    if (tmp < array[i])
                    {
                        Console.Write(" " + array[i]);                        
                        isRaise = true;
                        tmp = array[i];
                    }
                }
            }
            Console.WriteLine();
        }

        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];

            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = " , i);
                array[i] = int.Parse(Console.ReadLine());
            }

            Longest(array);
        }
    }
}
