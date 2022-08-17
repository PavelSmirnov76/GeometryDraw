#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

#include "Point.h"
#include "Line.h"
#include "PointLocation.h"

enum class �omparisonResult
{
    different = -1, onLine = 0, same = 1
};

extern "C" Labs_API �omparisonResult CompareLocations(PointLocation a, PointLocation b);

extern "C" Labs_API �omparisonResult CompleteTask1(Point a, Point b, Line k);

