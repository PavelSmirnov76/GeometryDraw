using System.Windows.Data;
using System;
using System.Globalization;
using GeometryDraw.Labs;
using System.Windows.Shapes;

namespace GeometryDraw.Converters
{
    [ValueConversion(typeof(double), typeof(double))]
    public class CoordinateXConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            return Config.AxisXCenter + (double)value * Config.Step;
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            return (double)value;
        }
    }
}
