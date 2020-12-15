#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.6/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest56
{
	TEST_CLASS(UnitTest56)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = f(1);
			Assert::AreEqual(a, 2, 4189.);

		}
	};
}
