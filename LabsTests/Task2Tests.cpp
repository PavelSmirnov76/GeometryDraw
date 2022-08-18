#include "pch.h"
#include "CppUnitTest.h"
#include "../Labs/Task2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LabsTests
{
	TEST_CLASS(Tas2Tests)
	{
	public:

		TEST_METHOD(BACD_NoIntersection)
		{
			Point a = Point(2, 1);
			Point b = Point(1, 1);
			Point c = Point(3, 1);
			Point d = Point(4, 1);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsFalse(actual);
		}

		TEST_METHOD(BCAD_Intersection)
		{
			Point a = Point(3, 1);
			Point b = Point(1, 1);
			Point c = Point(2, 1);
			Point d = Point(4, 1);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsTrue(actual);
		}

		TEST_METHOD(DCAB_NoIntersection)
		{
			Point a = Point(3, 1);
			Point b = Point(4, 1);
			Point c = Point(2, 1);
			Point d = Point(1, 1);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsFalse(actual);
		}

		TEST_METHOD(DCAB_XConst_NoIntersection)
		{
			Point a = Point(1, 3);
			Point b = Point(1, 4);
			Point c = Point(1, 2);
			Point d = Point(1, 1);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsFalse(actual);
		}

		TEST_METHOD(BACD_XConst_NoIntersection)
		{
			Point a = Point(1, 2);
			Point b = Point(1, 1);
			Point c = Point(1, 3);
			Point d = Point(1, 4);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsFalse(actual);
		}

		TEST_METHOD(BACD_AEquals—_NoIntersection)
		{
			Point a = Point(1, 2);
			Point b = Point(1, 1);
			Point c = Point(1, 2);
			Point d = Point(1, 4);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsTrue(actual);
		}

		TEST_METHOD(ABDC_BEqualsD_NoIntersection)
		{
			Point a = Point(1, 2);
			Point b = Point(1, 1);
			Point c = Point(1, 2);
			Point d = Point(1, 1);
			bool actual;

			actual = checkIntersection(a, b, c, d);

			Assert::IsTrue(actual);
		}
	};
}
