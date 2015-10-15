using System;
class Decoding
{
    static double[] Decode(int salt, string text)
    {
        double[] decodeText = new double[text.Length - 1];
        for (int i = 0; i < text.Length - 1; i++)
        {
            if (text[i] == '@')
            {
                break;
            }
            else if(Char.IsLetter(text[i]))
            {
                decodeText[i] = salt * (int)text[i] + 1000;
            }
            else if (Char.IsDigit(text[i]))
            {
                decodeText[i] = salt + (int)text[i] + 500;
            }
            else
            {
                decodeText[i] = (int)text[i] - salt;
            }

            if (i % 2 == 0)
            {
                decodeText[i] /= 100;
                decodeText[i] = Math.Round(decodeText[i], 2);
            }
            else
            {
                decodeText[i] *= 100;
            }
        }
        return decodeText;
    }
    static void Main()
    {
        int salt = 0;
        string text = null;
        do
        {
            salt = int.Parse(Console.ReadLine());
        } while (salt < 1 && salt > 10);
        text = Console.ReadLine();
        for (int i = 0; i < text.Length - 1; i++)
        {
            Console.WriteLine(Decode(salt, text)[i]);
        }
    }
}
