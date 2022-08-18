#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

#include "Point.h"
#include "Line.h"

extern "C" Labs_API bool checkIntersection(Point a, Point b, Point c, Point d);

extern "C" Labs_API bool completeTask2(double x1, double y1, double x2, double y2, 
	double x3, double y3, double x4, double y4);