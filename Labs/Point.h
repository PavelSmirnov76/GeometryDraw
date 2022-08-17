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
    double z;

    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
        this->z = 0;
    }
    Point(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Point()
    {

    }
};


