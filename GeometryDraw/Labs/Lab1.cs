using GeometryDraw.Labs.Lab1;

namespace GeometryDraw.Labs
{
    public class Lab1DataContext
    {
        public Task1 Task1 { get; set; }
        public Task2 Task2 { get; set; }

        public Lab1DataContext()
        {
            Task1 = new Task1(new Point(0, 0), new Point(0, 0), new Line(0, 0));
            Task2 = new Task2(new Point(0, 0), new Point(0, 0), new Point(0, 0), new Point(0, 0));
        }
    }
}
