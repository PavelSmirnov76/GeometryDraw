﻿using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace GeometryDraw.Labs.Lab1
{
    internal enum СomparisonResult
    {
        different = -1, 
        onLine = 0, 
        same = 1
    }

    public class Task1 : ITask, INotifyPropertyChanged
    {
        private string answer;
        public Task1(Point pointA, Point pointB, Line line)
        {
            PointA = pointA;
            PointB = pointB;
            Line = line;
            answer = "";
        }

        public Point PointA { get; set; }
        public Point PointB { get; set; }
        public Line Line { get; set; }

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
        private static extern int CompleteTask1(double x1, double y1, double x2, double y2, double a, double b);
        public void StartTask()
        {          
            switch ((СomparisonResult)CompleteTask1(PointA.X, PointA.Y, PointB.X, PointB.Y, Line.A, Line.B))
            {
                case СomparisonResult.different:
                    Answer = "different";
                    break;
                case СomparisonResult.onLine:
                    Answer = "online";
                    break;
                case СomparisonResult.same:
                    Answer = "same";
                    break;
            }
        }
    }
}
