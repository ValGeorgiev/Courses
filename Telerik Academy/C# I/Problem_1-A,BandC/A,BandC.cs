using System;

class ABandC
{
    static int TheBiggest(int a, int b, int c) {
        int biggest = a;
        if (biggest < b)
        {
            biggest = b;
        }
        if(biggest < c){
            biggest = c;
        }
        return biggest;
    }
    static int TheSmallest(int a, int b, int c)
    {
        int smallest = a;
        if (smallest > b)
        {
            smallest = b;
        }
        if (smallest > c)
        {
            smallest = c;
        }
        return smallest;
    }
    static double ArithmeticMean(int a, int b, int c)
    {
        double sum = a + b + c;
        return (sum / 3); 
    }
    static void Main()
    {
        Console.Write("Enter first number: ");
        int firstNumber = int.Parse(Console.ReadLine());
        Console.Write("Enter second number: ");
        int secondNumber = int.Parse(Console.ReadLine());
        Console.Write("Enter third number: ");
        int thirdNumber = int.Parse(Console.ReadLine());
        Console.WriteLine("The biggest number: {0}", TheBiggest(firstNumber, secondNumber, thirdNumber));
        Console.WriteLine("The smallest number: {0}", TheSmallest(firstNumber, secondNumber, thirdNumber));
        Console.WriteLine("The arithmetic mean: {0:F3}", ArithmeticMean(firstNumber, secondNumber, thirdNumber));
    }
}
