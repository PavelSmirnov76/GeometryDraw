#pragma once
#include "Point.h"
#include "Line.h"

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif#pragma once#pragma once

enum class PointLocation
{
    secondSide = -1, onLine = 0, firstSide = 1
};

enum class ÑomparisonResult
{
    different = -1, onLine = 0, same = 1
};

static class Task1
{
public:
   static PointLocation FindPointLocation(Point a, Line k);

   static ÑomparisonResult CompareLocations(PointLocation a, PointLocation b);
};



