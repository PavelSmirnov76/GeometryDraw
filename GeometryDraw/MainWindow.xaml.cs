using System.Windows;
using GeometryDraw.Labs.Lab1;

namespace GeometryDraw
{
    public partial class MainWindow : Window
    {
        const double AxisXCenter = 200;
        const double AxisYCenter = 300;

        public MainWindow()
        {
            InitializeComponent();

            Task1 = new Task1<int>(new Labs.Lab1.Point(0, 0), new Labs.Lab1.Point(0, 0), new Line(0, 0));

            DataContext = Task1;
        }

        public Task1<int> Task1 { get; set; }

        private void ButtonRunLab1Task1_Click(object sender, RoutedEventArgs e)
        {
        }
    }
}



