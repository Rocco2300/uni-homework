package game;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;
import javax.swing.*;

public class GuessGame extends JFrame {
    private JLabel guessLabel;
    private JButton submitButton;
    private JTextField guessField;

    private int currentGuess;
    private GameStatus status;

    public GuessGame() {
        this.setTitle("Guess Game");
        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        randomizeGuess();

        guessLabel = new JLabel("Guess the number I am thinking of! (1-6)");
        guessLabel.setBounds(30, 30, 256, 64);

        submitButton = new JButton();
        submitButton.setText("Submit");
        submitButton.setBounds(30, 200, 128, 32);

        guessField = new JTextField(16);
        guessField.setBounds(30, 120, 200, 32);
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if (currentGuess == Integer.parseInt(guessField.getText())) {
                    status = GameStatus.WON;
                } else {
                    status = GameStatus.LOST;
                }

                System.out.println(currentGuess);

                Alert alert = new Alert(GuessGame.this);
                alert.setVisible(true);
            }
        });

        this.add(guessLabel);
        this.add(guessField);
        this.add(submitButton);

        this.setSize(300, 300);
        this.setLayout(null);
    }

    public GameStatus getStatus() {
        return status;
    }

    public void randomizeGuess() {
        // Generate a number between 1 and 6
        Random rand = new Random();
        currentGuess = rand.nextInt(6) + 1;
    }
}
