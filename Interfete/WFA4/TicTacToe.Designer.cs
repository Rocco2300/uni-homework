namespace WFA4
{
    partial class TicTacToe
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
            gameBoard = new TableLayoutPanel();
            gameButton1 = new Button();
            gameButton2 = new Button();
            gameButton3 = new Button();
            gameButton4 = new Button();
            gameButton5 = new Button();
            gameButton6 = new Button();
            gameButton7 = new Button();
            gameButton8 = new Button();
            gameButton9 = new Button();
            playAgainButton = new Button();
            statusLabel = new Label();
            gameBoard.SuspendLayout();
            SuspendLayout();
            // 
            // gameBoard
            // 
            gameBoard.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameBoard.ColumnCount = 3;
            gameBoard.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 33.3333321F));
            gameBoard.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 33.3333321F));
            gameBoard.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 33.3333321F));
            gameBoard.Controls.Add(gameButton1, 0, 0);
            gameBoard.Controls.Add(gameButton2, 1, 0);
            gameBoard.Controls.Add(gameButton3, 2, 0);
            gameBoard.Controls.Add(gameButton4, 0, 1);
            gameBoard.Controls.Add(gameButton5, 1, 1);
            gameBoard.Controls.Add(gameButton6, 2, 1);
            gameBoard.Controls.Add(gameButton7, 0, 2);
            gameBoard.Controls.Add(gameButton8, 1, 2);
            gameBoard.Controls.Add(gameButton9, 2, 2);
            gameBoard.Location = new Point(51, 78);
            gameBoard.Name = "gameBoard";
            gameBoard.RowCount = 3;
            gameBoard.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            gameBoard.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            gameBoard.RowStyles.Add(new RowStyle(SizeType.Percent, 33.3333321F));
            gameBoard.Size = new Size(300, 300);
            gameBoard.TabIndex = 0;
            // 
            // gameButton1
            // 
            gameButton1.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton1.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton1.Location = new Point(3, 4);
            gameButton1.Name = "gameButton1";
            gameButton1.Size = new Size(94, 92);
            gameButton1.TabIndex = 0;
            gameButton1.UseVisualStyleBackColor = true;
            gameButton1.Click += gameButton_Click;
            // 
            // gameButton2
            // 
            gameButton2.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton2.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton2.Location = new Point(103, 4);
            gameButton2.Name = "gameButton2";
            gameButton2.Size = new Size(94, 92);
            gameButton2.TabIndex = 0;
            gameButton2.UseVisualStyleBackColor = true;
            gameButton2.Click += gameButton_Click;
            // 
            // gameButton3
            // 
            gameButton3.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton3.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton3.Location = new Point(203, 4);
            gameButton3.Name = "gameButton3";
            gameButton3.Size = new Size(94, 92);
            gameButton3.TabIndex = 0;
            gameButton3.UseVisualStyleBackColor = true;
            gameButton3.Click += gameButton_Click;
            // 
            // gameButton4
            // 
            gameButton4.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton4.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton4.Location = new Point(3, 104);
            gameButton4.Name = "gameButton4";
            gameButton4.Size = new Size(94, 92);
            gameButton4.TabIndex = 0;
            gameButton4.UseVisualStyleBackColor = true;
            gameButton4.Click += gameButton_Click;
            // 
            // gameButton5
            // 
            gameButton5.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton5.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton5.Location = new Point(103, 104);
            gameButton5.Name = "gameButton5";
            gameButton5.Size = new Size(94, 92);
            gameButton5.TabIndex = 0;
            gameButton5.UseVisualStyleBackColor = true;
            gameButton5.Click += gameButton_Click;
            // 
            // gameButton6
            // 
            gameButton6.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton6.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton6.Location = new Point(203, 104);
            gameButton6.Name = "gameButton6";
            gameButton6.Size = new Size(94, 92);
            gameButton6.TabIndex = 0;
            gameButton6.UseVisualStyleBackColor = true;
            gameButton6.Click += gameButton_Click;
            // 
            // gameButton7
            // 
            gameButton7.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton7.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton7.Location = new Point(3, 204);
            gameButton7.Name = "gameButton7";
            gameButton7.Size = new Size(94, 92);
            gameButton7.TabIndex = 0;
            gameButton7.UseVisualStyleBackColor = true;
            gameButton7.Click += gameButton_Click;
            // 
            // gameButton8
            // 
            gameButton8.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton8.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton8.Location = new Point(103, 204);
            gameButton8.Name = "gameButton8";
            gameButton8.Size = new Size(94, 92);
            gameButton8.TabIndex = 0;
            gameButton8.UseVisualStyleBackColor = true;
            gameButton8.Click += gameButton_Click;
            // 
            // gameButton9
            // 
            gameButton9.Anchor = AnchorStyles.Left | AnchorStyles.Right;
            gameButton9.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            gameButton9.Location = new Point(203, 204);
            gameButton9.Name = "gameButton9";
            gameButton9.Size = new Size(94, 92);
            gameButton9.TabIndex = 0;
            gameButton9.UseVisualStyleBackColor = true;
            gameButton9.Click += gameButton_Click;
            // 
            // playAgainButton
            // 
            playAgainButton.Enabled = false;
            playAgainButton.Font = new Font("Segoe UI", 16F, FontStyle.Regular, GraphicsUnit.Point);
            playAgainButton.Location = new Point(132, 400);
            playAgainButton.Name = "playAgainButton";
            playAgainButton.Size = new Size(138, 38);
            playAgainButton.TabIndex = 1;
            playAgainButton.Text = "Play Again";
            playAgainButton.UseVisualStyleBackColor = true;
            playAgainButton.Visible = false;
            playAgainButton.Click += playAgain_Click;
            // 
            // statusLabel
            // 
            statusLabel.AutoSize = true;
            statusLabel.Font = new Font("Segoe UI", 16F, FontStyle.Regular, GraphicsUnit.Point);
            statusLabel.Location = new Point(157, 26);
            statusLabel.Name = "statusLabel";
            statusLabel.Size = new Size(90, 30);
            statusLabel.TabIndex = 2;
            statusLabel.Text = "X's Turn";
            // 
            // TicTacToe
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(409, 450);
            Controls.Add(statusLabel);
            Controls.Add(playAgainButton);
            Controls.Add(gameBoard);
            Name = "TicTacToe";
            Text = "Tic Tac Toe";
            gameBoard.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TableLayoutPanel gameBoard;
        private Button gameButton1;
        private Button gameButton2;
        private Button gameButton3;
        private Button gameButton4;
        private Button gameButton5;
        private Button gameButton6;
        private Button gameButton7;
        private Button gameButton8;
        private Button gameButton9;
        private Button playAgainButton;
        private Label statusLabel;
    }
}