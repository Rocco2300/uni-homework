package calc;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculator extends JFrame implements ActionListener {
    String current;
    String register;
    char operator;

    private JPanel buttonPanel;
    private JTextField textField;
    private JButton bAdd, bSub, bDiv, bMul, bCl, bEq;
    private JButton b0, b1, b2, b3, b4, b5, b6, b7, b8, b9;

    public Calculator() {
        this.setTitle("Calculator");
        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        current = new String();
        register = new String();

        textField = new JTextField(24);
        textField.setEditable(false);

        b0 = new JButton("0");
        b1 = new JButton("1");
        b2 = new JButton("2");
        b3 = new JButton("3");
        b4 = new JButton("4");
        b5 = new JButton("5");
        b6 = new JButton("6");
        b7 = new JButton("7");
        b8 = new JButton("8");
        b9 = new JButton("9");

        bAdd = new JButton("+");
        bSub = new JButton("-");
        bDiv = new JButton("/");
        bMul = new JButton("*");

        bCl = new JButton("C");
        bEq = new JButton("=");

        b0.addActionListener(this);
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);
        b6.addActionListener(this);
        b7.addActionListener(this);
        b8.addActionListener(this);
        b9.addActionListener(this);

        bAdd.addActionListener(this);
        bSub.addActionListener(this);
        bDiv.addActionListener(this);
        bMul.addActionListener(this);

        bCl.addActionListener(this);
        bEq.addActionListener(this);

        buttonPanel = new JPanel();
        buttonPanel.setPreferredSize(new Dimension(268, 300));
        buttonPanel.setLayout(new GridLayout(4, 4, 2, 2));

        buttonPanel.add(b7);
        buttonPanel.add(b8);
        buttonPanel.add(b9);
        buttonPanel.add(bDiv);

        buttonPanel.add(b4);
        buttonPanel.add(b5);
        buttonPanel.add(b6);
        buttonPanel.add(bMul);

        buttonPanel.add(b1);
        buttonPanel.add(b2);
        buttonPanel.add(b3);
        buttonPanel.add(bSub);

        buttonPanel.add(bCl);
        buttonPanel.add(b0);
        buttonPanel.add(bEq);
        buttonPanel.add(bAdd);

        this.setLayout(new FlowLayout());
        this.add(textField);
        this.add(buttonPanel);
        this.setSize(300, 372);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        char command = e.getActionCommand().charAt(0);

        if (command >= '0' && command <= '9') {
            current += command;
        } else if (command == 'C') {
            current = "";
            register = "";
        } else if (command == '=') {
            int currentInt = Integer.parseInt(current);
            int registerInt = Integer.parseInt(register);
            int result = 0;
            switch (operator) {
            case '+':
                result = currentInt + registerInt;
                break;
            case '-':
                result = currentInt - registerInt;
                break;
            case '/':
                result = currentInt / registerInt;
                break;
            case '*':
                result = currentInt * registerInt;
                break;
            }
            current = Integer.toString(result);
        } else {
            operator = command;
            register = current;
            current = "";
        }

        textField.setText(current);
    }
}
