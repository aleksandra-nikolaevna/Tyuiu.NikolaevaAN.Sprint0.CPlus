// Tyuiu.NikolaevaAN.Sprint0.Task5.V5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"

// TODO: This is an example of a library function
class ISprint0Task5
{
public:
	virtual int Add(int a, int b, int c)
	{
		return (a + b + c) + (a * b / 2);
	}
};