#include "pch.h"
#include <utility>
#include "Task1.h"

PointLocation FindPointLocation(Point a, Line k)
{
    if (a.x * k.a - a.y + k.b > 0)
    {
        return PointLocation::firstSide;
    }

    if (a.x * k.a - a.y + k.b < 0)
    {
        return PointLocation::secondSide;
    }

    return PointLocation::onLine;
}

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

�omparisonResult CompleteTask1(Point a, Point b, Line k)
{
    return CompareLocations(FindPointLocation(a,k), FindPointLocation(b, k));
}

