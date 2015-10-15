using System;
namespace Problem2.Interpolation_Search
{
    class InterpolationSearch
    {
        private static int number = 0;
        private static int n = 0;
        private static int[] array;
        private static int Search(int[] array, int number)
        {
            int left = 0;
            int right = array.Length - 1;
            int mid = 0;

            while (array[left] <= number && array[right] >= number)
            {
                mid = (int)(left + ((number - array[left]) * (right - left)) / (array[right] - array[left]));
                if (array[mid] < number)
                {
                    left = mid + 1;
                }
                else if (array[mid] > number)
                {
                    right = mid - 1;
                }
                else
                {
                    Console.WriteLine("Number is found: {0}" , number);
                    return number;
                }
            }
            if (array[left] == number)
            {
                Console.WriteLine("Number is found {0}" , number);
                return left;
            }
            else
            {
                Console.WriteLine("Number is not found");
                return -1;
            }
        }
        static void Main()
        {
            Console.Write("N: ");
            n = int.Parse(Console.ReadLine());
            array = new int[n];
            Console.Write("Searched number: ");
            number = int.Parse(Console.ReadLine());
            for (int i = 0; i < array.Length; i++)
            {
                Console.Write("array[{0}] = ", i);
                array[i] = int.Parse(Console.ReadLine());
            }

            Search(array, number);
        }
    }
}
