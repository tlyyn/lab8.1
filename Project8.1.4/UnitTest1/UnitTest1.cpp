#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			bool b = SearchSign("This !!!");
			Assert::AreEqual(true, b);
		}
	};
}