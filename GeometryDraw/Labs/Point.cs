namespace GeometryDraw.Labs
{
    public class Point
    {
        public Point(double x, double y)
        {
            X = x;
            Y = y;
            Z = 0;
        }
        public Point(double x, double y, double z)
        {
            X = x;
            Y = y;
            Z = z;
        }

        public double X { set; get; }
        public double Y { set; get; }
        public double Z { set; get; }
    }
}
