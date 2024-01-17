package converter;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class DistanceConverter implements ActionListener {
    private JTextField kmField;
    private JTextField mileField;
    public DistanceConverter(JTextField kmField, JTextField mileField) {
        this.kmField = kmField;
        this.mileField = mileField;
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        float kilometers = Float.parseFloat(kmField.getText());
        float miles = kilometers * 0.621371f;
        mileField.setText(Float.toString(miles));
    }
}
