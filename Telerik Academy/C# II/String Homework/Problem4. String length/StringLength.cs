using System;

namespace Problem4.String_length
{
    class StringLength
    {
        static void Main()
        {
            Console.Write("Enter a 20's characters string : ");
            string text = Console.ReadLine();
            Console.WriteLine("text: " + text);
            if (text.Length > 20)
            {
                string result = text.Substring(0, 20);
                char[] tmp = text.ToCharArray();
                for (int i = 20; i < text.Length; i++)
                {
                    tmp[i] = '*';
                    result += tmp[i];
                }
                Console.WriteLine("result: {0}", result);
            }
        }
    }
}
