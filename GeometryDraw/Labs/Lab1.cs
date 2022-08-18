using GeometryDraw.Labs.Lab1;
using GeometryDraw.Labs.Lab1Figures;

namespace GeometryDraw.Labs
{
    public class Lab1DataContext
    {
        public Task1 Task1 { get; set; }
        public Task2 Task2 { get; set; }

        public Task1Figures Task1Figures  { set; get; }
        public Task2Figures Task2Figures { set; get; }

        public Lab1DataContext()
        {
            Task1 = new Task1(new Point(0, 0), new Point(0, 0), new Line(0, 0));
            Task2 = new Task2(new Point(0, 0), new Point(0, 0), new Point(0, 0), new Point(0, 0));

            Task1Figures = new Task1Figures();
            Task2Figures = new Task2Figures();
        }
    }
}
