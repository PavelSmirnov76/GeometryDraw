using System.Runtime.InteropServices;

namespace GeometryDraw.Labs.Lab1
{
    public class Task1 : ITask
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

        [DllImport("Labs.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern object FindPointLocation(object a, object b);
        public void StartTask()
        {
        }
    }
}
