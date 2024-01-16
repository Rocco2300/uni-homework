package com.example.javafx4;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.stage.Stage;

import java.io.IOException;
import java.util.Random;

public class TicTacToe extends Application implements EventHandler<ActionEvent> {
    @FXML private Button button00;
    @FXML private Button button01;
    @FXML private Button button02;
    @FXML private Button button10;
    @FXML private Button button11;
    @FXML private Button button12;
    @FXML private Button button20;
    @FXML private Button button21;
    @FXML private Button button22;

    @FXML private Label winnerText;
    @FXML private Button resetButton;

    private Button[][] gameGrid;
    private final int GridSize = 3;
    private String playerTurn;
    private boolean gameOver;

    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(TicTacToe.class.getResource("tictactoe.fxml"));
        Scene scene = new Scene(fxmlLoader.load(), 320, 240);
        stage.setTitle("Tic Tac Toe!");
        stage.setScene(scene);
        stage.show();
    }

    @FXML
    public void initialize() {
        gameGrid = new Button[GridSize][GridSize];
        gameGrid[0][0] = button00;
        gameGrid[0][1] = button01;
        gameGrid[0][2] = button02;
        gameGrid[1][0] = button10;
        gameGrid[1][1] = button11;
        gameGrid[1][2] = button12;
        gameGrid[2][0] = button20;
        gameGrid[2][1] = button21;
        gameGrid[2][2] = button22;

        button00.setOnAction(this);
        button01.setOnAction(this);
        button02.setOnAction(this);
        button10.setOnAction(this);
        button11.setOnAction(this);
        button12.setOnAction(this);
        button20.setOnAction(this);
        button21.setOnAction(this);
        button22.setOnAction(this);

        gameOver = false;
        playerTurn = "X";

        resetButton.setVisible(false);
    }

    @FXML
    protected void reset() {
        gameOver = false;
        playerTurn = "X";

        for (int i = 0; i < GridSize; i++) {
            for (int j = 0; j < GridSize; j++) {
                gameGrid[i][j].setDisable(false);
                gameGrid[i][j].setText("");
            }
        }

        resetButton.setVisible(false);
        winnerText.setText("");
    }

    public static void main(String[] args) {
        launch();
    }

    @Override
    public void handle(ActionEvent actionEvent) {
        Button button = (Button) actionEvent.getSource();
        button.setText(playerTurn);
        button.setDisable(true);

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
                gameGrid[i][j].setDisable(false);
            }
        }

        String winnerBanner;
        if (tie) {
            winnerBanner = "Tie";
        } else {
            winnerBanner = playerTurn + " wins";
        }

        winnerText.setText(winnerBanner);
        resetButton.setVisible(true);
    }
}