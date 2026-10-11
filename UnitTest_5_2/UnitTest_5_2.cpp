#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_5_2/Lab_5_2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = A(-4, 4, 1);
			Assert::AreEqual(1.0, t, 1e-9);
		}
		TEST_METHOD(TestMethod2)
		{
			int n;
			double s = S(1, 0.0001, n);       // сума ряду для x = 1
			Assert::AreEqual(exp(-1.0), s, 0.0001);   // e^(-1) = 0.367879...
			Assert::AreEqual(8, n);                   // знадобилось 8 доданків
		}
	};
}
