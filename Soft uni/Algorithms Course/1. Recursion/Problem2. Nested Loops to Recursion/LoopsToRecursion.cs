using System;

class LoopsToRecursion
{
    static int numberOfLoops;
    static int[] array;

    static void Main()
    {
        Console.Write("Enter a number: ");
        numberOfLoops = int.Parse(Console.ReadLine());

        array = new int[numberOfLoops];
        
        NestedLoops(0);
    }

    static void NestedLoops(int currentLoop)
    {
        if (currentLoop == numberOfLoops)
        {
            PrintLoop();
            return;
        }
        for (int counter = 1; counter <= numberOfLoops; counter++)
        {
            array[currentLoop] = counter;
            NestedLoops(currentLoop + 1);
        }
    }

    static void PrintLoop()
    {
        for (int i = 0; i < numberOfLoops; i++)
        {
            Console.Write("{0} ", array[i]);
        }
        Console.WriteLine();
    }
}

