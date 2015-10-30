using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem1
{
    public class TestInvoice
    {
        public static void Main()
        {

            Invoice invoice1 = new Invoice(10, "invoice1", 1, 100m);
            Invoice invoice2 = new Invoice(2, "invoice2", 4, 10m);
            Invoice invoice3 = new Invoice(12, "invoice3", 5, 132m);
            Invoice invoice4 = new Invoice(5, "invoice4", 2, 910m);
            Invoice invoice5 = new Invoice(123, "binvoice5", 3, 91m);
            Invoice invoice6 = new Invoice(40, "ccinvoice6", 10, 45m);
            Invoice invoice7 = new Invoice(0, "invoice7", 100, 120m);
            Invoice invoice8 = new Invoice(7, "invoice8", 11, 1000m);
            
            Invoice[] array = new Invoice[]{
                invoice1,invoice2,invoice3,invoice4,invoice5,invoice6,invoice7,invoice8
            };

            Invoice.TaskA(array);
            Invoice.TaskB(array);
            Invoice.TaskC(array);
            Invoice.TaskD(array);
            Invoice.TaskE(array);
            Invoice.TaskF(array);
            Invoice.TaskG(array);

        } 

    }
}
