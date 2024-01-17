using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WFA5
{
    public partial class Converter : Form
    {
        public Converter()
        {
            InitializeComponent();
        }

        private void celsiusToFarenheit_Click(object sender, EventArgs e)
        {
            float celsius = 0.0f;
            bool success = float.TryParse(celsiusTextBox.Text, out celsius);

            if (success)
            {
                float farenheit = celsius * 9 / 5 + 32;
                farenheitTextBox.Text = String.Format("{0:0.0}", farenheit);
            }
        }

        private void farenheitToCelsius_Click(object sender, EventArgs e)
        {
            float farenheit = 0.0f;
            bool success = float.TryParse(farenheitTextBox.Text, out farenheit);

            if (success)
            {
                float celsius = 5.0f / 9.0f * (farenheit - 32);

                celsiusTextBox.Text = String.Format("{0:0.0}", celsius);
            }
        }

        private void kilometerToMiles_Click(object sender, EventArgs e)
        {
            float kilometer = 0.0f;
            bool success = float.TryParse(kilometerTextBox.Text, out kilometer);

            if (success)
            {
                float miles = kilometer * 0.621371f;
                milesTextBox.Text = String.Format("{0:0.0}", miles);
            }
        }

        private void milesToKilometer_Click(object sender, EventArgs e)
        {
            float miles = 0.0f;
            bool success = float.TryParse(milesTextBox.Text, out miles);

            if (success)
            {
                float kilometer = miles * 1.60934f;
                kilometerTextBox.Text = String.Format("{0:0.0}", kilometer);
            }
        }
    }
}
