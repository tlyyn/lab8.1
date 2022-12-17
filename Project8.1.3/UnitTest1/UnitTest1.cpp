#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int i1 = 0, i2 = 0;
			bool b = SearchSign("This !!!", i1, i2);
			Assert::AreEqual(true, b);
		}
	};
}