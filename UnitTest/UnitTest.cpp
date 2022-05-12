#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_5.1C\RationalException.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RationalException e("err");
			Assert::AreEqual("err", e.what());
		}
	};
}
