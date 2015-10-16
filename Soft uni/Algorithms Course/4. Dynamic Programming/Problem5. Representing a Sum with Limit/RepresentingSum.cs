using System;
using System.Collections.Generic;

namespace Problem4.Representing_Sum
{
    public class RepresentingSum
    {
        public static void Main(string[] args)
        {
            List<int> numbers = new List<int>() { 1, 2, 2, 5 };
            int target = 5;
            Sum(numbers, target);
        }

        private static void Sum(List<int> numbers, int target)
        {
            SumRecursive(numbers, target, new List<int>());
        }

        private static void SumRecursive(List<int> numbers, int target, List<int> partial)
        {
            int sum = 0;

            foreach (int x in partial)
            {
                sum += x;
            }

            if (sum == target)
            {
                Console.WriteLine("sum(" + string.Join(",", partial.ToArray()) + ") = " + target);
            }

            if (sum >= target)
            {
                return;
            }

            for (int i = 0; i < numbers.Count; i++)
            {
                List<int> remaining = new List<int>();
                int n = numbers[i];
                for (int j = i + 1; j < numbers.Count; j++)
                {
                    remaining.Add(numbers[j]);
                }
                List<int> partialRec = new List<int>(partial);
                partialRec.Add(n);
                SumRecursive(remaining, target, partialRec);
            }
        }

    }
}
