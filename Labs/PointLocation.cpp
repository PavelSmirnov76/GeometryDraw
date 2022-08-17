#include "pch.h"
#include <utility>
#include "PointLocation.h"

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