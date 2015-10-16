using System;

namespace Problem3.Dividing_Presents
{
    class Divide
    {
        private static int n = 0;
        private static int[] array;

        private static int Sum(int[] array)
        {
            int sum = 0;
            for (int i = 0; i < array.Length; i++)
            {
                sum += array[i];
            }

            return sum;
        }

        private static int[] SortDescending(int[] array)
        {
            int temp = 0;
            int loopCount = 0;
            bool isSort = true;

            for (int i = 0; i < array.Length; i++)
            {
                isSort = true;
                for (int j = 0; j < array.Length - 1; j++)
                {
                    if (array[j] < array[j + 1])
                    {
                        temp = array[j + 1];
                        array[j + 1] = array[j];
                        array[j] = temp;
                        isSort = false;
                    }
                    loopCount++;
                }
                if (isSort)
                { 
                    break; 
                }
            }
            return array;
        }

        public static void DividePresents(int[] array)
        {
            int sum = Sum(array);
            int mid = sum / 2;
            int max = array[0];
            int sumAlan = 0;
            int i = 0;
            array = SortDescending(array);
            Console.Write("Alan takes: ");
            while (sumAlan < mid)
            {
                sumAlan += array[i];
                Console.Write(array[i] + " ");
                i += 2;
            }
            Console.WriteLine();
            Console.WriteLine("Bob takes the rest");
            Console.WriteLine("Alan {0}", sumAlan);
            Console.WriteLine("Bob {0}", sum - sumAlan);
            Console.WriteLine("Difference: {0}", Math.Abs(sumAlan - (sum - sumAlan)));
        }


        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];

            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }

            DividePresents(array);
        }
    }
}
