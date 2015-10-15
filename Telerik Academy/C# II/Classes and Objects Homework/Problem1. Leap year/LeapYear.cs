using System;

namespace Problem1.Leap_year
{
    class LeapYear
    {
        private static int year = 0;

        private static void IsLeapYear(int year)
        {
            if (DateTime.IsLeapYear(year))
            {
                Console.WriteLine("Is leap year!!!");
            }
            else
            {
                Console.WriteLine("Is NOT leap year!!!");
            }
        }
        static void Main()
        {
            Console.Write("Year: ");
            year = int.Parse(Console.ReadLine());

            IsLeapYear(year);
        }
    }
}
