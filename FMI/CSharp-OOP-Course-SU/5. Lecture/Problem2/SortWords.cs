using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    class SortWords
    {
        private static string sentence;

        private static void SortWordsFromSentence(string sentence)
        {
            var words = sentence.Split(' ');

            var allNonDuplicateWords = words
                .GroupBy(x => x)
                .Where(g => !(g.Count() > 1))
                .Select(y => y.Key)
                .ToList();

            foreach (var value in allNonDuplicateWords)
            {
                Console.WriteLine(value);
            }
        }
        static void Main()
        {
            Console.Write("Enter a sentece: ");
            sentence = Console.ReadLine();

            SortWordsFromSentence(sentence);

        }
    }
}
