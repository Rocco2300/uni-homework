namespace WFA5
{
    partial class Converter
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
            distancePage = new TabPage();
            kilometerTextBox = new TextBox();
            milesTextBox = new TextBox();
            kilometerToMiles = new Button();
            milesToKilometer = new Button();
            label6 = new Label();
            label5 = new Label();
            label4 = new Label();
            temperaturePage = new TabPage();
            celsiusTextBox = new TextBox();
            farenheitTextBox = new TextBox();
            celsiusToFarenheit = new Button();
            farenheitToCelsius = new Button();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            tabControl1 = new TabControl();
            distancePage.SuspendLayout();
            temperaturePage.SuspendLayout();
            tabControl1.SuspendLayout();
            SuspendLayout();
            // 
            // distancePage
            // 
            distancePage.Controls.Add(label4);
            distancePage.Controls.Add(label5);
            distancePage.Controls.Add(label6);
            distancePage.Controls.Add(milesToKilometer);
            distancePage.Controls.Add(kilometerToMiles);
            distancePage.Controls.Add(milesTextBox);
            distancePage.Controls.Add(kilometerTextBox);
            distancePage.Location = new Point(4, 24);
            distancePage.Name = "distancePage";
            distancePage.Padding = new Padding(3);
            distancePage.Size = new Size(547, 319);
            distancePage.TabIndex = 1;
            distancePage.Text = "Distance";
            distancePage.UseVisualStyleBackColor = true;
            // 
            // kilometerTextBox
            // 
            kilometerTextBox.Location = new Point(115, 158);
            kilometerTextBox.Name = "kilometerTextBox";
            kilometerTextBox.Size = new Size(100, 23);
            kilometerTextBox.TabIndex = 7;
            // 
            // milesTextBox
            // 
            milesTextBox.Location = new Point(331, 158);
            milesTextBox.Name = "milesTextBox";
            milesTextBox.Size = new Size(100, 23);
            milesTextBox.TabIndex = 8;
            // 
            // kilometerToMiles
            // 
            kilometerToMiles.Location = new Point(177, 221);
            kilometerToMiles.Name = "kilometerToMiles";
            kilometerToMiles.Size = new Size(75, 23);
            kilometerToMiles.TabIndex = 9;
            kilometerToMiles.Text = "Km -> M";
            kilometerToMiles.UseVisualStyleBackColor = true;
            kilometerToMiles.Click += kilometerToMiles_Click;
            // 
            // milesToKilometer
            // 
            milesToKilometer.Location = new Point(288, 221);
            milesToKilometer.Name = "milesToKilometer";
            milesToKilometer.Size = new Size(75, 23);
            milesToKilometer.TabIndex = 10;
            milesToKilometer.Text = "M -> Km";
            milesToKilometer.UseVisualStyleBackColor = true;
            milesToKilometer.Click += milesToKilometer_Click;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Segoe UI", 16F, FontStyle.Regular, GraphicsUnit.Point);
            label6.Location = new Point(177, 74);
            label6.Name = "label6";
            label6.Size = new Size(197, 30);
            label6.TabIndex = 11;
            label6.Text = "Distance Converter";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(140, 140);
            label5.Name = "label5";
            label5.Size = new Size(58, 15);
            label5.TabIndex = 12;
            label5.Text = "Kilometer";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(366, 140);
            label4.Name = "label4";
            label4.Size = new Size(35, 15);
            label4.TabIndex = 13;
            label4.Text = "Miles";
            // 
            // temperaturePage
            // 
            temperaturePage.Controls.Add(label3);
            temperaturePage.Controls.Add(label2);
            temperaturePage.Controls.Add(label1);
            temperaturePage.Controls.Add(farenheitToCelsius);
            temperaturePage.Controls.Add(celsiusToFarenheit);
            temperaturePage.Controls.Add(farenheitTextBox);
            temperaturePage.Controls.Add(celsiusTextBox);
            temperaturePage.Location = new Point(4, 24);
            temperaturePage.Name = "temperaturePage";
            temperaturePage.Padding = new Padding(3);
            temperaturePage.Size = new Size(547, 319);
            temperaturePage.TabIndex = 0;
            temperaturePage.Text = "Temperature";
            temperaturePage.UseVisualStyleBackColor = true;
            // 
            // celsiusTextBox
            // 
            celsiusTextBox.Location = new Point(113, 149);
            celsiusTextBox.Name = "celsiusTextBox";
            celsiusTextBox.Size = new Size(100, 23);
            celsiusTextBox.TabIndex = 0;
            // 
            // farenheitTextBox
            // 
            farenheitTextBox.Location = new Point(329, 149);
            farenheitTextBox.Name = "farenheitTextBox";
            farenheitTextBox.Size = new Size(100, 23);
            farenheitTextBox.TabIndex = 1;
            // 
            // celsiusToFarenheit
            // 
            celsiusToFarenheit.Location = new Point(175, 212);
            celsiusToFarenheit.Name = "celsiusToFarenheit";
            celsiusToFarenheit.Size = new Size(75, 23);
            celsiusToFarenheit.TabIndex = 2;
            celsiusToFarenheit.Text = "C -> F";
            celsiusToFarenheit.UseVisualStyleBackColor = true;
            celsiusToFarenheit.Click += celsiusToFarenheit_Click;
            // 
            // farenheitToCelsius
            // 
            farenheitToCelsius.Location = new Point(286, 212);
            farenheitToCelsius.Name = "farenheitToCelsius";
            farenheitToCelsius.Size = new Size(75, 23);
            farenheitToCelsius.TabIndex = 3;
            farenheitToCelsius.Text = "F -> C";
            farenheitToCelsius.UseVisualStyleBackColor = true;
            farenheitToCelsius.Click += farenheitToCelsius_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 16F, FontStyle.Regular, GraphicsUnit.Point);
            label1.Location = new Point(153, 66);
            label1.Name = "label1";
            label1.Size = new Size(240, 30);
            label1.TabIndex = 4;
            label1.Text = "Temperature Converter";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(144, 134);
            label2.Name = "label2";
            label2.Size = new Size(44, 15);
            label2.TabIndex = 5;
            label2.Text = "Celsius";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(354, 134);
            label3.Name = "label3";
            label3.Size = new Size(56, 15);
            label3.TabIndex = 6;
            label3.Text = "Farenheit";
            // 
            // tabControl1
            // 
            tabControl1.Controls.Add(temperaturePage);
            tabControl1.Controls.Add(distancePage);
            tabControl1.Location = new Point(12, 12);
            tabControl1.Name = "tabControl1";
            tabControl1.SelectedIndex = 0;
            tabControl1.Size = new Size(555, 347);
            tabControl1.TabIndex = 2;
            // 
            // Converter
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(579, 371);
            Controls.Add(tabControl1);
            Name = "Converter";
            Text = "Converter";
            distancePage.ResumeLayout(false);
            distancePage.PerformLayout();
            temperaturePage.ResumeLayout(false);
            temperaturePage.PerformLayout();
            tabControl1.ResumeLayout(false);
            ResumeLayout(false);
        }

        #endregion

        private TabPage distancePage;
        private Label label4;
        private Label label5;
        private Label label6;
        private Button milesToKilometer;
        private Button kilometerToMiles;
        private TextBox milesTextBox;
        private TextBox kilometerTextBox;
        private TabPage temperaturePage;
        private Label label3;
        private Label label2;
        private Label label1;
        private Button farenheitToCelsius;
        private Button celsiusToFarenheit;
        private TextBox farenheitTextBox;
        private TextBox celsiusTextBox;
        private TabControl tabControl1;
    }
}