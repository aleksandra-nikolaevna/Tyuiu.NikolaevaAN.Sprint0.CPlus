#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.Sprint0.Task7.V5.Lib/Tyuiu.NikolaevaAN.Sprint0.Task7.V5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANSprint0Task7V5Test
{
	TEST_CLASS(TyuiuNikolaevaANSprint0Task7V5Test)
	{
	public:
		
		TEST_METHOD(TestMethod7)
		{
			// Init
			ISprint0Task7* date = new ISprint0Task7();
			int c = 1234567;
			int a = 4;
			int l;

			// run
			l = date->Add(c, a);

			// Valid
			Assert::AreEqual(1, l);
		}
	};
}
