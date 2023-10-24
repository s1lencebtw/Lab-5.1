#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.1/Lab 5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LAB51UnitTest
{
	TEST_CLASS(LAB51UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(3, 2, 4);
			Assert::AreEqual(t, 19.0101, 0.0001);
		}
	};
}
