
// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "selfTrainingDll.h"
#pragma comment(lib,"Dll2.lib")
using namespace std;

int main()
{
	arithmetic_operation ao;
	cout << ao.Add(1, 2) << endl;
	cout << ao.Sub(2, 1) << endl;
	cout << ao.Multi(2, 1) << endl;
	cout << ao.Div(6, 4) << endl;
	cout << export333() << endl;
    std::cout << "Hello World!\n"; 
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
