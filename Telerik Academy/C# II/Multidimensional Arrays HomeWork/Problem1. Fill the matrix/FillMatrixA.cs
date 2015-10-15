using System;
namespace Problem1.Fill_the_matrix
{
    class FillMatrixA
    {
        private static int n = 0;
        private static int[,] array;

        private static void FillMatrix(int[,] array)
        {
            int k = 1;
            for (int i = 0; i < array.GetLength(0); i++)
            {
                for (int j = 0; j < array.GetLength(1); j++)
                {
                    array[j,i] = k;
                    k++;
                }
            }
            
            Print(array);

        }

        private static void Print(int[,] array)
        {
            for (int i = 0; i < array.GetLength(0); i++)
            {
                for (int j = 0; j < array.GetLength(1); j++)
                {
                    Console.Write(array[i, j] + " ");
                }
                Console.WriteLine();
            }
        }

        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n, n];

            FillMatrix(array);

        }
    }
}
