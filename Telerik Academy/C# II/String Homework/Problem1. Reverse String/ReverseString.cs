using System;
namespace Problem1.Reverse_String
{
    class ReverseString
    {
        private static string str;
        static void Main()
        {
            Console.Write("Enter a string: ");
            str = Console.ReadLine();

            Console.WriteLine(Reverse(str));
        }

        private static string Reverse(string str)
        {
            char[] charArray = str.ToCharArray();
            int len = str.Length;
            for (int i = 0; i < len / 2; i++)
            {
                charArray[i] ^= charArray[len - i - 1];
                charArray[len - i - 1] ^= charArray[i];
                charArray[i] ^= charArray[len - i - 1];
            }
            return new string(charArray);
        }
    }
}
