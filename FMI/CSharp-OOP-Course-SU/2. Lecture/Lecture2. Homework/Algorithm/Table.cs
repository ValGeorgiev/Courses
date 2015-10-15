using System;

namespace Algorithm
{
    public class Table
    {
        private int start;          // declare start index
        private int end;            // declare end index
        private int steps;          // declare steps 

        public int Start            // declare Start property
        {
            get
            {
                return start;
            }
            private set
            {
                if (value >= 0)         //if value of start is negative throw exception
                {
                    start = value;
                }
                else
                {
                    throw new FormatException("Start must be positive or zero!");
                }
            }
        }
        public int End          //declare End property
        {
            get
            {
                return end;
            }
            private set
            {
                if (value >= 0)         // if value of end is negative throw exception
                {
                    end = value;
                }
                else
                {
                    throw new FormatException("End must be positive or zero!");
                }
            }
        }
        public int Steps
        {
            get
            {
                return steps;
            } 
            private set
            {
                if (value > 0)          // if value of steps is negative or zero throw exception
                {
                    steps = value;
                }
                else
                {
                    throw new FormatException("Steps must be positive!");
                }
            }
        }

        public Table(int start, int end, int steps)      //constructor
        {
            Start = start;          // initialize all variables
            End = end;
            Steps = steps;
        }

        public void MakeTable()         // function that make table
        {
            string x = "x";
            string fx = "f(x)";
            int step = steps;       // the step that we make
            string ret;             // return variable
            Console.WriteLine("{0,5}{1,5}", x, fx);     // headers
            for (int i = Start; i < End; i++)
            {
                Console.Write("{0,5} ", i);             // numbers in rang[start, end]
                Console.Write("{0:0.00}", Calculations(i));     // result of function calculations
                Console.WriteLine();
                if (i == steps)
                {
                    steps = step + steps;
                    Console.WriteLine("Press return to continue...");
                    ret = Console.ReadLine().Trim();
                    if (ret == "return")
                    {
                        continue;       // if you enter return continue with for 
                    }
                    else                // i give you another chance
                    {
                        Console.WriteLine("Enter 'return' please..");
                        ret = Console.ReadLine().Trim();
                        if (ret == "return")
                        {
                            continue;
                        }
                        else            //sorry i throw exception
                        {
                            throw new FormatException("I told you to enter 'return'...");
                        }
                    }
                }
            }
        }

        private double Calculations(int x)          // Calculate result;
        {
            double result = (double) Math.Abs((x - 2) * (x - 2)) / (x * x + 1);
            return result;
        }
            
        
    }
}
