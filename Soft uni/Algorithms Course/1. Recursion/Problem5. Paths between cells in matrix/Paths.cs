using System;
using System.Collections.Generic;
class Paths
{
    static char[,] lab = 
    {
        {' ', ' ', ' ', ' '},
        {' ', '*', '*', ' '},
        {' ', '*', '*', ' '},
        {' ', '*', 'e', ' '},
        {' ', ' ', ' ', ' '}
    };
    static int numRows = lab.GetLength(0);
    static int numCols = lab.GetLength(1);
    static List<char> path = new List<char>();
    static int counter = 0;
    static void Main()
    {
        FindExit(0, 0, 'S');
        Console.WriteLine("Total paths found: {0}", counter);
    }

    static void FindExit(int row, int col, char dir)
    {
        if (row < 0 || col < 0 || row >= numRows || col >= numCols)
        {
            return;
        }

        if (lab[row, col] == 'e')
        {
            Console.WriteLine("Exit: ");
            Console.WriteLine(string.Join("", path) + dir);
            Console.WriteLine();
            counter++;
            return;
        }
        if (lab[row, col] != ' ')
        {
            return;
        }

        lab[row, col] = 'x';
        path.Add(dir);

        FindExit(row, col + 1, 'R'); // right
        FindExit(row + 1, col, 'D'); // down
        FindExit(row, col - 1, 'L'); // left
        FindExit(row - 1, col, 'U'); // up

        lab[row, col] = ' ';
        path.RemoveAt(path.Count - 1);
    }   
}

