using System;

namespace CSharp_OOP_Course_SU_Lecture_1
{
    public class CryptingTelephone
    {
        public static int Encrypt(int telephoneNumber)
        {
            int firstDigit,         // Declarate first digit
                secondDigit,        // Declarate second digit
                thirdDigit,         // Declarate third digit
                forthDigit,         // Declarate forth digit
                tmp;                // Declarate help integer which help us with swap

            forthDigit = telephoneNumber % 10;
            forthDigit = (forthDigit + 7) % 10;
            telephoneNumber /= 10;                      //take forth digit, crypting it and delete it

            thirdDigit = telephoneNumber % 10;
            thirdDigit = (thirdDigit + 7) % 10;
            telephoneNumber /= 10;                      //take third digit, crypting it and delete it

            secondDigit = telephoneNumber % 10;
            secondDigit = (secondDigit + 7) % 10;
            telephoneNumber /= 10;                      //take second digit, crypting it and delete it

            firstDigit = telephoneNumber % 10;
            firstDigit = (firstDigit + 7) % 10;
            telephoneNumber /= 10;                      //take first digit, crypting it and delete it

            tmp = thirdDigit;
            thirdDigit = firstDigit;
            firstDigit = tmp;                           //swap first digit with forth digit

            tmp = forthDigit;
            forthDigit = secondDigit;
            secondDigit = tmp;                          //swap forth digit with second digit

            telephoneNumber = firstDigit + (secondDigit * 10) + (thirdDigit * 100) + (forthDigit * 1000);
            // calculate new telephone number

            Console.WriteLine("Crypt forth-digit number : {0}", telephoneNumber);
            //output new telephone number
            return telephoneNumber;
        }

        public static int Decrypt(int telephoneNumber)
        {   
            int firstDigit,     // Declarate first digit
            secondDigit,        // Declarate second digit
            thirdDigit,         // Declarate third digit
            forthDigit,         // Declarate forth digit
            tmp;                // Declarate help integer which help us with swap

            forthDigit = telephoneNumber % 10;
            forthDigit = (forthDigit + 3) % 10;
            telephoneNumber /= 10;                      //take forth digit and delete it

            thirdDigit = telephoneNumber % 10;
            thirdDigit = (thirdDigit + 3) % 10;
            telephoneNumber /= 10;                     //take third digit and delete it

            secondDigit = telephoneNumber % 10;
            secondDigit = (secondDigit + 3) % 10;
            telephoneNumber /= 10;                      //take second digit and delete it

            firstDigit = telephoneNumber % 10;
            firstDigit = (firstDigit + 3) % 10;
            telephoneNumber /= 10;                      //take first digit and delete it

            tmp = thirdDigit;
            thirdDigit = firstDigit;
            firstDigit = tmp;                           //swap first digit with forth digit

            tmp = forthDigit;
            forthDigit = secondDigit;
            secondDigit = tmp;                          //swap forth digit with second digit

            telephoneNumber = firstDigit + (secondDigit * 10) + (thirdDigit * 100) + (forthDigit * 1000);
            // calculate new telephone number

            Console.WriteLine("Decrypt forth-digit number : {0}", telephoneNumber);
            //output new telephone number

            return telephoneNumber;
        }
        public static void Main()
        {
            int telephoneNumber = 0;

            Console.Write("Please, enter a forth-digit number: ");
            telephoneNumber = int.Parse(Console.ReadLine());        // Enter a number

            telephoneNumber = Encrypt(telephoneNumber);
            telephoneNumber = Decrypt(telephoneNumber);
        }
    }
}
