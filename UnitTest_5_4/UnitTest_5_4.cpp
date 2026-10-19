#include "pch.h"
#include "CppUnitTest.h"
#include "../PR_5_4/Lab_5_4.cpp"   

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestS4_OneTerm)
        {
            double t = S4(20, 20);
            Assert::AreEqual(0.9625, t, 0.0001);
        }

        TEST_METHOD(TestS2_TwoTerms)
        {
            double t = S2(19, 20);
            Assert::AreEqual(1.9541, t, 0.0001);
        }
    };
}