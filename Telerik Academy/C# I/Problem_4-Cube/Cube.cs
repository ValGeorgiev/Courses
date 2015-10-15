using System;

class Cube
{
    static void Paint(int number)
    {
        int spaces = number - 1; 
        int colon = number;
        int slash = number - 2;
        int letterX = 0;
        Console.Write(new string(' ', spaces));
        Console.Write(new string(':', colon));
        Console.WriteLine();
        for (int row = 1; row < number - 1; row++)
        {
            Console.Write(new string(' ', --spaces));
            Console.Write(new string(':', 1));
            Console.Write(new string('/', slash));
            Console.Write(new string(':', 1));
            Console.Write(new string('X', letterX));
            Console.Write(new string(':', 1));
            letterX++;
            Console.WriteLine();
        }
        Console.Write(new string(':', colon));
        Console.Write(new string('X', letterX));
        Console.Write(new string(':', 1));
        Console.WriteLine();
        for (int row = 0; row < number - 2; row++)
        {
            Console.Write(new string(':', 1));
            Console.Write(new string(' ', number - 2));
            Console.Write(new string(':', 1));
            Console.Write(new string('X', --letterX));
            Console.Write(new string(':', 1));
            Console.WriteLine();
        }
        Console.Write(new string(':', number));
        Console.WriteLine();
    }
    static void Main()
    {
        int number;
        Console.Write("Enter a number between 4 and 100 (inclusive): ");
        do
        {
            number = int.Parse(Console.ReadLine());
        } while (number < 4 && number > 100);
        Paint(number);
    }
}
