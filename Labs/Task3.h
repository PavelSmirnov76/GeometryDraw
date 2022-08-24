#pragma once

#ifdef Labs_EXPORTS
#define Labs_API __declspec(dllexport)
#else
#define Labs_API __declspec(dllimport)
#endif

#include "Point.h"

extern "C" Labs_API bool isPlane(Point a, Point b, Point c, Point d);// ��������� � ����� ���������?

extern "C" Labs_API bool inAngle(Point a, Point b, Point c, Point d);// ����� ������ ����?

extern "C" Labs_API int completeTask3(double x1, double y1, double z1, double x2, double y2, double z2,
										double x3, double y3, double z3, double x4, double y4, double z4);