#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint0.Task6.V5.Lib/Tyuiu.NikolaevaAN.Sprint0.Task6.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint0Task6V5Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint0Task6V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod6)
		{
			// Init
			ISprint0Task6* date = new ISprint0Task6();
			int x = 2;
			int y = 4;
			int a;

			// run
			a = date->Add(x, y);

			// Valid
			Assert::AreEqual(8, a);
		}
	};
}
