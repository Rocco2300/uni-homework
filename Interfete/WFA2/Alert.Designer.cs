namespace WFA2
{
    partial class Alert
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
            continueButton = new Button();
            exitButton = new Button();
            guessStatusLabel = new Label();
            SuspendLayout();
            // 
            // continueButton
            // 
            continueButton.Location = new Point(73, 100);
            continueButton.Name = "continueButton";
            continueButton.Size = new Size(75, 23);
            continueButton.TabIndex = 0;
            continueButton.Text = "Continue";
            continueButton.UseVisualStyleBackColor = true;
            continueButton.Click += continueButton_Click;
            // 
            // exitButton
            // 
            exitButton.Location = new Point(173, 100);
            exitButton.Name = "exitButton";
            exitButton.Size = new Size(75, 23);
            exitButton.TabIndex = 1;
            exitButton.Text = "Exit";
            exitButton.UseVisualStyleBackColor = true;
            exitButton.Click += exitButton_Click;
            // 
            // guessStatusLabel
            // 
            guessStatusLabel.AutoSize = true;
            guessStatusLabel.Font = new Font("Segoe UI", 16F, FontStyle.Regular, GraphicsUnit.Point);
            guessStatusLabel.Location = new Point(51, 40);
            guessStatusLabel.Name = "guessStatusLabel";
            guessStatusLabel.Size = new Size(230, 30);
            guessStatusLabel.TabIndex = 2;
            guessStatusLabel.Text = "You guessed correctly!";
            // 
            // Alert
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(344, 201);
            Controls.Add(guessStatusLabel);
            Controls.Add(exitButton);
            Controls.Add(continueButton);
            Name = "Alert";
            Text = "Alert";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button continueButton;
        private Button exitButton;
        private Label guessStatusLabel;
    }
}