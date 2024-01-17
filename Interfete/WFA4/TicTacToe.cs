using System;

namespace WFA4
{
    public partial class TicTacToe : Form
    {
        private const int GridSize = 3;

        private bool gameOver;
        private string playerTurn = "X";

        public TicTacToe()
        {
            InitializeComponent();

            gameOver = false;
            statusLabel.Text = playerTurn + "'s Turn";
        }

        private void gameButton_Click(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            button.Text = playerTurn;
            button.Enabled = false;

            checkIfDone();
            if (gameOver)
            {
                return;
            }

            if (playerTurn == "X")
            {
                playerTurn = "O";
            }
            else
            {
                playerTurn = "X";
            }
        }

        private void playAgain_Click(object sender, EventArgs e)
        {
            gameOver = false;
            playerTurn = "X";

            for (int i = 0; i < GridSize; i++)
            {
                for (int j = 0; j < GridSize; j++)
                {
                    gameBoard.GetControlFromPosition(i, j).Text = "";
                    gameBoard.GetControlFromPosition(i, j).Enabled = true;
                }
            }

            playAgainButton.Enabled = false;
            playAgainButton.Visible = false;
        }

        private void checkIfDone()
        {
            int count = 0;
            string player = "";
            for (int i = 0; i < GridSize; i++)
            {
                count = 0;
                player = "";
                for (int j = 0; j < GridSize; j++)
                {
                    string currentPlayer = gameBoard.GetControlFromPosition(i, j).Text;
                    if (currentPlayer == "")
                    {
                        break;
                    }

                    if (player == "")
                    {
                        player = currentPlayer;
                    }

                    if (player == currentPlayer)
                    {
                        count++;
                    }
                }
                if (count == 3)
                {
                    handleGameOver(false);
                    break;
                }
            }

            for (int j = 0; j < GridSize; j++)
            {
                count = 0;
                player = "";
                for (int i = 0; i < GridSize; i++)
                {
                    string currentPlayer = gameBoard.GetControlFromPosition(i, j).Text;
                    if (currentPlayer == "")
                    {
                        break;
                    }

                    if (player == "")
                    {
                        player = currentPlayer;
                    }

                    if (player == currentPlayer)
                    {
                        count++;
                    }
                }
                if (count == 3)
                {
                    handleGameOver(false);
                    break;
                }
            }

            count = 0;
            player = "";
            for (int i = 0; i < GridSize; i++)
            {
                string currentPlayer = gameBoard.GetControlFromPosition(i, i).Text;
                if (currentPlayer == "")
                {
                    break;
                }

                if (player == "")
                {
                    player = currentPlayer;
                }

                if (player == currentPlayer)
                {
                    count++;
                }
            }
            if (count == 3)
            {
                handleGameOver(false);
            }

            count = 0;
            player = "";
            for (int i = 0; i < GridSize; i++)
            {
                string currentPlayer = gameBoard.GetControlFromPosition(i, GridSize - 1 - i).Text;
                if (currentPlayer == "")
                {
                    break;
                }

                if (player == "")
                {
                    player = currentPlayer;
                }

                if (player == currentPlayer)
                {
                    count++;
                }
            }
            if (count == 3)
            {
                handleGameOver(false);
            }

            count = 0;
            for (int i = 0; i < GridSize; i++)
            {
                for (int j = 0; j < GridSize; j++)
                {
                    if (gameBoard.GetControlFromPosition(i, j).Text != "")
                    {
                        count++;
                    }
                }
            }
            if (count == 9)
            {
                handleGameOver(true);
            }
        }

        private void handleGameOver(bool tie)
        {
            gameOver = true;

            for (int i = 0; i < GridSize; i++)
            {
                for (int j = 0; j < GridSize; j++)
                {
                    gameBoard.GetControlFromPosition(i, j).Enabled = false;
                }
            }

            if (tie)
            {
                statusLabel.Text = "Tie";
            }
            else
            {
                statusLabel.Text = playerTurn + " wins";
            }

            playAgainButton.Enabled = true;
            playAgainButton.Visible = true;
        }
    }
}