using System;
using System.Collections.Generic;
using System.Numerics;
class ConsoleApplication1
{
    static BigInteger Product(List<int> numbers)
    {

        BigInteger result = new BigInteger(1);
        int[] arrayOfOdd = new int[numbers.Count / 2];
        for (int i = 0; i < arrayOfOdd.Length; i++)
	    {
		    arrayOfOdd[i] = 1;	 
	    }
        for (int i = 1, j = 0; i < numbers.Count; i+=2)
        {
            while (numbers[i] != 0)
            {
                arrayOfOdd[j] *= (numbers[i] % 10);
                numbers[i] /= 10;
            }
        }
        for (int i = 0; i < arrayOfOdd.Length; i++)
        {
            result *= arrayOfOdd[i];
        }
        return result;
    }
    static void Main()
    {
        List<int> numbers = new List<int>();
        string end;
        do
        {
            end = Console.ReadLine();
            if (end == "END")
            {
                break;
            }
            else
            {
                int number = Convert.ToInt32(end);
                numbers.Add(number);
            }
        } while (true);
        Console.WriteLine(Product(numbers));
    }
}

