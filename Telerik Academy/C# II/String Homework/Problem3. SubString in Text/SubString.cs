using System;
namespace Problem3.SubString_in_Text
{
    class SubString
    {
        private static string text = "";
        private static string target = "";

        static void Main()
        {
            Console.Write("Write a text: ");
            text = Console.ReadLine();
            Console.Write("What you searching for: ");
            target = Console.ReadLine();

            Console.WriteLine("Result is: " + Search(text, target));
        }

        private static int Search(string text, string target)
        {
            int counter = 0;
            int j = 0;
            bool isTarget = false;
            text = text.ToLower();
            target = target.ToLower();
            for (int i = 0; i < text.Length; i++)
            {
                if (text[i] == target[j])
                {
                    for (int k = i + 1; k < target.Length + i; k++)
                    {
                        if (text[k] == target[++j])
                        {
                            isTarget = true;
                        }
                        else
                        {
                            isTarget = false;
                        }
                    }
                    j = 0;
                    if (isTarget)
                    {
                        counter++;
                    }
                }
            }
            return counter;
        }
    }
}
