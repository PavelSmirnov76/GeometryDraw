#include "pch.h"
#include <utility>
#include "Task2.h"

bool checkIntersection(Point a, Point b, Point c, Point d)
{
    if (b.x < a.x && d.x > c.x && a.x < c.x || d.x < c.x && b.x > a.x && c.x < a.x
            || c.y < d.y && a.y > b.y && c.y > a.y || d.y < c.y && a.y < b.y && c.y < a.y)
    {
        return false;
    }
    return true;
}

bool completeTask2(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    return checkIntersection(Point(x1, y1), Point(x2, y2), Point(x3, y3), Point(x4, y4));
}