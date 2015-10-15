using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ClassDiagram
{
    class Account
    {
        private int anualInterestRate;
        private decimal balance;
        private string dateCreate;
        private int id;

        public Account(int anualRate, decimal balance, string date, int id)
        {
            AnualInterestRate = anualRate;
            Balance = balance;
            DateCreate = date;
            Id = id;
        }

        public int AnualInterestRate
        {
            get
            {
                return anualInterestRate;
            }
            set
            {
                if (value >= 0)
                {
                    anualInterestRate = value;
                }
                else
                {
                    throw new FormatException();
                }
            }
        }

        public decimal Balance
        {
            get
            {
                return balance;
            }
            set
            {
                if (value >= 0)
                {
                    balance = value;
                }
                else
                {
                    throw new FormatException();
                }
            }
        }

        public string DateCreate
        {
            get
            {
                return dateCreate;
            }
            set
            {
                if (value != null)
                {
                    dateCreate = value;
                }
                else
                {
                    throw new FormatException();
                }
            }

        }

        public int Id
        {
            get
            {
                return id;
            }
            set
            {
                if (value > 0)
                {
                    id = value;
                }
                else
                {
                    throw new FormatException();
                }
            }
        }
    
        static void Main()
        {
        }

        public void Deposit()
        {

        }

        public void Withdraw()
        {

        }
    }
}
