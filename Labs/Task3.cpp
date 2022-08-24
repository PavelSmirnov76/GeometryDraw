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

 bool inAngle(Point a, Point b, Point c, Point d)
{
	 Line ab(b, a);
	 Line bc(b, c);

	if(FindPointLocation(d, ab) == PointLocation::rightSide && FindPointLocation(d, bc) == PointLocation::leftSide) // мне не нравится это место
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

