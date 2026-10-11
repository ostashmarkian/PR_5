#include "pch.h"
#include "CppUnitTest.h"
#include "...\PR_5_1\Lab_5_1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1testt
{
	TEST_CLASS(UnitTest1testt)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(1, 0);        // (1 + 0 + sin 0) / 1 = 1
			Assert::AreEqual(1.0, t, 1e-9);
		}
	};
}
