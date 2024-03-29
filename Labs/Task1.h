#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

#include "PointLocation.h"

enum class ŅomparisonResult
{
    different = -1, onLine = 0, same = 1
};

extern "C" Labs_API ŅomparisonResult CompareLocations(PointLocation a, PointLocation b);

extern "C" Labs_API int CompleteTask1(double x1, double y1, double x2, double y2, double a, double b);

