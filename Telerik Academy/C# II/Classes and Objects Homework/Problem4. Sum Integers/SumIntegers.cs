using System;

namespace Problem4.Sum_Integers
{
    class SumIntegers
    {
        private static string integers;

        private static int Sum(string integers)
        {
            int result = 0;
            int startIndex = 0;
            string integer;

            for (int i = 0; i < integers.Length;  i++)
            {
                if (integers[i] == ' ')
                {
                    integer = integers.Substring(startIndex, i - startIndex);
                    result += int.Parse(integer);
                    startIndex = i + 1;
                }
                if (i == integers.Length - 1)
                {
                    integer = integers.Substring(startIndex, i - startIndex + 1);
                    result += int.Parse(integer);
                    break;
                }

            }

            Console.WriteLine(result);
            return result;
        }

        static void Main()
        {
            integers = Console.ReadLine();

            Sum(integers);
        }
    }
}
