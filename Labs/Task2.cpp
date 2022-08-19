#include "pch.h"
#include <utility>
#include "Task2.h"

bool isIntersection(Point a, Point b, Point c, Point d)
{
    if (b.x < a.x && d.x > c.x && a.x < c.x || d.x < c.x && b.x > a.x && c.x < a.x
            || c.y < d.y && a.y > b.y && c.y > a.y || d.y < c.y && a.y < b.y && c.y < a.y)
    {
        return false;
    }
    return true;
}

int completeTask2(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    return isIntersection(Point(x1, y1), Point(x2, y2), Point(x3, y3), Point(x4, y4)) ? 1:0;
}