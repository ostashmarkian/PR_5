#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_5_3/Lab_5_3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double expected = (1 + cos(1.0)) * exp(2.0);   // ≈ 11.38138
			double actual = h(1.0);
			Assert::AreEqual(expected, actual, 1e-6);
		}
		TEST_METHOD(TestMethod2)
		{
			double expected = 0.502606;   // x + x^4/(2·3·4) + ...
			double actual = h(0.5);
			Assert::AreEqual(expected, actual, 1e-5);
		}
	};
}
