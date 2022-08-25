#include "pch.h"
#include <utility>
#include "Task3.h"
#include "PointLocation.h"

 bool isPlane(Point a, Point b, Point c, Point d)
{
	 return (d.x - a.x) * (b.y - a.y) * (c.z - a.z)
			 + (d.y - a.y) * (b.z - a.z) * (c.x - a.x)
			 + (d.z - a.z) * (b.x - a.x) * (c.y - a.y)
			 - (d.z - a.z) * (b.y - a.y) * (c.x - a.x)
			 - (d.y - a.y) * (b.x - a.x) * (c.z - a.z)
			 - (d.x - a.x) * (b.z - a.z) * (c.y - a.y) == 0;

}

 double angle_point(Point a, Point b, Point c)
 {
	 double x1 = a.x - b.x, x2 = c.x - b.x;
	 double y1 = a.y - b.y, y2 = c.y - b.y;
	 double d1 = sqrt(x1 * x1 + y1 * y1);
	 double d2 = sqrt(x2 * x2 + y2 * y2);
	 return acos((x1 * x2 + y1 * y2) / (d1 * d2));
 }

bool inAngle(Point a, Point b, Point c, Point d)
{	
	double abc = angle_point(a, b, c);
	double abd = angle_point(a, b, d);
	double dbc = angle_point(d, b, c);
	if (round(abc - abd - dbc) / 1000000 == 0)
	{
		return true;
	}
	return false;
}

  int completeTask3(double x1, double y1, double z1, double x2, double y2, double z2,
					double x3, double y3, double z3, double x4, double y4, double z4)
 {
	  Point a = Point(x1, y1, z1);
	  Point b = Point(x2, y2, z2);
	  Point c = Point(x3, y3, z3);
	  Point d = Point(x4, y4, z4);

	  if (isPlane(a, b, c, d))
	  {
		 return inAngle(a, b, c, d);
	  }

	  return  false;
 }

