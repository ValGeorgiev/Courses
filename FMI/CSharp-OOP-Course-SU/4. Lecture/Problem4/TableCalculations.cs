using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem4
{
    public class TableCalculations
    {
        private static int number = 0;
        private static int[,] table;
        private static int[] list;
        public static void Main()
        {
            Console.Write("Number : ");
            number = int.Parse(Console.ReadLine());
            table = new int[,]{
                {3, 4, 5, 6, 3},
                {2, 1, 2, 1, 1},
                {3, 2, 1, 4, 9},
                {1, 0, 0, 1, 1},
                {9, 2, 6, 4, 9}};

            list = new int[]{2, 1, 2, 3, 4};


            Subtract(table, list);
            Console.WriteLine();
            Multiply(table, list);
        }
        public static void Print(int[,] table)
        {
            for (int i = 0; i < table.GetLength(0); i++)
            {
                for (int j = 0; j < table.GetLength(1); j++)
                {
                    Console.Write(" {0}" , table[i,j]);
                }
                Console.WriteLine();
            }
        }

        public static void Subtract(int[,] table, int[] list)
        {
            int k = 0;
            for (int i = 0; i < table.GetLength(0); i++)
            {
                for (int j = 0; j < table.GetLength(1); j++)
                {
                    table[i, j] -= list[k++];
                }
                k = 0;
            }
            Print(table);            
        }

        public static void Multiply(int[,] table, int[] list)
        {
            int[] array = new int[list.Length];
            int k = 0;
            for (int i = 0; i < table.GetLength(0); i++)
            {
                for (int j = 0; j < table.GetLength(1); j++)
                {
                    array[k] += (table[i, j] * list[k]);
                }
                k++;
            }
            Console.WriteLine("{0}", string.Join(", ", array));
        }
    }
}
