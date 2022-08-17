#include "pch.h"
#include "CppUnitTest.h"
#include "..\Labs\Task1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab1zad1Test
{
	TEST_CLASS(lab1zad1Test)
	{
	public:

		TEST_METHOD(Point_2_2_LocationFirstSideTest)
		{

			Point a(2, 2);
			Line k(1, 1);
			PointLocation expected = PointLocation::firstSide;

			PointLocation actual = Task1::FindPointLocation(a, k);

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(Point_2_3_LocationOnLineTest)
		{

			Point a(2, 3);
			Line k(1, 1);
			PointLocation expected = PointLocation::onLine;

			PointLocation actual = Task1::FindPointLocation(a, k);

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(Point_2_2_LocationSecondSideTest)
		{

			Point a(2, 4);
			Line k(1, 1);
			PointLocation expected = PointLocation::secondSide;

			PointLocation actual = Task1::FindPointLocation(a, k);

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompareLocationsTest_22_24_diff)
		{

			Point a(2, 2);
			Point b(2, 4);
			Line k(1, 1);
			ÑomparisonResult expected = ÑomparisonResult::different;

			ÑomparisonResult actual = Task1::CompareLocations(Task1::FindPointLocation(a, k), Task1::FindPointLocation(b, k));

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompareLocationsTest_23_12_onLine)
		{

			Point a(2, 3);
			Point b(1, 2);
			Line k(1, 1);
			ÑomparisonResult expected = ÑomparisonResult::onLine;

			ÑomparisonResult actual = Task1::CompareLocations(Task1::FindPointLocation(a, k), Task1::FindPointLocation(b, k));

			Assert::AreEqual((int)expected, (int)actual);
		}

		TEST_METHOD(CompareLocationsTest_22_32_Same)
		{

			Point a(2, 3);
			Point b(3, 2);
			Line k(1, 1);
			ÑomparisonResult expected = ÑomparisonResult::same;

			ÑomparisonResult actual = Task1::CompareLocations(Task1::FindPointLocation(a, k), Task1::FindPointLocation(b, k));

			Assert::AreEqual((int)expected, (int)actual);
		}
	};

}
