#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

extern "C" Labs_API struct Point
{
    double x;
    double y;

    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
};


