using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace GeometryDraw.Labs.Lab1
{
    public class Task3 : ITask, INotifyPropertyChanged
    {
        private string answer;
        public Task3(Point pointA, Point pointB, Point pointC, Point pointD)
        {
            PointA = pointA;
            PointB = pointB;
            PointC = pointC;
            PointD = pointD;
            answer = "";
        }

        public Point PointA { get; set; }
        public Point PointB { get; set; }
        public Point PointC { get; set; }
        public Point PointD { get; set; }

        public string Answer
        {
            set
            {
                answer = value;
                OnPropertyChanged("Answer");
            }
            get
            {
                return answer;
            }
        }

        public event PropertyChangedEventHandler? PropertyChanged;
        public void OnPropertyChanged([CallerMemberName] string prop = "")
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(prop));
        }

        [DllImport(Config.pathLabsDll, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool completeTask3(double x1, double y1, double x2, double y2,
                                                double x3, double y3, double x4, double y4);
        public void StartTask()
        {
            switch (completeTask3(PointA.X, PointA.Y, PointB.X, PointB.Y,
                                                        PointC.X, PointC.Y, PointD.X, PointD.Y))
            {
                case true:
                    Answer = "InAngle";
                    break;
                case false:
                    Answer = "NotInAngle";
                    break;
            }
        }
    }
}
