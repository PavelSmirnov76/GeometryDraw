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
    }
    Line(Point v, Point n)
    {     
        this->v = v;
        this->n = n;
        this->a = n.y-v.y;
        this->b = v.x - n.x;
        this->c = v.x*(v.y - n.y) + v.y*(n.x - v.x);
    }

};