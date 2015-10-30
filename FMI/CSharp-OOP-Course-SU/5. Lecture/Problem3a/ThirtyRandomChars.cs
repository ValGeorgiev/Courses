using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem3a
{
    public class ThirtyRandomChars
    {
        private static Random rand = new Random();
        public const int THIRTY = 30;
        private static List<char> chars;


        private static void SortAscending(List<char> chars)
        {
            var sorted =
                from value in chars
                orderby value
                select value;

            foreach (var value in sorted)
            {
                Console.WriteLine(value);
            }
        }

        private static void SortDescending(List<char> chars)
        {
            var sorted =
                from value in chars
                orderby value descending
                select value;

            foreach (var value in sorted)
            {
                Console.WriteLine(value);
            }
        }
        private static void SortAscendingWithoutDuplicates(List<char> chars)
        {
            var withoutDuplicates = chars
                 .OrderBy(x => x)
                 .GroupBy(x => x)
                 .Where(g => !(g.Count() > 1))
                 .Select(y => y.Key)                 
                 .ToList();

            foreach (var value in withoutDuplicates)
            {
                Console.WriteLine(value);
            }
        }
        public static void Main()
        {
            chars = new List<char>();

            for (int i = 0; i < THIRTY; i++)
            {
                chars.Add((char)rand.Next(97, 123));
            }

            //SortAscending(chars);
            //SortDescending(chars);
            //SortAscendingWithoutDuplicates(chars);
        }
    }
}
