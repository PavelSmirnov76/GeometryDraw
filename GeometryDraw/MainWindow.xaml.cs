using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Shapes;
using GeometryDraw.Labs.Lab1;
using GeometryDraw.Labs;
using GeometryDraw.Labs.Lab1Figures;
using System;
using System.Windows.Ink;

namespace GeometryDraw
{
    public partial class MainWindow : Window
    {
        const double AxisXCenter = 250;
        const double AxisYCenter = 250;
        const double Step = 10;

        public MainWindow()
        {
            InitializeComponent();

            DrawCoordinateSystem();           
            Lab1DataContext = new Lab1DataContext();

            DataContext = Lab1DataContext;
        }
        public Lab1DataContext Lab1DataContext { get; set; }

        private void DrawCoordinateSystem()
        {
            CoordinateSystem.Children.Clear();

            var AxisX = new System.Windows.Shapes.Line()
            {
                X1 = 250,
                Y1 = 0,
                X2 = 250,
                Y2 = 500,
                Stroke = Brushes.Black
            };
            var AxisY = new System.Windows.Shapes.Line()
            {
                X1 = 0,
                Y1 = 250,
                X2 = 500,
                Y2 = 250,
                Stroke = Brushes.Black
            };

            CoordinateSystem.Children.Add(AxisX);
            CoordinateSystem.Children.Add(AxisY);
        }

        private void ButtonRunLab1Task1_Click(object sender, RoutedEventArgs e)
        {
            DrawCoordinateSystem();
            Lab1DataContext.Task1.StartTask();
            DrawTask1();
        }

        private void ButtonRunLab1Task2_Click(object sender, RoutedEventArgs e)
        {
            DrawCoordinateSystem();
            Lab1DataContext.Task2.StartTask();
            DrawTask2();
        }

        public void DrawTask1()
        {
            DrawEllipse(Lab1DataContext.Task1Figures.PointA, Lab1DataContext.Task1.PointA.X, Lab1DataContext.Task1.PointA.Y);
            DrawEllipse(Lab1DataContext.Task1Figures.PointB, Lab1DataContext.Task1.PointB.X, Lab1DataContext.Task1.PointB.Y);
            DrawLine(Lab1DataContext.Task1Figures.Line, Lab1DataContext.Task1.Line.A, Lab1DataContext.Task1.Line.B);

            CoordinateSystem.Children.Add(Lab1DataContext.Task1Figures.PointA);
            CoordinateSystem.Children.Add(Lab1DataContext.Task1Figures.PointB);
            CoordinateSystem.Children.Add(Lab1DataContext.Task1Figures.Line);
        }
        public void DrawTask2()
        {
            DrawEllipse(Lab1DataContext.Task2Figures.PointA, Lab1DataContext.Task2.PointA.X, Lab1DataContext.Task2.PointA.Y);
            DrawEllipse(Lab1DataContext.Task2Figures.PointC, Lab1DataContext.Task2.PointC.X, Lab1DataContext.Task2.PointC.Y);
            DrawLine(Lab1DataContext.Task2Figures.LineAB, Lab1DataContext.Task2.PointA.X, Lab1DataContext.Task2.PointA.Y,
                                                        Lab1DataContext.Task2.PointB.X, Lab1DataContext.Task2.PointB.Y);
            DrawLine(Lab1DataContext.Task2Figures.LineCD, Lab1DataContext.Task2.PointC.X, Lab1DataContext.Task2.PointC.Y,
                                                        Lab1DataContext.Task2.PointD.X, Lab1DataContext.Task2.PointD.Y);

            CoordinateSystem.Children.Add(Lab1DataContext.Task2Figures.PointA);
            CoordinateSystem.Children.Add(Lab1DataContext.Task2Figures.PointC);
            CoordinateSystem.Children.Add(Lab1DataContext.Task2Figures.LineAB);
            CoordinateSystem.Children.Add(Lab1DataContext.Task2Figures.LineCD);
        }
        private static void DrawEllipse(Ellipse ellipse, double x, double y)
        {
            Canvas.SetLeft(ellipse, AxisXCenter + x * Step - ellipse.Height/2);
            Canvas.SetTop(ellipse, AxisYCenter - y * Step - ellipse.Width/2);
        }
        private static void DrawLine(System.Windows.Shapes.Line line, double a, double b)
        {
            double x1 = -250;
            double y1 = a * x1 + b;
            double x2 = 250;
            double y2 = a * x2 + b;

            line.X1 = AxisXCenter + x1 * Step;
            line.Y1 = AxisYCenter - y1 * Step;
            line.X2 = AxisXCenter + x2 * Step;
            line.Y2 = AxisYCenter - y2 * Step;
        }
        private static void DrawLine(System.Windows.Shapes.Line line, double x1, double y1, double x2, double y2)
        {
            line.X1 = AxisXCenter + x1 * Step;
            line.Y1 = AxisYCenter - y1 * Step;
            line.X2 = AxisXCenter + x2 * Step;
            line.Y2 = AxisYCenter - y2 * Step;
        }
    }
}



