using System.ComponentModel;
using System.Runtime.CompilerServices;

namespace GeometryDraw.Labs
{
    public class Line: INotifyPropertyChanged
    {
        private double a;
        private double b;
        private double x1;
        private double y1;
        private double x2;
        private double y2;

        public Line(double a, double b)
        {
            A = a;
            B = b;
        }

        public double A 
        {
            get
            {
                return a;
            }
            set
            {                
                a = value;
                ChangeCoordinate();
            }
        }

        public double B
        {
            get
            {
                return b;
            }
            set
            {               
                b = value;
                ChangeCoordinate();
            }
        }

        public double X1
        {
            set
            {
                x1 = value;
                OnPropertyChanged("X1");
            }
            get
            {
                return x1;
            }
        }

        public double Y1
        {
            set
            {
                y1 = value;
                OnPropertyChanged("Y1");
            }
            get
            {
                return y1;
            }
        }

        public double X2
        {
            set
            {
                x2 = value;
                OnPropertyChanged("X2");
            }
            get
            {
                return x2;
            }
        }

        public double Y2
        {
            set
            {
                y2 = value;
                OnPropertyChanged("Y2");
            }
            get
            {
                return y2;
            }
        }

        public event PropertyChangedEventHandler? PropertyChanged;

        public void OnPropertyChanged([CallerMemberName] string prop = "")
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(prop));
        }

        private void ChangeCoordinate()
        {
            X1 = -Config.AxisXCenter / Config.Step;
            Y1 = a * X1 + b;
            X2 = Config.AxisXCenter / Config.Step;
            Y2 = a * X2 + b;
        }
    }
}
