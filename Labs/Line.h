#pragma once
#include "Point.h"

struct Line
{
    double a;
    double b;
    double c;

    Point v;
    Point n;

    Line(double a, double c)
    {
        this->a = a;
        this->b = -1;
        this->c = c;
        v = Point(1, a + c);
        n = Point(0, c);
    };

    Line(Point v, Point n)
    {
        this->v = v;
        this->n = n;
        this->a = n.y - v.y;
        this->b = v.x - n.x;
        this->c = v.x * (v.y - n.y) + v.y * (n.x - v.x);
    };

    Line()
    {
        a = 0;
        b = 0;
        c = 0;
        v = Point();
        n = Point();
    }
};