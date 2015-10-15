using System;

namespace Problem2.Correct_Brackets
{
    class CorrectBrackets
    {
        private static string text;
        static void Main()
        {
            Console.Write("Text: ");
            text = Console.ReadLine();

            Brackets(text);
        }

        private static void Brackets(string text)
        {
            int isOpen = 0;
            int isClose = 0;

            for (int i = 0; i < text.Length; i++)
            {
               
                if (text[i] == '(')
                {
                    isOpen++;
                }
                if (text[i] == ')' && !(isOpen < isClose))
                {
                    isClose++;
                }
                if (isOpen < isClose)
                {
                    Console.WriteLine("The brackets is NOT correct");
                    return;
                }
            }
            if (isOpen == isClose)
            {
                Console.WriteLine("The brackets is correct");
                return;
            }
        }
    }
}
