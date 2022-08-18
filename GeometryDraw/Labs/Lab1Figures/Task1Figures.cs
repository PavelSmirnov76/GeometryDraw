using System.Windows.Media;
using System.Windows.Shapes;

namespace GeometryDraw.Labs.Lab1Figures
{
    public class Task1Figures
    {
        public Task1Figures()
        {
            PointA = new Ellipse()
            {
                Width = 5,
                Height = 5,
                Stroke = Brushes.Red,
                StrokeThickness = 4
            };

            PointB = new Ellipse()
            {
                Width = 5,
                Height = 5,
                Stroke = Brushes.Red,
                StrokeThickness = 4
            };

            Line = new System.Windows.Shapes.Line()
            {
                X1 = 0,
                Y1 = 0,
                X2 = 0,
                Y2 = 0,
                Stroke = Brushes.Green
            };
        }

        public Ellipse PointA { private set; get; }
        public Ellipse PointB { private set; get; }
        public System.Windows.Shapes.Line Line { private set; get; }
    }
}
