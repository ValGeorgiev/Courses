using System;

namespace Problem1.Square_Root
{
    class SquareRoot
    {
        private static string number;
        static void Main()
        {
            Console.Write("Number: ");
            number = Console.ReadLine();

            Square(number);
        }

        private static void Square(string number)
        {
            int n;
            bool isNumeric = int.TryParse(number, out n);
            try
            {
                if (isNumeric)
                {
                    n = Convert.ToInt32(number);
                    if (n > 0)
                    {
                        Console.WriteLine("Square of {0} is {1} ", number, Math.Sqrt(Convert.ToInt32(number)));
                    }
                    else
                    {
                        throw new ArgumentOutOfRangeException();

                    }
                }
                else
                {
                    throw new FormatException();
                }
            }
            catch (ArgumentOutOfRangeException exp)
            {
                Console.WriteLine("Invalid number");   
            }
            catch (FormatException exp)
            {
                Console.WriteLine("Invalid number");
            }
            finally
            {
                Console.WriteLine("GoodBye!");
            }
        }
    }
}
