package game;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class Alert extends JFrame {

    private GuessGame game;
    private JLabel statusLabel;
    private JButton exitButton;
    private JButton continueButton;

    public Alert(GuessGame game) {
        this.game = game;

        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        statusLabel = new JLabel();
        statusLabel.setBounds(30, 30, 200, 64);
        if (game.getStatus() == GameStatus.WON) {
            statusLabel.setText("You won!");
        } else {
            statusLabel.setText("You lost!");
        }

        continueButton = new JButton();
        continueButton.setText("Continue");
        continueButton.setBounds(30, 96, 128, 32);
        continueButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                game.randomizeGuess();
                game.clearTextField();
                Alert.this.dispose();
            }
        });

        exitButton = new JButton();
        exitButton.setText("Exit");
        exitButton.setBounds(30 + 128 + 32, 96, 64, 32);
        exitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });

        this.add(statusLabel);
        this.add(exitButton);
        this.add(continueButton);

        this.setLocationRelativeTo(game);
        this.setSize(300, 192);
        this.setLayout(null);
    }
}
