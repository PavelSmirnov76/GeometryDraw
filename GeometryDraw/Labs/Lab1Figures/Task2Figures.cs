using System.Threading.Tasks;
using System.Windows.Media;
using System.Windows.Shapes;

namespace GeometryDraw.Labs.Lab1Figures
{
    public class Task2Figures
    {
        public Task2Figures()
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

            PointC = new Ellipse()
            {
                Width = 5,
                Height = 5,
                Stroke = Brushes.Red,
                StrokeThickness = 4
            };

            PointD = new Ellipse()
            {
                Width = 5,
                Height = 5,
                Stroke = Brushes.Red,
                StrokeThickness = 4
            };

            LineAB = new System.Windows.Shapes.Line()
            {
                Stroke = Brushes.Green,
                StrokeThickness = 2
            };

            LineCD = new System.Windows.Shapes.Line()
            {
                Stroke = Brushes.Green,
                StrokeThickness = 2
            };
        }

        public Ellipse PointA { private set; get; }
        public Ellipse PointB { private set; get; }
        public Ellipse PointC { private set; get; }
        public Ellipse PointD { private set; get; }
        public System.Windows.Shapes.Line LineAB { private set; get; }
        public System.Windows.Shapes.Line LineCD { private set; get; }
    }
}
