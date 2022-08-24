#include "pch.h"
#include "CppUnitTest.h"
#include "../Labs/Line.h"
#include "../Labs/Point.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LabsTests
{
	TEST_CLASS(LineTests)
	{
	public:
		TEST_METHOD(Line_Constructor_PointA_3_3_1_PointB_2_1_1_Coef_A_minus2_B_0_C_4)
		{
			Point a = Point(2, 3, 1);
			Point b = Point(2, 1, 1);

			Line l = Line(a, b);

			Assert::AreEqual(-2.0, l.a);
			Assert::AreEqual(0.0, l.b);
			Assert::AreEqual(4.0, l.c);
		};

		TEST_METHOD(Line_Constructor_PointA_4_1_1_PointB_1_1_1_Coef_A_minus2_B_0_C_4)
		{
			Point c = Point(4, 1, 1);
			Point d = Point(1, 1, 1);

			Line l = Line(c, d);

			Assert::AreEqual(0.0, l.a);
			Assert::AreEqual(3.0, l.b);
			Assert::AreEqual(-3.0, l.c);
		};
	};
}
