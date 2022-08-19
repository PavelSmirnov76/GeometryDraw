#include "pch.h"
#include <utility>
#include "PointLocation.h"

PointLocation FindPointLocation(Point a, Line k)
{
    if (a.x * k.a + k.b * a.y + k.c > 0)
    {
        return PointLocation::rightSide;
    }

    if (a.x * k.a + k.b * a.y + k.c < 0)
    {
        return PointLocation::leftSide;
    }

    return PointLocation::onLine;
}