using System;

namespace Problem1.English_digit
{
    class EnglishDigit
    {
        private static int number = 0;
        static void Main()
        {
            Console.Write("Number : ");
            number = int.Parse(Console.ReadLine());
            TakeLastDigit(number);
        }

        private static void TakeLastDigit(int number)
        {
            int lastDigit = number % 10;
            switch (lastDigit)
            {
                case 1: Console.WriteLine("One"); break;
                case 2: Console.WriteLine("Two"); break;
                case 3: Console.WriteLine("Three"); break;
                case 4: Console.WriteLine("Four"); break;
                case 5: Console.WriteLine("Five"); break;
                case 6: Console.WriteLine("Six"); break;
                case 7: Console.WriteLine("Seven"); break;
                case 8: Console.WriteLine("Eight"); break;
                case 9: Console.WriteLine("Nine"); break;
                case 0: Console.WriteLine("Zero"); break;
            }
        }
    }
}
