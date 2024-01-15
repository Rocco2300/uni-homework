package com.example.javafx1;

import javafx.application.Application;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.io.IOException;

public class HelloApplication extends Application {
    @FXML
    private Label welcomeText;

    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(HelloApplication.class.getResource("hello-view.fxml"));
        Scene scene = new Scene(fxmlLoader.load(), 320, 240);
        stage.setTitle("Hello!");
        stage.setScene(scene);
        stage.show();

    }

    @FXML
    protected void onButton1() {
        welcomeText.setTextFill(Color.rgb(211, 110, 112));
    }

    @FXML
    protected void onButton2() {
        welcomeText.setTextFill(Color.rgb(59, 131, 189));
    }

    public static void main(String[] args) {
        launch();
    }
}