using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Problem1.Calculator
{
    public partial class CalculatorForm : Form
    {
        private enum Operations 
        {
            PLUS, MINUS, DIVIDE, MULTIPLY, NO_OP
        };
        private Operations operation;
        private double inputNumber;
        private double result;


        public CalculatorForm()
        {
            operation = Operations.NO_OP;
            inputNumber = 0;
            InitializeComponent();
        }

        private void TypeNumber(string digit)
        {  
            if (txtInput.Text.Equals("0"))
            {
                txtInput.Text = digit;
            }
            else
            {
                txtInput.Text += digit;
            }
        }

        
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void buttonC_Click(object sender, EventArgs e)
        {
            string txt = txtInput.Text;
            if (txt.Length == 1)
            {
                txtInput.Text = "0";
            }
            else
            {
                txtInput.Text = txt.Substring(0, txt.Length - 1);
            }
        }


        private void btn1_Click(object sender, EventArgs e)
        {
            TypeNumber(btn1.Text);
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            TypeNumber(btn2.Text);
            
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            TypeNumber(btn3.Text);
        }

        private void btn4_Click(object sender, EventArgs e)
        {
            TypeNumber(btn4.Text);
        }

        private void btn5_Click(object sender, EventArgs e)
        {
            TypeNumber(btn5.Text);
        }

        private void btn7_Click(object sender, EventArgs e)
        {
            TypeNumber(btn7.Text);
        }

        private void btn8_Click(object sender, EventArgs e)
        {
            TypeNumber(btn8.Text);
        }

        private void btn9_Click(object sender, EventArgs e)
        {
            TypeNumber(btn9.Text);
        }

        private void btn0_Click(object sender, EventArgs e)
        {
            TypeNumber(btn0.Text);
        }

        private void btn00_Click(object sender, EventArgs e)
        {
            TypeNumber(btn00.Text);
        }

        private void btn6_Click(object sender, EventArgs e)
        {
            TypeNumber(btn6.Text);
        }

        private void btnPlus_Click(object sender, EventArgs e)
        {
            inputNumber = double.Parse(txtInput.Text);
            operation = Operations.PLUS;         
            txtInput.Text = "0";
        }

        private void btnCA_Click(object sender, EventArgs e)
        {
            txtInput.Text = "0";
        }

        private void btnOFF_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void panel3_Paint(object sender, PaintEventArgs e)
        {

        }

        private void btnEqual_Click(object sender, EventArgs e)
        {
            result = double.Parse(txtInput.Text);
            switch (operation)
            {
                case Operations.PLUS: result += inputNumber;
                    break;
                case Operations.MINUS: result = inputNumber - result;
                    break;
                case Operations.DIVIDE: 
                    if (result == 0)
                    {
                        txtInput.Text = "ERROR";
                        return;
                    }
                    else
                    {
                        result = inputNumber / result;
                    }                
                    break;
                case Operations.MULTIPLY: result *= inputNumber;
                    break;
            }
            txtInput.Text = Convert.ToString(result);
           
        }

        private void buttonMinus_Click(object sender, EventArgs e)
        {
            inputNumber = double.Parse(txtInput.Text);
            operation = Operations.MINUS;
            txtInput.Text = "0";
        }

        private void buttonMultiply_Click(object sender, EventArgs e)
        {
            inputNumber = double.Parse(txtInput.Text);
            operation = Operations.MULTIPLY;
            txtInput.Text = "0";
        }

        private void buttonDivide_Click(object sender, EventArgs e)
        {
            inputNumber = double.Parse(txtInput.Text);
            operation = Operations.DIVIDE;
            txtInput.Text = "0";
        }

        private void buttonPoint_Click(object sender, EventArgs e)
        {
            if (!txtInput.Text.Contains(','))
            {
                txtInput.Text += ',';
            }
        }

       

        private void Keys_Events(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == (char)Keys.D0)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(0);
                }
                else
                {
                    txtInput.Text += 0;
                }
                
            }
            if (e.KeyChar == (char)Keys.D9)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(9);
                }
                else
                {
                    txtInput.Text += 9;
                }
            }
            if (e.KeyChar == (char)Keys.D8)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(8);
                }
                else
                {
                    txtInput.Text += 8;
                }
            }
            if (e.KeyChar == (char)Keys.D7)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(7);
                }
                else
                {
                    txtInput.Text += 7;
                }
            }
            if (e.KeyChar == (char)Keys.D6)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(6);
                }
                else
                {
                    txtInput.Text += 6;
                }
            }
            if (e.KeyChar == (char)Keys.D5)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(5);
                }
                else
                {
                    txtInput.Text += 5;
                }
            }
            if (e.KeyChar == (char)Keys.D4)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(4);
                }
                else
                {
                    txtInput.Text += 4;
                }
            }
            if (e.KeyChar == (char)Keys.D3)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(3);
                }
                else
                {
                    txtInput.Text += 3;
                }
            }
            if (e.KeyChar == (char)Keys.D1)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(1);
                }
                else
                {
                    txtInput.Text += 1;
                }
            }
            if (e.KeyChar == (char)Keys.D2)
            {
                if (txtInput.Text.Equals("0"))
                {
                    txtInput.Text = Convert.ToString(2);
                }
                else
                {
                    txtInput.Text += 2;
                }
            }
        }
    }
}
