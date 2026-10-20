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
			double t = G(4);
			Assert::AreEqual(8, t, 0.0001);
		}
	};
}
