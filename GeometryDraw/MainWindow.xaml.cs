using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Shapes;
using GeometryDraw.Labs.Lab1;
using GeometryDraw.Labs;
using GeometryDraw.Labs.Lab1Figures;
using System;

namespace GeometryDraw
{
    public partial class MainWindow : Window
    {
        const double AxisXCenter = 250;
        const double AxisYCenter = 250;
        const double AxisXLong = 500;
        const double AxisYLong = 500;
        const double Step = 10;

        public MainWindow()
        {
            InitializeComponent();

            Task1 = new Task1(new Labs.Point(0, 0), new Labs.Point(0, 0), new Labs.Line(0, 0));
            Task1Figures = new Task1Figures();

            DataContext = Task1;
        }

        public Task1 Task1 { get; set; }
        public Task1Figures Task1Figures { get; set; }

        private void ButtonRunLab1Task1_Click(object sender, RoutedEventArgs e)
        {
            Task1.StartTask();
            DrawTask1();
        }

        public void DrawTask1()
        {
            DrawEllipse(Task1Figures.PointA, Task1.PointA.X, Task1.PointA.Y);
            DrawEllipse(Task1Figures.PointB, Task1.PointB.X, Task1.PointB.Y);
            DrawLine(Task1Figures.Line, Task1.Line.A, Task1.Line.B);

            if (!CoordinateSystem.Children.Contains(Task1Figures.PointA))
            {
                CoordinateSystem.Children.Add(Task1Figures.PointA);
                CoordinateSystem.Children.Add(Task1Figures.PointB);
                CoordinateSystem.Children.Add(Task1Figures.Line);
            }
        }
        private static void DrawEllipse(Ellipse ellipse, double x, double y)
        {
            Canvas.SetLeft(ellipse, AxisXCenter + x * Step - ellipse.Height/2);
            Canvas.SetTop(ellipse, AxisYCenter - y * Step - ellipse.Width/2);
        }
        private static void DrawLine(System.Windows.Shapes.Line line, double a, double b)
        {
            line.X1 = 0;
            line.Y1 = AxisYLong - b;
            line.X2 = AxisXLong;
            line.Y2 = AxisYLong - (a * AxisXLong + b);
        }
    }
}



