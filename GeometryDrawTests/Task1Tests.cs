namespace GeometryDrawTests
{
    public class Task1Tests
    {
        [Fact]
        public void StartTaskTest_22_24_diff()
        {
            var Task1 = new Task1(new Point(2, 2), new Point(2, 4), new Line(1, 1));

            Task1.StartTask();

            Assert.Equal("different", Task1.Answer);
        }

        [Fact]
        public void StartTask1Test_23_12_onLine()
        {
            var Task1 = new Task1(new Point(2,  3), new Point(1, 2), new Line(1, 1));

            Task1.StartTask();

            Assert.Equal("online", Task1.Answer);
        }

        [Fact]
        public void StartTask1Test_22_32_Same()
        {
            var Task1 = new Task1(new Point(2, 3), new Point(3, 2), new Line(1, 1));

            Task1.StartTask();

            Assert.Equal("same", Task1.Answer);
        }
    }
}