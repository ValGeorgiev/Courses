using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Invoice
{
    public class InvoiceClass
    {
        private string partNumber;
        private string description;
        private int quantity;
        private decimal price;

        public string PartNumber
        {
            get
            {
                return partNumber;
            }
            set
            {
                if (value != null)
                {
                    partNumber = value;
                }
                else
                {
                    throw new FormatException("Number is null ");
                }
            }
        }
        public string Description
        {
            get
            {
                return description;
            }
            set
            {
                if (value != null)
                {
                    description = value;
                }
                else
                {
                    throw new FormatException("Description is null");
                }
            }
        }
        public int Quantity
        {
            get
            {
                return quantity;
            }
            set
            {
                if (value > 0)
                {
                    quantity = value;
                }
                else
                {
                    throw new FormatException("Quantity is negative! ERROR");
                }
            }
        }
        public decimal Price
        {
            get
            {
                return price;
            }
            set
            {
                if (value > 0)
                {
                    price = value;
                }
                else
                {
                    throw new FormatException("Price is zero or negative");
                }
            }
        }
        public InvoiceClass(string number, string description, int quantity, decimal price)
        {
            PartNumber = number;
            Description = description;
            Quantity = quantity;
            Price = price;
        }

        public decimal GetInvoiceAmount()
        {
            return this.Quantity * this.Price;
        }
        public void Print()
        {
            Console.WriteLine("Number : {0}", PartNumber);
            Console.WriteLine("Description : {0}", Description);
            Console.WriteLine("Quantity : {0}", Quantity);
            Console.WriteLine("Price : {0}", Price);
        }
    }
}
