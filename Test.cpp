#include <iostream>
#include "Test.h"

string displayName(string name)
{
	if (name == "Izildo") {
		return name + " is an rockstar";
	}
	else {
		return name;
	}
}

void askForName()
{
	std::cout << "What is your name?\n";
}