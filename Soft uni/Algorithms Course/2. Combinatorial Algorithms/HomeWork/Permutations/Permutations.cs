using System;
using System.Linq;

class Permutations
{
    static void Main()
    {
        Console.Write("N = ");
        int n = int.Parse(Console.ReadLine());
        int[] array = Enumerable.Range(1, n).ToArray();
        Permute(array, 0);
    }

    private static void Permute<T>(T[] array, int n)
    {
        if (n >= array.Length)
        {
            Print(array);
        }
        else
        {
            Permute(array, n + 1);
            for (int i = n + 1; i < array.Length; i++)
            {
                Swap(ref array[n], ref array[i]);
                Permute(array, n + 1);
                Swap(ref array[n], ref array[i]);
            }
        }
    }

    private static void Print<T>(T[] array)
    {
        Console.WriteLine("({0})", string.Join(", ", array));
    }

    private static void Swap<T>(ref T first, ref T second)
    {
        T oldFirst = first;
        first = second;
        second = oldFirst;
    }
}

