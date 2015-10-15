using System;

class PermutationsWithReps
{
    private static void Permute(int[] array, int start, int end)
    {
        Print(array);

        for (int left = end - 1; left >= start; left--)
        {
            for (int right = left + 1; right <= end; right++)
            {
                if (array[left] != array[right])
                {
                    Swap(ref array[left], ref array[right]);
                    Permute(array, left + 1, end);
                }
            }

            var firstElement = array[left];
            for (int i = left; i <= end - 1; i++)
            {
                array[i] = array[i + 1];
            }
            array[end] = firstElement;
        }
    }

    private static void Print(int[] array)
    {
        Console.WriteLine("({0})", string.Join(", ", array));
    }

    private static void Swap(ref int first, ref int second)
    {
        int oldFirst = first;
        first = second;
        second = oldFirst;
    }
    static void Main()
    {
        var array = new int[] { 1, 3, 5, 5 };
        Permute(array, 0, array.Length - 1);
    }

    
}
