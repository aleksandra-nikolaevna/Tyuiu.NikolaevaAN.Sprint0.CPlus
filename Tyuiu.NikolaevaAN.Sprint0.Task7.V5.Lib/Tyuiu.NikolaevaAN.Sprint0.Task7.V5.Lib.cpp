// Tyuiu.NikolaevaAN.Sprint0.Task7.V5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

// TODO: This is an example of a library function
class ISprint0Task7
{
public:
	virtual int Add(int c, int a)
	{
		int c1 = c / 1000000;
		int c2 = (c / 100000) % 10;
		int c3 = (c / 10000) % 10;
		int c4 = (c / 1000) % 10;
		int c5 = (c / 100) % 10;
		int c6 = (c / 10) % 10;
		int c7 = c % 10;
		bool l = (c1 == a) || (c2 == a) || (c3 == a) || (c4 == a) || (c5 == a) || (c6 == a) || (c7 == a);
		return l;
	}
};
