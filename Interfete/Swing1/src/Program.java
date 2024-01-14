import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class Program {
    static final int FrameWidth = 480;
    static final int FrameHeight = 360;
    static final int ButtonWidth = 128;
    static final int ButtonHeight = 32;
    static final int ButtonPadding = 32;

    public static void main(String args[]) {
        JFrame frame = new JFrame("Switch");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        final int ButtonY = FrameHeight / 2 - ButtonHeight;
        JButton button1 = new JButton("Color 1");
        button1.setBounds(FrameWidth / 2 - ButtonWidth - ButtonPadding, ButtonY, ButtonWidth, ButtonHeight);
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.getContentPane().setBackground(new Color(211, 110, 112));
            }
        });
        frame.add(button1);

        JButton button2 = new JButton("Color 2");
        button2.setBounds(FrameWidth / 2 + ButtonPadding, ButtonY, ButtonWidth, ButtonHeight);
        button2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.getContentPane().setBackground(new Color(59, 131, 189));
            }
        });
        frame.add(button2);

        frame.setSize(FrameWidth, FrameHeight);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}
