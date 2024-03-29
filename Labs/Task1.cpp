#include "pch.h"
#include <utility>
#include "Task1.h"

bool isPlane(Point a, Point b, Point c, Point d)
{
    return (d.x - a.x) * (b.y - a.y) * (c.z - a.z)
        + (d.y - a.y) * (b.z - a.z) * (c.x - a.x)
        + (d.z - a.z) * (b.x - a.x) * (c.y - a.y)
        - (d.z - a.z) * (b.y - a.y) * (c.x - a.x)
        - (d.y - a.y) * (b.x - a.x) * (c.z - a.z)
        - (d.x - a.x) * (b.z - a.z) * (c.y - a.y) == 0;
}

ŅomparisonResult CompareLocations(PointLocation a, PointLocation b)
{
    if (a == PointLocation::onLine && b == PointLocation::onLine)
    {
        return ŅomparisonResult::onLine;
    }

    if (a != b && a != PointLocation::onLine && b != PointLocation::onLine)
    {
        return ŅomparisonResult::different;
    }

    return ŅomparisonResult::same;
}

int CompleteTask1(double x1, double y1, double x2, double y2, double a, double b)
{
    return (int)CompareLocations(FindPointLocation(Point(x1, y1), Line(a, b)),
                                    FindPointLocation(Point(x2, y2), Line(a, b)));
}


