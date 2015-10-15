using System;
using System.Collections.Generic;
using System.Linq;

class TowerOfHanoi
{
    static int occurenciesCount = 0;

    static void MoveDisks(int bottom, Stack<int> source, Stack<int> destination, Stack<int> spare)
    {
        if (bottom == 1)
        {
            occurenciesCount++;
            destination.Push(source.Pop());
            Console.WriteLine(@"Step #{0}: Moved disk {1}", occurenciesCount, bottom);

            PrintRods(source, destination, spare);
        }
        else
        {
            MoveDisks(bottom - 1, source, spare, destination);

            occurenciesCount++;
            destination.Push(source.Pop());
            Console.WriteLine(@"Step #{0}: Moved disk {1}", occurenciesCount, bottom);

            PrintRods(source, destination, spare);
            MoveDisks(bottom - 1, spare, destination, source);
        }
    }

    static void PrintRods(Stack<int> source, Stack<int> destination, Stack<int> spare)
    {
        Console.WriteLine("Source: {0}", string.Join(", ", source.Reverse()));
        Console.WriteLine("Destination: {0}", string.Join(", ", destination.Reverse()));
        Console.WriteLine("Spare: {0}", string.Join(", ", spare.Reverse()));
        Console.WriteLine();
    }

    static void Main(string[] args)
    {
        Console.Write("Disks: ");
        int disks = int.Parse(Console.ReadLine());
        Stack<int> source = new Stack<int>(Enumerable.Range(1, disks).Reverse());
        Stack<int> destination = new Stack<int>();
        Stack<int> spare = new Stack<int>();

        PrintRods(source, destination, spare);
        MoveDisks(disks, source, destination, spare);

    }

   
}

