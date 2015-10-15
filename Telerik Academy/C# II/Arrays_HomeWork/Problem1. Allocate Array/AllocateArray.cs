using System;

namespace Problem1.Allocate_Array
{
    class AllocateArray
    {
        private const int constLength = 20;
        private static int[] array;
        private static void Allocate(int[] array)
        {
            for (int i = 0; i < array.Length; i++)
			{
			    array[i] = i * 5;
			}
            Print(array);
        }

        private static void Print(int[] array)
        {
		    Console.WriteLine("({0})" , string.Join(", ", array));		
        }
        static void Main()
        {
            array = new int[constLength];
            Allocate(array);
        }
    }
}
