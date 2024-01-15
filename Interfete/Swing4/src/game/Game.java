package game;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Game extends JFrame implements ActionListener {
    private final int GridSize = 3;
    private String playerTurn;
    private JButton[][] gameGrid;
    private boolean gameOver;
    private String winnerBanner;

    public Game() {
        this.setTitle("Tic Tac Toe");
        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        gameOver = false;
        playerTurn = "X";

        JPanel gridPanel = new JPanel(new GridLayout(GridSize, GridSize, 5, 5));
        gameGrid = new JButton[GridSize][GridSize];
        for (int i = 0; i < GridSize; i++) {
            for (int j = 0; j < GridSize; j++) {
                gameGrid[i][j] = new JButton("");
                gameGrid[i][j].addActionListener(this);
                gridPanel.add(gameGrid[i][j]);
            }
        }

        this.add(gridPanel);
        this.setSize(300, 300);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        JButton button = (JButton)e.getSource();
        button.setText(playerTurn);
        button.setEnabled(false);

        checkIfDone();
        if (gameOver) {
            return;
        }

        if (playerTurn == "X") {
            playerTurn = "O";
        } else {
            playerTurn = "X";
        }
    }

    public void resetGame() {
        gameOver = false;
        playerTurn = "X";

        for (int i = 0; i < GridSize; i++) {
            for (int j = 0; j < GridSize; j++) {
                gameGrid[i][j].setEnabled(true);
                gameGrid[i][j].setText("");
            }
        }
    }

    public String getWinnerBanner() {
        return winnerBanner;
    }
    private void checkIfDone() {
        for (int i = 0; i < GridSize; i++) {
            int count = 0;
            String player = "";
            for (int j = 0; j < GridSize; j++) {
                String currentPlayer = gameGrid[i][j].getText();
                if (currentPlayer == "") {
                    break;
                }

                if (player == "") {
                    player = currentPlayer;
                }

                if (player == currentPlayer) {
                    count++;
                }
            }
            if (count == 3) {
                handleGameOver(false);
                break;
            }
        }

        for (int j = 0; j < GridSize; j++) {
            int count = 0;
            String player = "";
            for (int i = 0; i < GridSize; i++) {
                String currentPlayer = gameGrid[i][j].getText();
                if (currentPlayer == "") {
                    break;
                }

                if (player == "") {
                    player = currentPlayer;
                }

                if (player == currentPlayer) {
                    count++;
                }
            }
            if (count == 3) {
                handleGameOver(false);
                break;
            }
        }

        int count = 0;
        String player = "";
        for (int i = 0; i < GridSize; i++) {
            String currentPlayer = gameGrid[i][i].getText();
            if (currentPlayer == "") {
                break;
            }

            if (player == "") {
                player = currentPlayer;
            }

            if (player == currentPlayer) {
                count++;
            }
        }
        if (count == 3) {
            handleGameOver(false);
        }

        count = 0;
        player = "";
        for (int i = 0; i < GridSize; i++) {
            String currentPlayer = gameGrid[i][GridSize - 1 - i].getText();
            if (currentPlayer == "") {
                break;
            }

            if (player == "") {
                player = currentPlayer;
            }

            if (player == currentPlayer) {
                count++;
            }
        }
        if (count == 3) {
            handleGameOver(false);
        }

        count = 0;
        for (int i = 0; i < GridSize; i++) {
            for (int j = 0; j < GridSize; j++) {
                if (gameGrid[i][j].getText() != "") {
                    count++;
                }
            }
        }
        if (count == 9) {
            handleGameOver(true);
        }
    }

    private void handleGameOver(boolean tie) {
        gameOver = true;

        for (int i = 0; i < GridSize; i++) {
            for (int j = 0; j < GridSize; j++) {
                gameGrid[i][j].setEnabled(false);
            }
        }

        if (tie) {
            winnerBanner = "Tie";
        } else {
            winnerBanner = playerTurn + " wins";
        }

        Alert alert = new Alert(this);
        alert.setVisible(true);
    }
}
