#include "pch.h"
#include "CppUnitTest.h"
#include "../Labs/Task3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LabsTests
{
	TEST_CLASS(Task3Tests)
	{
	public:
		TEST_METHOD(isPlane_in_plain)
		{
			Point a = Point(3, 2, 1);
			Point b = Point(5, 3, 1);
			Point c = Point(2, 1, 1);
			Point d = Point(4, 5, 1);

			Assert::IsTrue(isPlane(a,b,c,d));
		};

		TEST_METHOD(isPlane_not_in_plain)
		{
			Point a = Point(3, 2, 1);
			Point b = Point(5, 3, 1);
			Point c = Point(2, 1, 1);
			Point d = Point(10, 10, 10);

			Assert::IsFalse(isPlane(a, b, c, d));
		};
		TEST_METHOD(isPlane_in_plain_test)
		{
			Point a = Point(2, 3, 1);
			Point b = Point(2, 1, 1);
			Point c = Point(4, 1, 1);
			Point d = Point(1, 1, 1);

			Assert::IsTrue(isPlane(a, b, c, d));
		};
		TEST_METHOD(inAngle_in_plain_test)
		{
			Point a = Point(2, 3, 1);
			Point b = Point(2, 1, 1);
			Point c = Point(4, 1, 1);
			Point d = Point(1, 2, 1);

			Assert::IsFalse(inAngle(a, b, c, d));
		};

		TEST_METHOD(inAngle_in_plain_test_ebu1)
		{
			Point a = Point(3, 0, 0);
			Point b = Point(0, 0, 0);
			Point c = Point(0, 3, 0);
			Point d = Point(1, 1, 0);

			Assert::IsTrue(inAngle(a, b, c, d));
		};
		TEST_METHOD(inAngle_in_plain_test_ebu2)
		{
			Point a = Point(3, 0, 0);
			Point b = Point(0, 0, 0);
			Point c = Point(0, 3, 0);
			Point d = Point(-1, 1, 0);

			Assert::IsFalse(inAngle(a, b, c, d));
		};
		TEST_METHOD(inAngle_in_plain_test_ebu3)
		{
			Point a = Point(3, 0, 0);
			Point b = Point(0, 0, 0);
			Point c = Point(0, 3, 0);
			Point d = Point(-1, -1, 0);

			Assert::IsFalse(inAngle(a, b, c, d));
		};
		TEST_METHOD(inAngle_in_plain_test_ebu4)
		{
			Point a = Point(3, 0, 0);
			Point b = Point(0, 0, 0);
			Point c = Point(0, 3, 0);
			Point d = Point(1, -1, 0);

			Assert::IsFalse(inAngle(a, b, c, d));
		};
		TEST_METHOD(inAngle_in_plain_test_ebu5)
		{
			Point a = Point(2, 3, 0);
			Point b = Point(2, 1, 0);
			Point c = Point(4, 1, 0);
			Point d = Point(3, 2, 0);

			Assert::IsTrue(inAngle(a, b, c, d));
		};
	};
}