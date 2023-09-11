// Tyuiu.NikolaevaAN.Sprint0.Task4.V5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

// TODO: This is an example of a library function
class ISprint0Task4
{
public:
	virtual int Add(int a, int b, int c, int d)
	{
		return a - b / c * d;
	}
};