using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class CryptingDecrypting
    {
        private static string text;
        private static int shiftLength;
        public static void Main()
        {
            Console.Write("Enter text: ");
            text = Console.ReadLine();
            Console.Write("Shift length: ");
            shiftLength = int.Parse(Console.ReadLine());
            text = CaesarCripher(text.ToUpper(), shiftLength);
            Console.WriteLine("Text : {0}" , text);
            text = CaesarDecripher(text.ToUpper(), shiftLength);
            Console.WriteLine("Text : {0}" , text);
        }

        private static string CaesarDecripher(string text, int shiftLength)
        {
            int index = 0;
            string result = "";
            for (int i = 0; i < text.Length; i++)
            {
                index = Convert.ToInt32(text[i]);
                if (index - shiftLength < 65)
                {
                    int tmp = 91 - index;
                    index = 64 + tmp;
                }
                else
                {
                    index -= shiftLength;
                }
                result += Convert.ToChar(index);
            }
            return result;
        }

        private static string CaesarCripher(string text, int shiftLength)
        {
            int index = 0;
            string result = "";
            for (int i = 0; i < text.Length; i++)
            {
                index = Convert.ToInt32(text[i]);
                if (index + shiftLength > 90)
                {
                    int tmp = index + shiftLength - 90;
                    index = tmp + 64;
                }
                else
                {
                    index += shiftLength;
                }
                result += Convert.ToChar(index);
            }
            return result;
        }
    }
}
