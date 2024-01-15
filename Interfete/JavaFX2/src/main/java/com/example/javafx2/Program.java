package com.example.javafx2;

import javafx.application.Application;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

import java.io.IOException;
import java.util.Random;

public class Program extends Application {
    @FXML
    private TextField guessField;
    @FXML
    private Button continueButton;

    private int guess;

    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(Program.class.getResource("program.fxml"));
        Scene scene = new Scene(fxmlLoader.load(), 320, 240);
        stage.setTitle("Guess Game");
        stage.setScene(scene);
        stage.show();
    }

    @FXML
    protected void onSubmit() {
        Random rand = new Random();
        guess = rand.nextInt(6) + 1;

        if (Integer.parseInt(guessField.getText()) == guess) {
            try {
                FXMLLoader fxmlLoader = new FXMLLoader(Program.class.getResource("alert.fxml"));
                Scene scene = new Scene(fxmlLoader.load(), 320, 240);
                Stage stage = new Stage();
                stage.setTitle("Alert!");
                stage.setScene(scene);
                stage.show();
            } catch(IOException e) {
                System.out.println("OOPS!");
            }
        }

        guessField.clear();
    }

    @FXML
    protected void onContinue() {
        Stage stage = (Stage) continueButton.getScene().getWindow();
        stage.close();
    }

    @FXML
    protected void onQuit() {
        System.exit(0);
    }

    public static void main(String[] args) {
        launch();
    }
}