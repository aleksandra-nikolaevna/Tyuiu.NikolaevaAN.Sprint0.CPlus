﻿// Tyuiu.NikolaevaAN.Sprint0.Task4.V5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.NikolaevaAN.Sprint0.Task4.V5.Lib/Tyuiu.NikolaevaAN.Sprint0.Task4.V5.Lib.cpp"

int main()
{
    ISprint0Task4* date = new ISprint0Task4();
    std::cout << "25 - 8 / 4 * 9\n";
    std::cout << "Result = " << date->Add(25, 8, 4, 9);
    std::cout << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
