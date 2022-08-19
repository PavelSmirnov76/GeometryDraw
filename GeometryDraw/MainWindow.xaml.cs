using System.Windows;
using GeometryDraw.Labs;

namespace GeometryDraw
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent(); 
            Lab1DataContext = new Lab1DataContext();

            DataContext = Lab1DataContext;
        }
        public Lab1DataContext Lab1DataContext { get; set; }

        private void ButtonRunLab1Task1_Click(object sender, RoutedEventArgs e)
        {
            Lab1DataContext.Task1.StartTask();        
        }

        private void ButtonRunLab1Task2_Click(object sender, RoutedEventArgs e)
        {
            Lab1DataContext.Task2.StartTask();
        }
        private void ButtonRunLab1Task3_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}



