#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint0.Task5.V5.Lib/Tyuiu.NikolaevaAN.Sprint0.Task5.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint0Task5V5Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint0Task5V5Test)
	{
	public:
		TEST_METHOD(TestMethod5)
		{
			// Init
			ISprint0Task5* date = new ISprint0Task5();
			int a = 4;
			int b = 5;
			int c = 6;
			int d;

			// run
			d = date->Add(a, b, c);

			// Valid
			Assert::AreEqual(25, d);
		}
	};
}
