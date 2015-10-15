// Fig. 4.13: GradeBookTest.cs
// GradeBook constructor used to specify the course name at the 
// time each GradeBook object is created.
using System;

public class GradeBookTest
{
    // Main method begins program execution
    public static void Main(string[] args)
    {
        // create GradeBook object
        GradeBook gradeBook1 = new GradeBook( // invokes constructor
           "CS101 Introduction to C# Programming", "Evgeni");
        GradeBook gradeBook2 = new GradeBook( // invokes constructor
           "CS102 Data Structures in C#", "Krustev");

        // display initial value of courseName for each GradeBook
        gradeBook1.DisplayMessage();
        Console.WriteLine();
        gradeBook2.DisplayMessage();
    } // end Main
} // end class GradeBookTest

