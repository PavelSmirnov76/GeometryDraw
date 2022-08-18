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

            Task1 = new Task1(new Labs.Point(0, 0), new Labs.Point(0, 0), new Labs.Line(0, 0));

            DataContext = Task1;
        }

        public Task1 Task1 { get; set; }

        private void ButtonRunLab1Task1_Click(object sender, RoutedEventArgs e)
        {
            Task1.StartTask();
        }
    }
}



