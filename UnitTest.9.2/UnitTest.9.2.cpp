
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define UNIT_TEST
#include "../lab.9.2/lab.9.2.cpp"

namespace UnitTestLab92
{
    TEST_CLASS(UnitTestLab92)
    {
    public:

        TEST_METHOD(TestCalculate)
        {
#if Z > 3
            Assert::AreEqual(25.0, Calculate(2, 3, 4), 0.001);
#else
            Assert::AreEqual(12.0, Calculate(2, 3, 2), 0.001);
#endif
        }
    };
}
