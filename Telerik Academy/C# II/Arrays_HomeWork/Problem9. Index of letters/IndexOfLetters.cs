using System;
using System.Collections.Generic;

namespace Problem9.Index_of_letters
{
    class IndexOfLetters
    {
        private static char[] letters = new char[26];
        private static string word;

        private static void LettersIndex(char[] letters, string word)
        {
            LettersArray(letters);
            for (int i = 0; i < word.Length; i++)
            {
                for (int j = 0; j < letters.Length; j++)
                {
                    if (word[i] == letters[j])
                    {
                        Console.Write("{0} ", j);
                        break;
                    }
                }
            }
            Console.WriteLine();
        }
        private static void LettersArray(char[] letters)
        {
            for (int i = 0; i < letters.Length; i++)
            {
                letters[i] = Convert.ToChar(97 + i);
            }
        }
        static void Main()
        {
            Console.Write("word: ");
            word = Console.ReadLine();
            LettersIndex(letters, word);
        }
    }
}
