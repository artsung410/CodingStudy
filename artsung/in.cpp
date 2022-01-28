#include <iostream> 
#include <cstdio> 

using namespace std;

int getInt()
{
	cout << "Enter an inteager number : ";
	int  x;
	cin >> x;
	std::cin.ignore(32767, '\n');

	return x;
}

int main()
{
	int x = getInt();

	//int x = 1;
	//cout << "Before your input, x was " << x << endl;
	//cin >> x;

	//cout << "your input is " << x << endl



	return 0;
}
