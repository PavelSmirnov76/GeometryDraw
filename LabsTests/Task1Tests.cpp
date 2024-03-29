#include "pch.h"
#include "CppUnitTest.h"
#include "../Labs/Task1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LabsTests
{
	TEST_CLASS(Task1Tests)
	{
	public:		
		TEST_METHOD(Point_2_2_LocationTest)
		{
			Point a(2, 2);
			Line k(1, 1);
			PointLocation expected = PointLocation::rightSide;

			PointLocation actual = FindPointLocation(a, k);

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(Point_2_3_LocationOnLineTest)
		{
			Point a(2, 3);
			Line k(1, 1);
			PointLocation expected = PointLocation::onLine;

			PointLocation actual = FindPointLocation(a, k);

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(Point_2_2_LocationleftSideTest)
		{
			Point a(2, 4);
			Line k(1, 1);
			PointLocation expected = PointLocation::leftSide;

			PointLocation actual = FindPointLocation(a, k);

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompareLocationsTest_22_24_diff)
		{
			Point a(2, 2);
			Point b(2, 4);
			Line k(1, 1);
			ŅomparisonResult expected = ŅomparisonResult::different;

			ŅomparisonResult actual = CompareLocations(FindPointLocation(a, k), FindPointLocation(b, k));

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompareLocationsTest_23_12_onLine)
		{
			Point a(2, 3);
			Point b(1, 2);
			Line k(1, 1);
			ŅomparisonResult expected = ŅomparisonResult::onLine;

			ŅomparisonResult actual = CompareLocations(FindPointLocation(a, k), FindPointLocation(b, k));

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompareLocationsTest_22_32_Same)
		{
			Point a(2, 3);
			Point b(3, 2);
			Line k(1, 1);
			ŅomparisonResult expected = ŅomparisonResult::same;

			ŅomparisonResult actual = CompareLocations(FindPointLocation(a, k), FindPointLocation(b, k));

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompliteTask1Test_22_24_diff)
		{
			double x1 = 2;
			double y1 = 2;
			double x2 = 2;
			double y2 = 4;
			double a = 1;
			double b = 1;

			ŅomparisonResult expected = ŅomparisonResult::different;

			int actual = CompleteTask1(x1,y1,x2,y2,a,b);

			Assert::AreEqual((int)expected, actual);
		}

		TEST_METHOD(CompliteTask1Test_23_12_onLine)
		{
			double x1 = 2;
			double y1 = 3;
			double x2 = 1;
			double y2 = 2;
			double a = 1;
			double b = 1;

			ŅomparisonResult expected = ŅomparisonResult::onLine;

			int actual = CompleteTask1(x1, y1, x2, y2, a, b);

			Assert::AreEqual((int)expected, actual);
		}

		TEST_METHOD(CompliteTask1Test_22_32_Same)
		{
			double x1 = 2;
			double y1 = 3;
			double x2 = 3;
			double y2 = 2;
			double a = 1;
			double b = 1;

			ŅomparisonResult expected = ŅomparisonResult::same;

			int actual = CompleteTask1(x1, y1, x2, y2, a, b);

			Assert::AreEqual((int)expected, actual);
		}

	};
}
