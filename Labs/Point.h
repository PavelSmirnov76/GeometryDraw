#pragma once

struct Point
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
        x = 0;
        y = 0;
        z = 0;
    }
};


