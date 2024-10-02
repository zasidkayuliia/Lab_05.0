#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_0/Lab_05_0.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double d;
			d = f(2, 3, 4);
			Assert::AreEqual(d,5,7);
		}
	};
}
