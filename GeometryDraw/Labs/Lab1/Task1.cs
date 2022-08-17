namespace GeometryDraw.Labs.Lab1
{
    public class Point
    {
        public Point(double x, double y)
        {
            X = x;
            Y = y;
        }
        public double X { get; set; }
        public double Y { get; set; }
    }
    public class Line
    {
        public Line(double a, double b)
        {
            A = a;
            B = b;
        }
        public double A { get; set; }
        public double B { get; set; }
    }
    public class Task1<T> : ITask<T>
    {
        public Task1(Point pointA, Point pointB, Line line)
        {
            PointA = pointA;
            PointB = pointB;
            Line = line;
            Answer = "";
        }

        public Point? PointA { get; set; }
        public Point? PointB { get; set; }
        public Line? Line { get; set; }

        public string Answer { set; get; }

        public void StartTask()
        {
        }
    }
}
