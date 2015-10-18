using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Subset
{
    public class Problem3_Subset
    {
        private static int[] array = { 1, 1, 1, 4, 4, 5, 5, 6, 6, 7, 7 };

        private static void SubSet(int[] array)
        {
            int start = 0;
            int length = 1;
            int number = 0;
            bool isSubSet = false;
            Console.WriteLine("Start  Length  Number");
            for (int i = 0; i < array.Length;)
            {
                for (int j = i + 1; j < array.Length; j++)
                {
                    if (length == 1)
                    {
                        start = j - 1;
                    }
                    if (array[j - 1] == array[j])
                    {
                        if (isSubSet == true && number != array[j])
                        {
                            break;
                        }
                        length++;
                        number = array[j];
                        isSubSet = true;
                    }
                    
                }
                if (isSubSet)
                {
                    Console.WriteLine("{0}        {1}        {2}", start, length, number);
                }   
                isSubSet = false;
                i = start + length;
                length = 1;
            }
        }
        public static void Main()
        {
            SubSet(array);
        }
    }
}
