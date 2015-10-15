using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Invoice
{
    public class InvoiceTest
    {
        public static void Main()
        {
            InvoiceClass myInvoice = new InvoiceClass("11", "myInvoice", 100, 20);

            myInvoice.Print();

        }
    }
}
