using System;
class Money
{
    static double Moneys(int students, int paper, double ream)
    {
        double sheetsOfPaper = students * paper;
        double reams = sheetsOfPaper / 400;
        return reams * ream;
    }
    static void Main()
    {
        int students;
        int paper;
        double ream;
        do
        {
            Console.Write("Enter students: ");
            students = int.Parse(Console.ReadLine());
        } while (students < 0 && students > 10001);
        do
        {
            Console.Write("Enter paper: ");
            paper = int.Parse(Console.ReadLine());
        } while (paper < 0 && paper > 501);
        do
        {
            Console.Write("Enter price of ream: ");
            ream = Double.Parse(Console.ReadLine());
            ream = Math.Round(ream, 3);
        } while (ream < 0.001 && ream > 100);
        Console.WriteLine("Money: {0:F3}", Moneys(students, paper, ream));
    }
}
