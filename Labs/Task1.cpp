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
