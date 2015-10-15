using System;

namespace Problem2.Find_Median
{
    public class FindMedian
    {
        public static int FindMedianMethod(int firstNumber, int secondNumber, int thirdNumber) 
        {
            int median = 0;         // Declarate median that is sum / 3

            if (firstNumber >= secondNumber && firstNumber <= thirdNumber)
            {
                median = firstNumber;                       
                return median;
            }
            if (firstNumber <= secondNumber && firstNumber >= thirdNumber)
            {
                median = firstNumber;
                return median;
            }

            if (secondNumber >= firstNumber && secondNumber <= thirdNumber)
            {
                median = secondNumber;
                return median;
            }
            if (secondNumber <= firstNumber && secondNumber >= thirdNumber)
            {
                median = secondNumber;
                return median;
            }

            if (thirdNumber >= secondNumber && thirdNumber <= firstNumber)
            {
                median = thirdNumber;
                return median;
            }
            if (thirdNumber <= secondNumber && thirdNumber >= firstNumber)
            {
                median = thirdNumber;
                return median;
            }
            return median;
        }

        public static void Main()
        {
            int firstNumber, secondNumber, thirdNumber, median;     //declarate all variables 

            Console.Write("Enter first number: ");              // enter first number
            firstNumber = int.Parse(Console.ReadLine());

            Console.Write("Enter second number: ");         // enter second number
            secondNumber = int.Parse(Console.ReadLine());

            Console.Write("Enter third number: ");          //enter third number
            thirdNumber = int.Parse(Console.ReadLine());

            median = FindMedianMethod(firstNumber, secondNumber, thirdNumber);  // calculate median

            Console.WriteLine("Median is: {0}", median);        // output median
        }
    }
}
