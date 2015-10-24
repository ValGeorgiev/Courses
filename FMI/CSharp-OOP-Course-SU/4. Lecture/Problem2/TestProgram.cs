using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public class TestProgram
    {
        public static void Main()
        {
            TransCipher newCipher = new TransCipher("thisistheplaintext", 6);
            newCipher.Encrypt();
            newCipher.Decrypt();

        }
    }
}
