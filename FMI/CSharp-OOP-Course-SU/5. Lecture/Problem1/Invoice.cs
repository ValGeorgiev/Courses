using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    // Invoice class.
    public class Invoice
    {
        // declare variables for Invoice object
        private int quantityValue;
        private decimal priceValue;

        // auto-implemented property PartNumber
        public int PartNumber { get; set; }

        // auto-implemented property PartDescription
        public string PartDescription { get; set; }

        // four-argument constructor
        public Invoice(int part, string description,
           int count, decimal pricePerItem)
        {
            PartNumber = part;
            PartDescription = description;
            Quantity = count;
            Price = pricePerItem;
        } // end constructor

        // property for quantityValue; ensures value is positive
        public int Quantity
        {
            get
            {
                return quantityValue;
            } // end get
            set
            {
                if (value > 0) // determine whether quantity is positive
                    quantityValue = value; // valid quantity assigned
            } // end set
        } // end property Quantity

        // property for pricePerItemValue; ensures value is positive
        public decimal Price
        {
            get
            {
                return priceValue;
            } // end get
            set
            {
                if (value >= 0M) // determine whether price is non-negative
                    priceValue = value; // valid price assigned
            } // end set
        } // end property Price

        // return string containing the fields in the Invoice in a nice format
        public override string ToString()
        {
            // left justify each field, and give large enough spaces so
            // all the columns line up
            return string.Format("{0,-5} {1,-20} {2,-5} {3,6:C}",
               PartNumber, PartDescription, Quantity, Price);
        } // end method ToString

        public static void TaskA(Invoice[] array)
        {
            var sortedByPartDescription =
                from value in array
                orderby value.PartDescription
                select value;

            foreach (var value in sortedByPartDescription)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();
        }

        public static void TaskB(Invoice[] array)
        {
            var sortedByPrice =
                from value in array
                orderby value.Price
                select value;

            foreach (var value in sortedByPrice)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();

        }

        public static void TaskC(Invoice[] array)
        {
            var sortByQuantity =
                from value in array
                orderby value.Quantity
                select value;


            foreach (var value in sortByQuantity)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();
        }
        public static void TaskD(Invoice[] array)
        {
            var orderByTotal =
                from value in array
                let total = value.Price * value.Quantity
                orderby total
                select total;

            foreach (var value in orderByTotal)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();
        }

        public static void TaskE(Invoice[] array)
        {
            var printByRange =
                from value in array
                let total = value.Price * value.Quantity
                orderby total
                where total > 200 && total < 500
                select total;

            foreach (var value in printByRange)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();
        }

        public static void TaskF(Invoice[] array)
        {
            var firstCol =
                from value in array
                where value.Price > 12
                select value;

            Console.WriteLine("Category: Price above 12$");
            foreach (var value in firstCol)
            {
                Console.WriteLine(value.ToString());
            }


            var secondCol =
                from value in array
                where value.Price <= 12
                select value;

            Console.WriteLine("Category: Price below 12$");
            foreach (var value in secondCol)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();

        }

        public static void TaskG(Invoice[] array)
        {
            var firstCol =
                from value in array
                where value.Price >= 20
                select value;

            Console.WriteLine("Category: Price above 20$");
            foreach (var value in firstCol)
            {
                Console.WriteLine(value.ToString());
            }


            var secondCol =
                from value in array
                where value.Price <= 10
                select value;

            Console.WriteLine("Category: Price below 10$");
            foreach (var value in secondCol)
            {
                Console.WriteLine(value.ToString());
            }

            var thirdCol =
                from value in array
                where value.Price > 10 && value.Price < 20
                select value;

            Console.WriteLine("Category: Price between 10$ and 20$");
            foreach (var value in secondCol)
            {
                Console.WriteLine(value.ToString());
            }
            Console.WriteLine();
        }


    } // end class Invoice

}
