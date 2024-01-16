using Microsoft.Win32;

namespace WFA3
{
    public partial class Calculator : Form
    {
        char op;
        string current;
        string register;
        public Calculator()
        {
            InitializeComponent();
        }

        private void button_Click(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            string data = button.Text;
            char command = data[0];

            if (command >= '0' && command <= '9')
            {
                current += command;
            }
            else if (command == 'C')
            {
                current = "";
                register = "";
            }
            else if (command == '=')
            {
                int currentInt = 0, registerInt = 0;
                Int32.TryParse(current, out currentInt);
                Int32.TryParse(register, out registerInt);
                int result = 0;
                switch (op)
                {
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

                current = result.ToString();
            }
            else
            {
                op = command;
                register = current;
                current = "";
            }

            numberTextBox.Text = current;
        }
    }
}