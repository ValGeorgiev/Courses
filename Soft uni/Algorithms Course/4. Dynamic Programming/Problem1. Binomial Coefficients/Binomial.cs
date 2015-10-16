using System;

namespace Problem1.Binomial_Coefficients
{
    class Binomial
    {
        static void Main()
        {
            Console.Write("N: ");
            ulong n = ulong.Parse(Console.ReadLine());
            Console.Write("K: ");
            ulong k = ulong.Parse(Console.ReadLine());
            ulong result = BiCoefficient(n, k);
            Console.WriteLine("The Binomial Coefficient of {0}, and {1}, is equal to: {2}", n, k, result);
        }

        static int Fact(int n)
        {
            if (n == 0)
            {
                return 1;
            }
            else
            {
                return n * Fact(n - 1);
            }
        }

        static ulong BiCoefficient(ulong n, ulong k)
        {
            if (k > n - k)
            {
                k = n - k;
            }

            ulong c = 1;
        
            for (uint i = 0; i < k; i++)
            {
                c = c * (n - i);
                c = c / (i + 1);
            }
            return c;
        }
    }
}
