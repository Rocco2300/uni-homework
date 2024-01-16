namespace WFA2
{
    public partial class GuessGame : Form
    {
        private int secretNumber;

        public GuessGame()
        {
            InitializeComponent();

            Random rand = new Random();
            secretNumber = rand.Next() % 5 + 1;
        }

        private void submitButton_Click(object sender, EventArgs e)
        {
            int guess;
            try
            {
                guess = Int32.Parse(textBox.Text);
            }
            catch (Exception ex)
            {
                guess = -1;
            }

            if (secretNumber == guess)
            {
                Alert form = new Alert();
                form.Show();
            }

            Random rand = new Random();
            secretNumber = rand.Next() % 5 + 1;
        }
    }
}