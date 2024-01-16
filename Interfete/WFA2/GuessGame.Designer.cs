namespace WFA2
{
    partial class GuessGame
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
            guessLabel = new Label();
            textBox = new TextBox();
            submitButton = new Button();
            SuspendLayout();
            // 
            // guessLabel
            // 
            guessLabel.AutoSize = true;
            guessLabel.Font = new Font("Segoe UI", 16F, FontStyle.Regular, GraphicsUnit.Point);
            guessLabel.Location = new Point(190, 101);
            guessLabel.Name = "guessLabel";
            guessLabel.Size = new Size(409, 30);
            guessLabel.TabIndex = 0;
            guessLabel.Text = "Guess the number I am thinking of? (1-6)";
            // textBox
            // 
            textBox.Location = new Point(190, 155);
            textBox.Name = "textBox";
            textBox.Size = new Size(409, 23);
            textBox.TabIndex = 2;
            // 
            // submitButton
            // 
            submitButton.Location = new Point(343, 207);
            submitButton.Name = "submitButton";
            submitButton.Size = new Size(93, 33);
            submitButton.TabIndex = 3;
            submitButton.Text = "Submit";
            submitButton.UseVisualStyleBackColor = true;
            submitButton.Click += submitButton_Click;
            // 
            // GuessGame
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(submitButton);
            Controls.Add(textBox);
            Controls.Add(guessLabel);
            Name = "GuessGame";
            Text = "Guess Game";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label guessLabel;
        private TextBox textBox;
        private Button submitButton;
    }
}