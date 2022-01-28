
#include <iostream>

#include "myConstants.h"


void doSomething()
{
	using namespace std;

	cout << "In test.cpp" << Constants::pi << &Constants::pi << endl;
}