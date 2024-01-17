package converter;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class TemperatureConverter implements ActionListener {
    private JTextField celsiusField;
    private JTextField fahrenheitField;
    public TemperatureConverter(JTextField celsiusField, JTextField fahrenheitField) {
        this.celsiusField = celsiusField;
        this.fahrenheitField = fahrenheitField;
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        float celsius = Float.parseFloat(celsiusField.getText());
        float fahrenheit = celsius * 9 / 5 + 32;
        fahrenheitField.setText(Float.toString(fahrenheit));
    }
}
