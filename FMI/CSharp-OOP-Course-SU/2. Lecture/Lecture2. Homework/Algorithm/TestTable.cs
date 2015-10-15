using System;
namespace Algorithm
{
    public class TestTable
    {
        public static void Main()
        {
            int start = 0;          //declare all variables
            int end = 0;
            int steps = 0;
            int tmp = 0;

            Console.Write("Start = ");
            start = int.Parse(Console.ReadLine());          // enter all variables
            Console.Write("End = ");
            end = int.Parse(Console.ReadLine());
            Console.Write("Steps = ");
            steps = int.Parse(Console.ReadLine());

            if (start > end)            // if start is bigger than end swap them
            {
                tmp = end;
                end = start;
                start = tmp;
            }

            Table myTable = new Table(start, end, steps);
            myTable.MakeTable();        // make the table
        }

    }
}
