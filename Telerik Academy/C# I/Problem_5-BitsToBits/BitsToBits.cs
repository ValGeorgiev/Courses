using System;

class BitsToBits
{
    static int TheLongestZero(string bits)
    {
        int maxSequence = 0;
        int sequence = 0;
        for (int i = 0; i < bits.Length; i++)
        {
            if (bits[i] == '0')
            {
                sequence++;
            }
            else
            {
                sequence = 0;
            }
            if (sequence > maxSequence)
            {
                maxSequence = sequence;
            }
        }
        return maxSequence;
    }
    static int TheLongestOne(string bits)
    {
        int maxSequence = 0;
        int sequence = 0;
        for (int i = 0; i < bits.Length; i++)
        {
            if (bits[i] == '1')
            {
                sequence++;
            }
            else
            {
                sequence = 0;
            }
            if (sequence > maxSequence)
            {
                maxSequence = sequence;
            }
        }
        return maxSequence;
    }
    static string Bit(int[] numbers)
    {
        string result = "";
        for (int i = 0; i < numbers.Length; i++)
        {
            result += Convert.ToString(numbers[i], 2);
        }
        return result;
    }
    static void Main()
    {
        int number;
        Console.Write("Number: ");
        number = int.Parse(Console.ReadLine());
        int[] numbers = new int[number];
        for (int i = 0; i < numbers.Length; i++)
        {
            numbers[i] = int.Parse(Console.ReadLine());
        }
        string concBits = Bit(numbers);
        Console.WriteLine(concBits);
        Console.WriteLine("The longest sequence of ones: {0}", TheLongestOne(concBits));
        Console.WriteLine("The longest sequence of zeros: {0}", TheLongestZero(concBits));
    }
}
