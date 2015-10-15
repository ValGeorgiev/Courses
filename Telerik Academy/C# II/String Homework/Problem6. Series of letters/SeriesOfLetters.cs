using System;
using System.Collections.Generic;

namespace Problem6.Series_of_letters
{
    class SeriesOfLetters
    {
        private static string str = "";

        private static List<char> SeriesLetters(string str)
        {
            List<char> list = new List<char>();
            char[] strArray = str.ToCharArray();

            for (int i = 0; i < str.Length; i++)
            {
                if(!list.Contains(strArray[i])){
                    list.Add(strArray[i]);
                }
            }
            return list;
        }
        static void Main()
        {
            Console.Write("Enter a string: ");
            str = Console.ReadLine();

            Console.WriteLine("({0})", string.Join("", SeriesLetters(str).ToArray()));


        }
    }
}
