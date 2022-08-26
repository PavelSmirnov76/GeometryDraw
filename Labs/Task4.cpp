#include "pch.h"
#include <utility>
#include "Task4.h"
#include "Task1.h"
#include "PointLocation.h"

�omparisonResult CompareLocations(PointLocation a, PointLocation b)
{
    if (a == PointLocation::onLine && b == PointLocation::onLine)
    {
        return �omparisonResult::onLine;
    }

    if (a != b && a != PointLocation::onLine && b != PointLocation::onLine)
    {
        return �omparisonResult::different;
    }

    return �omparisonResult::same;
}

int CompleteTask1(double x1, double y1, double x2, double y2, double a, double b)
{
    return (int)CompareLocations(FindPointLocation(Point(x1, y1), Line(a, b)),
        FindPointLocation(Point(x2, y2), Line(a, b)));
}