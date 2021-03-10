#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab2.1/Lab2.1/FloatRange.h"
#include "../Lab2.1/Lab2.1/FloatRange.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FloatRange TEST(2, 10);
			Assert::AreEqual(TEST.rangeCheck(TEST, 2.111), true);
			Assert::AreEqual(TEST.rangeCheck(TEST, 1.999), false);
			Assert::AreEqual(TEST.rangeCheck(TEST, 9.99), true);
			Assert::AreEqual(TEST.rangeCheck(TEST, 10.0001), false);
		}
	};
}
