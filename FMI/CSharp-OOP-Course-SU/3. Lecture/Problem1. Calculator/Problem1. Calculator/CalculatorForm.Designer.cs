namespace Problem1.Calculator
{
    partial class CalculatorForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.buttonC = new System.Windows.Forms.Button();
            this.panel1 = new System.Windows.Forms.Panel();
            this.buttonCA = new System.Windows.Forms.Button();
            this.panel2 = new System.Windows.Forms.Panel();
            this.btn00 = new System.Windows.Forms.Button();
            this.btn0 = new System.Windows.Forms.Button();
            this.btn9 = new System.Windows.Forms.Button();
            this.btn8 = new System.Windows.Forms.Button();
            this.btn7 = new System.Windows.Forms.Button();
            this.btn6 = new System.Windows.Forms.Button();
            this.btn5 = new System.Windows.Forms.Button();
            this.btn4 = new System.Windows.Forms.Button();
            this.btn1 = new System.Windows.Forms.Button();
            this.btn2 = new System.Windows.Forms.Button();
            this.btn3 = new System.Windows.Forms.Button();
            this.panel3 = new System.Windows.Forms.Panel();
            this.buttonMinus = new System.Windows.Forms.Button();
            this.buttonMultiply = new System.Windows.Forms.Button();
            this.buttonDivide = new System.Windows.Forms.Button();
            this.buttonEqual = new System.Windows.Forms.Button();
            this.buttonPoint = new System.Windows.Forms.Button();
            this.buttonPlus = new System.Windows.Forms.Button();
            this.buttonOFF = new System.Windows.Forms.Button();
            this.txtInput = new System.Windows.Forms.TextBox();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.panel3.SuspendLayout();
            this.SuspendLayout();
            // 
            // buttonC
            // 
            this.buttonC.Location = new System.Drawing.Point(9, 6);
            this.buttonC.Name = "buttonC";
            this.buttonC.Size = new System.Drawing.Size(32, 24);
            this.buttonC.TabIndex = 3;
            this.buttonC.TabStop = false;
            this.buttonC.Text = "C";
            this.buttonC.UseVisualStyleBackColor = true;
            this.buttonC.Click += new System.EventHandler(this.buttonC_Click);
            // 
            // panel1
            // 
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel1.Controls.Add(this.buttonCA);
            this.panel1.Controls.Add(this.buttonC);
            this.panel1.Location = new System.Drawing.Point(200, 48);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(48, 72);
            this.panel1.TabIndex = 9;
            // 
            // buttonCA
            // 
            this.buttonCA.Font = new System.Drawing.Font("Microsoft Sans Serif", 7F);
            this.buttonCA.Location = new System.Drawing.Point(9, 33);
            this.buttonCA.Margin = new System.Windows.Forms.Padding(0);
            this.buttonCA.Name = "buttonCA";
            this.buttonCA.Size = new System.Drawing.Size(32, 24);
            this.buttonCA.TabIndex = 4;
            this.buttonCA.TabStop = false;
            this.buttonCA.Text = "C/A";
            this.buttonCA.UseVisualStyleBackColor = true;
            this.buttonCA.Click += new System.EventHandler(this.btnCA_Click);
            // 
            // panel2
            // 
            this.panel2.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel2.Controls.Add(this.btn00);
            this.panel2.Controls.Add(this.btn0);
            this.panel2.Controls.Add(this.btn9);
            this.panel2.Controls.Add(this.btn8);
            this.panel2.Controls.Add(this.btn7);
            this.panel2.Controls.Add(this.btn6);
            this.panel2.Controls.Add(this.btn5);
            this.panel2.Controls.Add(this.btn4);
            this.panel2.Controls.Add(this.btn1);
            this.panel2.Controls.Add(this.btn2);
            this.panel2.Controls.Add(this.btn3);
            this.panel2.Location = new System.Drawing.Point(8, 48);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(88, 108);
            this.panel2.TabIndex = 5;
            // 
            // btn00
            // 
            this.btn00.Location = new System.Drawing.Point(26, 70);
            this.btn00.Margin = new System.Windows.Forms.Padding(0);
            this.btn00.Name = "btn00";
            this.btn00.Size = new System.Drawing.Size(48, 24);
            this.btn00.TabIndex = 12;
            this.btn00.TabStop = false;
            this.btn00.Text = "00";
            this.btn00.UseVisualStyleBackColor = true;
            this.btn00.Click += new System.EventHandler(this.btn00_Click);
            // 
            // btn0
            // 
            this.btn0.Location = new System.Drawing.Point(2, 70);
            this.btn0.Margin = new System.Windows.Forms.Padding(0);
            this.btn0.Name = "btn0";
            this.btn0.Size = new System.Drawing.Size(24, 24);
            this.btn0.TabIndex = 11;
            this.btn0.TabStop = false;
            this.btn0.Text = "0";
            this.btn0.UseVisualStyleBackColor = true;
            this.btn0.Click += new System.EventHandler(this.btn0_Click);
            // 
            // btn9
            // 
            this.btn9.Location = new System.Drawing.Point(50, 46);
            this.btn9.Margin = new System.Windows.Forms.Padding(0);
            this.btn9.Name = "btn9";
            this.btn9.Size = new System.Drawing.Size(24, 24);
            this.btn9.TabIndex = 10;
            this.btn9.TabStop = false;
            this.btn9.Text = "9";
            this.btn9.UseVisualStyleBackColor = true;
            this.btn9.Click += new System.EventHandler(this.btn9_Click);
            // 
            // btn8
            // 
            this.btn8.Location = new System.Drawing.Point(26, 46);
            this.btn8.Margin = new System.Windows.Forms.Padding(0);
            this.btn8.Name = "btn8";
            this.btn8.Size = new System.Drawing.Size(24, 24);
            this.btn8.TabIndex = 9;
            this.btn8.TabStop = false;
            this.btn8.Text = "8";
            this.btn8.UseVisualStyleBackColor = true;
            this.btn8.Click += new System.EventHandler(this.btn8_Click);
            // 
            // btn7
            // 
            this.btn7.Location = new System.Drawing.Point(2, 46);
            this.btn7.Margin = new System.Windows.Forms.Padding(0);
            this.btn7.Name = "btn7";
            this.btn7.Size = new System.Drawing.Size(24, 24);
            this.btn7.TabIndex = 8;
            this.btn7.TabStop = false;
            this.btn7.Text = "7";
            this.btn7.UseVisualStyleBackColor = true;
            this.btn7.Click += new System.EventHandler(this.btn7_Click);
            // 
            // btn6
            // 
            this.btn6.Location = new System.Drawing.Point(49, 22);
            this.btn6.Margin = new System.Windows.Forms.Padding(0);
            this.btn6.Name = "btn6";
            this.btn6.Size = new System.Drawing.Size(24, 24);
            this.btn6.TabIndex = 7;
            this.btn6.TabStop = false;
            this.btn6.Text = "6";
            this.btn6.UseVisualStyleBackColor = true;
            this.btn6.Click += new System.EventHandler(this.btn6_Click);
            // 
            // btn5
            // 
            this.btn5.Location = new System.Drawing.Point(26, 22);
            this.btn5.Margin = new System.Windows.Forms.Padding(0);
            this.btn5.Name = "btn5";
            this.btn5.Size = new System.Drawing.Size(24, 24);
            this.btn5.TabIndex = 6;
            this.btn5.TabStop = false;
            this.btn5.Text = "5";
            this.btn5.UseVisualStyleBackColor = true;
            this.btn5.Click += new System.EventHandler(this.btn5_Click);
            // 
            // btn4
            // 
            this.btn4.Location = new System.Drawing.Point(2, 22);
            this.btn4.Margin = new System.Windows.Forms.Padding(0);
            this.btn4.Name = "btn4";
            this.btn4.Size = new System.Drawing.Size(24, 24);
            this.btn4.TabIndex = 5;
            this.btn4.TabStop = false;
            this.btn4.Text = "4";
            this.btn4.UseVisualStyleBackColor = true;
            this.btn4.Click += new System.EventHandler(this.btn4_Click);
            // 
            // btn1
            // 
            this.btn1.Location = new System.Drawing.Point(2, -2);
            this.btn1.Margin = new System.Windows.Forms.Padding(0);
            this.btn1.Name = "btn1";
            this.btn1.Size = new System.Drawing.Size(24, 24);
            this.btn1.TabIndex = 4;
            this.btn1.TabStop = false;
            this.btn1.Text = "1";
            this.btn1.UseVisualStyleBackColor = true;
            this.btn1.Click += new System.EventHandler(this.btn1_Click);
            // 
            // btn2
            // 
            this.btn2.Location = new System.Drawing.Point(26, -2);
            this.btn2.Margin = new System.Windows.Forms.Padding(0);
            this.btn2.Name = "btn2";
            this.btn2.Size = new System.Drawing.Size(24, 24);
            this.btn2.TabIndex = 3;
            this.btn2.TabStop = false;
            this.btn2.Text = "2";
            this.btn2.UseVisualStyleBackColor = true;
            this.btn2.Click += new System.EventHandler(this.btn2_Click);
            // 
            // btn3
            // 
            this.btn3.Location = new System.Drawing.Point(50, -2);
            this.btn3.Margin = new System.Windows.Forms.Padding(0);
            this.btn3.Name = "btn3";
            this.btn3.Size = new System.Drawing.Size(24, 24);
            this.btn3.TabIndex = 2;
            this.btn3.TabStop = false;
            this.btn3.Text = "3";
            this.btn3.UseVisualStyleBackColor = true;
            this.btn3.Click += new System.EventHandler(this.btn3_Click);
            // 
            // panel3
            // 
            this.panel3.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel3.Controls.Add(this.buttonMinus);
            this.panel3.Controls.Add(this.buttonMultiply);
            this.panel3.Controls.Add(this.buttonDivide);
            this.panel3.Controls.Add(this.buttonEqual);
            this.panel3.Controls.Add(this.buttonPoint);
            this.panel3.Controls.Add(this.buttonPlus);
            this.panel3.Location = new System.Drawing.Point(112, 48);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(72, 108);
            this.panel3.TabIndex = 13;
            this.panel3.Paint += new System.Windows.Forms.PaintEventHandler(this.panel3_Paint);
            // 
            // buttonMinus
            // 
            this.buttonMinus.Location = new System.Drawing.Point(41, 3);
            this.buttonMinus.Name = "buttonMinus";
            this.buttonMinus.Size = new System.Drawing.Size(24, 24);
            this.buttonMinus.TabIndex = 19;
            this.buttonMinus.TabStop = false;
            this.buttonMinus.Text = "-";
            this.buttonMinus.UseVisualStyleBackColor = true;
            this.buttonMinus.Click += new System.EventHandler(this.buttonMinus_Click);
            // 
            // buttonMultiply
            // 
            this.buttonMultiply.Location = new System.Drawing.Point(41, 28);
            this.buttonMultiply.Name = "buttonMultiply";
            this.buttonMultiply.Size = new System.Drawing.Size(24, 24);
            this.buttonMultiply.TabIndex = 18;
            this.buttonMultiply.TabStop = false;
            this.buttonMultiply.Text = "x";
            this.buttonMultiply.UseVisualStyleBackColor = true;
            this.buttonMultiply.Click += new System.EventHandler(this.buttonMultiply_Click);
            // 
            // buttonDivide
            // 
            this.buttonDivide.Location = new System.Drawing.Point(41, 52);
            this.buttonDivide.Name = "buttonDivide";
            this.buttonDivide.Size = new System.Drawing.Size(24, 24);
            this.buttonDivide.TabIndex = 17;
            this.buttonDivide.TabStop = false;
            this.buttonDivide.Text = "/";
            this.buttonDivide.UseVisualStyleBackColor = true;
            this.buttonDivide.Click += new System.EventHandler(this.buttonDivide_Click);
            // 
            // buttonEqual
            // 
            this.buttonEqual.Location = new System.Drawing.Point(41, 76);
            this.buttonEqual.Name = "buttonEqual";
            this.buttonEqual.Size = new System.Drawing.Size(24, 24);
            this.buttonEqual.TabIndex = 16;
            this.buttonEqual.TabStop = false;
            this.buttonEqual.Text = "=";
            this.buttonEqual.UseVisualStyleBackColor = true;
            this.buttonEqual.Click += new System.EventHandler(this.btnEqual_Click);
            // 
            // buttonPoint
            // 
            this.buttonPoint.Location = new System.Drawing.Point(3, 76);
            this.buttonPoint.Name = "buttonPoint";
            this.buttonPoint.Size = new System.Drawing.Size(24, 24);
            this.buttonPoint.TabIndex = 15;
            this.buttonPoint.TabStop = false;
            this.buttonPoint.Text = ".";
            this.buttonPoint.UseVisualStyleBackColor = true;
            this.buttonPoint.Click += new System.EventHandler(this.buttonPoint_Click);
            // 
            // buttonPlus
            // 
            this.buttonPlus.Location = new System.Drawing.Point(3, 6);
            this.buttonPlus.Name = "buttonPlus";
            this.buttonPlus.Size = new System.Drawing.Size(24, 64);
            this.buttonPlus.TabIndex = 14;
            this.buttonPlus.TabStop = false;
            this.buttonPlus.Text = "+";
            this.buttonPlus.UseVisualStyleBackColor = true;
            this.buttonPlus.Click += new System.EventHandler(this.btnPlus_Click);
            // 
            // buttonOFF
            // 
            this.buttonOFF.Location = new System.Drawing.Point(200, 126);
            this.buttonOFF.Name = "buttonOFF";
            this.buttonOFF.Size = new System.Drawing.Size(48, 24);
            this.buttonOFF.TabIndex = 14;
            this.buttonOFF.TabStop = false;
            this.buttonOFF.Text = "OFF";
            this.buttonOFF.UseVisualStyleBackColor = true;
            this.buttonOFF.Click += new System.EventHandler(this.btnOFF_Click);
            // 
            // txtInput
            // 
            this.txtInput.Location = new System.Drawing.Point(8, 16);
            this.txtInput.Name = "txtInput";
            this.txtInput.Size = new System.Drawing.Size(240, 20);
            this.txtInput.TabIndex = 15;
            this.txtInput.TabStop = false;
            this.txtInput.Text = "0";
            this.txtInput.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            this.txtInput.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // CalculatorForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(256, 153);
            this.Controls.Add(this.txtInput);
            this.Controls.Add(this.buttonOFF);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Name = "CalculatorForm";
            this.Text = "Calculator";
            this.TopMost = true;
            this.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Keys_Events);
            this.panel1.ResumeLayout(false);
            this.panel2.ResumeLayout(false);
            this.panel3.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button buttonC;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Button buttonCA;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Button btn8;
        private System.Windows.Forms.Button btn7;
        private System.Windows.Forms.Button btn6;
        private System.Windows.Forms.Button btn5;
        private System.Windows.Forms.Button btn4;
        private System.Windows.Forms.Button btn1;
        private System.Windows.Forms.Button btn2;
        private System.Windows.Forms.Button btn3;
        private System.Windows.Forms.Button btn00;
        private System.Windows.Forms.Button btn0;
        private System.Windows.Forms.Button btn9;
        private System.Windows.Forms.Panel panel3;
        private System.Windows.Forms.Button buttonDivide;
        private System.Windows.Forms.Button buttonEqual;
        private System.Windows.Forms.Button buttonPoint;
        private System.Windows.Forms.Button buttonPlus;
        private System.Windows.Forms.Button buttonMinus;
        private System.Windows.Forms.Button buttonMultiply;
        private System.Windows.Forms.Button buttonOFF;
        private System.Windows.Forms.TextBox txtInput;

    }
}

