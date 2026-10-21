#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_5_5/Lab_5_5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			double t = G(4, 1, depth);
			Assert::AreEqual(8, t, 0.0001);
		}

		TEST_METHOD(TestMethod2)
		{
			int depth = 0;
			G(4, 1, depth);
			Assert::AreEqual(3, depth);
		}
	};
}