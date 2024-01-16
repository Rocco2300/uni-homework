namespace WFA3
{
    partial class Calculator
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            tableLayout = new TableLayoutPanel();
            button7 = new Button();
            button8 = new Button();
            button9 = new Button();
            buttonDiv = new Button();
            buttonMul = new Button();
            button6 = new Button();
            button5 = new Button();
            button4 = new Button();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            buttonSub = new Button();
            buttonAdd = new Button();
            buttonEq = new Button();
            button0 = new Button();
            buttonCl = new Button();
            numberTextBox = new TextBox();
            tableLayout.SuspendLayout();
            SuspendLayout();
            // 
            // tableLayout
            // 
            tableLayout.ColumnCount = 4;
            tableLayout.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayout.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayout.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayout.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayout.Controls.Add(button7, 0, 0);
            tableLayout.Controls.Add(button8, 1, 0);
            tableLayout.Controls.Add(button9, 2, 0);
            tableLayout.Controls.Add(buttonDiv, 3, 0);
            tableLayout.Controls.Add(buttonMul, 3, 1);
            tableLayout.Controls.Add(button6, 2, 1);
            tableLayout.Controls.Add(button5, 1, 1);
            tableLayout.Controls.Add(button4, 0, 1);
            tableLayout.Controls.Add(button1, 0, 2);
            tableLayout.Controls.Add(button2, 1, 2);
            tableLayout.Controls.Add(button3, 2, 2);
            tableLayout.Controls.Add(buttonSub, 3, 2);
            tableLayout.Controls.Add(buttonAdd, 3, 3);
            tableLayout.Controls.Add(buttonEq, 2, 3);
            tableLayout.Controls.Add(button0, 1, 3);
            tableLayout.Controls.Add(buttonCl, 0, 3);
            tableLayout.Location = new Point(12, 68);
            tableLayout.Name = "tableLayout";
            tableLayout.RowCount = 4;
            tableLayout.RowStyles.Add(new RowStyle(SizeType.Percent, 25F));
            tableLayout.RowStyles.Add(new RowStyle(SizeType.Percent, 25F));
            tableLayout.RowStyles.Add(new RowStyle(SizeType.Percent, 25F));
            tableLayout.RowStyles.Add(new RowStyle(SizeType.Percent, 25F));
            tableLayout.Size = new Size(320, 357);
            tableLayout.TabIndex = 0;
            // 
            // button7
            // 
            button7.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button7.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button7.Location = new Point(3, 3);
            button7.Name = "button7";
            button7.Size = new Size(74, 83);
            button7.TabIndex = 0;
            button7.Text = "7";
            button7.UseVisualStyleBackColor = true;
            button7.Click += button_Click;
            // 
            // button8
            // 
            button8.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button8.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button8.Location = new Point(83, 3);
            button8.Name = "button8";
            button8.Size = new Size(74, 83);
            button8.TabIndex = 0;
            button8.Text = "8";
            button8.UseVisualStyleBackColor = true;
            button8.Click += button_Click;  
            // 
            // button9
            // 
            button9.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button9.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button9.Location = new Point(163, 3);
            button9.Name = "button9";
            button9.Size = new Size(74, 83);
            button9.TabIndex = 0;
            button9.Text = "9";
            button9.UseVisualStyleBackColor = true;
            button9.Click += button_Click;
            // 
            // buttonDiv
            // 
            buttonDiv.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonDiv.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            buttonDiv.Location = new Point(243, 3);
            buttonDiv.Name = "buttonDiv";
            buttonDiv.Size = new Size(74, 83);
            buttonDiv.TabIndex = 0;
            buttonDiv.Text = "/";
            buttonDiv.UseVisualStyleBackColor = true;
            buttonDiv.Click += button_Click;
            // 
            // buttonMul
            // 
            buttonMul.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonMul.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            buttonMul.Location = new Point(243, 92);
            buttonMul.Name = "buttonMul";
            buttonMul.Size = new Size(74, 83);
            buttonMul.TabIndex = 0;
            buttonMul.Text = "*";
            buttonMul.UseVisualStyleBackColor = true;
            buttonMul.Click += button_Click;
            // 
            // button6
            // 
            button6.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button6.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button6.Location = new Point(163, 92);
            button6.Name = "button6";
            button6.Size = new Size(74, 83);
            button6.TabIndex = 0;
            button6.Text = "6";
            button6.UseVisualStyleBackColor = true;
            button6.Click += button_Click;
            // 
            // button5
            // 
            button5.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button5.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button5.Location = new Point(83, 92);
            button5.Name = "button5";
            button5.Size = new Size(74, 83);
            button5.TabIndex = 0;
            button5.Text = "5";
            button5.UseVisualStyleBackColor = true;
            button5.Click += button_Click;
            // 
            // button4
            // 
            button4.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button4.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button4.Location = new Point(3, 92);
            button4.Name = "button4";
            button4.Size = new Size(74, 83);
            button4.TabIndex = 0;
            button4.Text = "4";
            button4.UseVisualStyleBackColor = true;
            button4.Click += button_Click;
            // 
            // button1
            // 
            button1.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button1.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button1.Location = new Point(3, 181);
            button1.Name = "button1";
            button1.Size = new Size(74, 83);
            button1.TabIndex = 0;
            button1.Text = "1";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button_Click;
            // 
            // button2
            // 
            button2.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button2.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button2.Location = new Point(83, 181);
            button2.Name = "button2";
            button2.Size = new Size(74, 83);
            button2.TabIndex = 0;
            button2.Text = "2";
            button2.UseVisualStyleBackColor = true;
            button2.Click += button_Click;
            // 
            // button3
            // 
            button3.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button3.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button3.Location = new Point(163, 181);
            button3.Name = "button3";
            button3.Size = new Size(74, 83);
            button3.TabIndex = 0;
            button3.Text = "3";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button_Click;
            // 
            // buttonSub
            // 
            buttonSub.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonSub.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            buttonSub.Location = new Point(243, 181);
            buttonSub.Name = "buttonSub";
            buttonSub.Size = new Size(74, 83);
            buttonSub.TabIndex = 0;
            buttonSub.Text = "-";
            buttonSub.UseVisualStyleBackColor = true;
            buttonSub.Click += button_Click;
            // 
            // buttonAdd
            // 
            buttonAdd.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonAdd.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            buttonAdd.Location = new Point(243, 270);
            buttonAdd.Name = "buttonAdd";
            buttonAdd.Size = new Size(74, 84);
            buttonAdd.TabIndex = 0;
            buttonAdd.Text = "+";
            buttonAdd.UseVisualStyleBackColor = true;
            buttonAdd.Click += button_Click;
            // 
            // buttonEq
            // 
            buttonEq.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonEq.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            buttonEq.Location = new Point(163, 270);
            buttonEq.Name = "buttonEq";
            buttonEq.Size = new Size(74, 84);
            buttonEq.TabIndex = 0;
            buttonEq.Text = "=";
            buttonEq.UseVisualStyleBackColor = true;
            buttonEq.Click += button_Click;
            // 
            // button0
            // 
            button0.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            button0.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            button0.Location = new Point(83, 270);
            button0.Name = "button0";
            button0.Size = new Size(74, 84);
            button0.TabIndex = 0;
            button0.Text = "0";
            button0.UseVisualStyleBackColor = true;
            button0.Click += button_Click;
            // 
            // buttonCl
            // 
            buttonCl.Anchor = AnchorStyles.Top | AnchorStyles.Bottom;
            buttonCl.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            buttonCl.Location = new Point(3, 270);
            buttonCl.Name = "buttonCl";
            buttonCl.Size = new Size(74, 84);
            buttonCl.TabIndex = 0;
            buttonCl.Text = "C";
            buttonCl.UseVisualStyleBackColor = true;
            buttonCl.Click += button_Click;
            // 
            // numberTextBox
            // 
            numberTextBox.Font = new Font("Segoe UI", 24F, FontStyle.Regular, GraphicsUnit.Point);
            numberTextBox.Location = new Point(12, 12);
            numberTextBox.Name = "numberTextBox";
            numberTextBox.Size = new Size(317, 50);
            numberTextBox.TabIndex = 1;
            // 
            // Calculator
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(344, 437);
            Controls.Add(numberTextBox);
            Controls.Add(tableLayout);
            Name = "Calculator";
            Text = "Calculator";
            tableLayout.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TableLayoutPanel tableLayout;
        private Button button7;
        private Button button8;
        private Button button9;
        private Button buttonDiv;
        private Button buttonMul;
        private Button button6;
        private Button button5;
        private Button button4;
        private Button button1;
        private Button button2;
        private Button button3;
        private Button buttonSub;
        private Button buttonAdd;
        private Button buttonEq;
        private Button button0;
        private Button buttonCl;
        private TextBox numberTextBox;
    }
}