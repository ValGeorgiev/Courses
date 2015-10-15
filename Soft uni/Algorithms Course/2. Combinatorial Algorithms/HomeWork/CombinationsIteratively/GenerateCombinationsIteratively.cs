using System;
using System.Collections.Generic;

namespace CombinationsIteratively
{
    class GenerateCombinationsIteratively
    {
        public static IEnumerable<int[]> Combinations(int k, int n)
        {
            int index = 0;
            int value = 0;
            int[] result = new int[k];
            Stack<int> stack = new Stack<int>();
            stack.Push(1);

            while (stack.Count > 0)
            {
                index = stack.Count - 1;
                value = stack.Pop();

                while (value <= n)
                {
                    result[index++] = value++;
                    stack.Push(value);
                    if (index == k)
                    {
                        yield return result;
                        break;
                    }
                }
            }
        }

        static void Main()
        {
            Console.Write("N = ");
            int n = int.Parse(Console.ReadLine());
            Console.Write("K = ");
            int k = int.Parse(Console.ReadLine());
            foreach (int[] array in Combinations(k, n))
            {
                for (int i = 0; i < array.Length; i++)
                {
                    if (i == 0)
                    {
                        Console.Write("( ");
                    }
                    Console.Write(array[i] + " ");
                    if (i == array.Length - 1)
                    {
                        Console.Write(")");
                    }
                    
                }
                Console.WriteLine();
            }
        }
    }
}
