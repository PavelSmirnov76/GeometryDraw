#include"Task1.h"


static class Task1
{
public:
   static PointLocation FindPointLocation(Point a, Line k)
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

   static �omparisonResult CompareLocations(PointLocation a, PointLocation b)
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
};