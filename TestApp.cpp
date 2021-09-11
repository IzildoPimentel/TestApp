// TestApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Test.h"

string name;

int main()
{
    askForName();

    std::cin >> name;

    std::cout << "Hello! " + displayName(name);
}