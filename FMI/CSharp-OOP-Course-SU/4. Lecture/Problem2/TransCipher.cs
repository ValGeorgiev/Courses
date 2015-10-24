using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Problem2
{
    public class TransCipher: ITransCipher
    {
        #region Fields
        private string plainText;
        private int cipherKey;
        #endregion

        #region Properties
        public string PlainText
        {
            get
            {
                return plainText;
            }
            set
            {
                if (value == null)
                {
                    throw new ArgumentNullException("The plain text is null!");
                }
                plainText = value;
            }
        }
        public int CipherKey
        {
            get
            {
                return cipherKey;
            }
            set
            {
                if (value <= 0)
                {
                    throw new ArgumentOutOfRangeException("Cipher key must be positive!!");
                }
                cipherKey = value;
            }
        }
        #endregion

        #region Constructor
        public TransCipher(string plainText, int cipherKey)
        {
            this.PlainText = plainText;
            this.CipherKey = cipherKey;
        }
        #endregion

        #region Public Methods
        public string Encrypt()
        {
            char[,] matrix = new char[cipherKey, cipherKey];
            string result = "";
            InitializateMatrix(ref matrix, plainText, cipherKey);
            
            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                for (int j = 0; j < matrix.GetLength(1); j++)
                {
                    if (matrix[j,i] >= 'A' && matrix[j,i] <= 'z')
                    {
                        result += Convert.ToString(matrix[j, i]);                        
                    }
                }
            }
            Console.WriteLine("Encrypt : " + result);
            return result;
        }
        public string Decrypt()
        {
            char[,] matrix = new char[cipherKey, cipherKey];
            string result = "";
            InitializateMatrix(ref matrix, plainText, cipherKey);

            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                for (int j = 0; j < matrix.GetLength(1); j++)
                {
                    if (matrix[i,j] >= 'A' && matrix[i, j] <= 'z')
                    {
                        result += Convert.ToString(matrix[i,j]);
                    }
                }
            }
            Console.WriteLine("Decrypt : " + result);
            return result;
        }
        #endregion

        #region Private Methods
        
        private void InitializateMatrix(ref char[,] matrix, string plainText, int cipherKey)
        {
            int rowsLength = plainText.Length / cipherKey;
            int k = 0;
            for (int i = 0; i < rowsLength; i++)
            {
                for (int j = 0; j < cipherKey ; j++)
                {
                    matrix[i, j] = plainText[k++];
                }
            }
        }
        #endregion



    }
}
