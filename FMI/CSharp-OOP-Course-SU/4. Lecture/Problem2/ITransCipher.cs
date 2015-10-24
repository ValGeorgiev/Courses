using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public interface ITransCipher
    {
        string PlainText { get; set; }
        int CipherKey { get; set; }

        string Encrypt();
        string Decrypt();
    }
}
