#pragma once
#include "Point.h"

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif#pragma once#pragma once

struct Line
{
    double a;
    double b;

    Line(double a, double b)
    {
        this->a = a;
        this->b = b;
    }
};