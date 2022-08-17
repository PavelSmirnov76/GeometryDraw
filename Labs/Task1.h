#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

#include "Point.h"
#include "Line.h"

enum class PointLocation
{
    secondSide = -1, onLine = 0, firstSide = 1
};

enum class ÑomparisonResult
{
    different = -1, onLine = 0, same = 1
};

extern "C" Labs_API PointLocation FindPointLocation(Point a, Line k);

extern "C" Labs_API ÑomparisonResult CompareLocations(PointLocation a, PointLocation b);