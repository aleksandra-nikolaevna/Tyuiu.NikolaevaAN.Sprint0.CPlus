// Tyuiu.NikolaevaAN.Sprint0.Task6.V5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.NikolaevaAN.Sprint0.Task6.V5.Lib/Tyuiu.NikolaevaAN.Sprint0.Task6.V5.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Николаева\a\t" << "Александра\t" << "Николаевна\n";
    cout << endl;
    cout << "Task7.V5\n";
    cout << "Введите x: ";
    int x;
    cin >> x;
    cout << "Введите y: ";
    int y;
    cin >> y;

    ISprint0Task6* date = new ISprint0Task6();
    cout << "Выражение (" << x << " * 8) / " << y << " * 2 = " << date->Add(x, y);
    cout << endl;
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
