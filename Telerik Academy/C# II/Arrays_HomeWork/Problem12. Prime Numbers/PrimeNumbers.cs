using System;
using System.Collections.Generic;

namespace Problem12.Prime_Numbers
{
    class PrimeNumbers
    {
        private const int Numbers = 1000;
        private static bool[] isPrimeArray = new bool[Numbers];

        private static void Prime(bool[] isPrimeArray)
        {
            List<int> list = new List<int>();
            for (int i = 2; i < isPrimeArray.Length; i++)
            {
                if (isPrimeArray[i])
                {
                    list.Add(i);
                    int j = 0;
                    for (int k = 0;; k++)
                    {
                        j = (i * i + i * k);
                        if (j < isPrimeArray.Length)
                        {
                            isPrimeArray[j] = false;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            Console.WriteLine("{0}", string.Join(", ", list));
        }
        static void Main()
        {
            for (int i = 0; i < isPrimeArray.Length; i++)
            {
                isPrimeArray[i] = true;
            }

            Prime(isPrimeArray);
        }
    }
}
