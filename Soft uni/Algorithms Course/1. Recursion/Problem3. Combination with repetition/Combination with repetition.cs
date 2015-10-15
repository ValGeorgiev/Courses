using System;
using System.Linq;

class CombinationsWithRepetitions
{
    static int numberOfLoops = 0;
    static int numberOfIterations = 0;
    static int[] array;
    static void Main()
    {
        Console.Write("N = ");
        numberOfLoops = int.Parse(Console.ReadLine());
        Console.Write("K = ");
        numberOfIterations = int.Parse(Console.ReadLine());
        array = new int[numberOfIterations];
        var elements = Enumerable.Range(1, numberOfLoops).ToArray();

        CombWithRep(0, array, elements, 0);
    }

    static void CombWithRep(int index, int[] array, int[] elements, int elementsIndex)
    {
        if (index == numberOfIterations)
        {
            Print(array, elements);
            return;
        }

        for (int i = elementsIndex; i < numberOfLoops; i++)
        {
            array[index] = i;
            CombWithRep(index + 1, array, elements, i);
        }
    }

    static void Print(int[] array, int[] elements)
    {
        for (int i = 0; i < array.Length; i++)
        {
            Console.Write("{0} ", elements[array[i]]);
        }

        Console.WriteLine();
    }
}
