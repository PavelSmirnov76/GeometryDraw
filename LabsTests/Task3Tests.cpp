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
	};
}