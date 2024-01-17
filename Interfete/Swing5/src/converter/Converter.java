package converter;

import javax.swing.*;
import java.awt.*;

public class Converter extends JFrame {
    private JTextField celsiusField;
    private JTextField fahrenheitField;
    private JTextField kilometerField;
    private JTextField mileField;

    public Converter() {
        this.setTitle("Converter");
        this.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        this.setSize(300, 300);

        JTabbedPane pane = new JTabbedPane();
        JPanel tab1 = new JPanel(new FlowLayout());
        JPanel tab2 = new JPanel(new FlowLayout());

        JButton convertTemp = new JButton("Convert");
        JButton convertDist = new JButton("Convert");
        JLabel celsiusLabel = new JLabel("Celsius");
        celsiusField = new JTextField(16);
        JLabel fahrenheitLabel = new JLabel("Fahrenheit");
        fahrenheitField = new JTextField(16);
        JLabel kilometerLabel = new JLabel("Kilometers");
        kilometerField = new JTextField(16);
        JLabel mileLabel = new JLabel("Miles");
        mileField = new JTextField(16);

        convertTemp.addActionListener(new TemperatureConverter(celsiusField, fahrenheitField));
        convertDist.addActionListener(new DistanceConverter(kilometerField, mileField));

        tab1.add(celsiusLabel);
        tab1.add(celsiusField);
        tab1.add(fahrenheitLabel);
        tab1.add(fahrenheitField);
        tab1.add(convertTemp);

        tab2.add(kilometerLabel);
        tab2.add(kilometerField);
        tab2.add(mileLabel);
        tab2.add(mileField);
        tab2.add(convertDist);

        pane.addTab("Temperature", null, tab1, "Temperature Converter");
        pane.addTab("Distance", null, tab2, "Distance Converter");
        this.add(pane);
    }
}
