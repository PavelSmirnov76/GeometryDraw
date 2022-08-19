using System.Windows.Data;
using System;
using System.Globalization;
using GeometryDraw.Labs;

namespace GeometryDraw.Converters
{
    [ValueConversion(typeof(double), typeof(double))]
    public class CoordinateYConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            return Config.AxisXCenter - (double)value * Config.Step;
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            return (double)value;
        }
    }
}