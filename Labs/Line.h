#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

extern "C" Labs_API struct Line
{
    double a;
    double b;
    Point v;
    Point n;

    Line(double a, double b)
    {
        this->a = a;
        this->b = b;
        v = Point(1, a + b);
        n = Point(0, b);
    }
    Line(Point v, Point n)
    {     
        this->v = v;
        this->n = n;
        this->a = v.y-n.y;
        this->b = v.x*n.y - n.y*v.x;
    }

};