#include <iostream>

using namespace std;


//int multiTwoNmbers(int num_a, int num_b)
//{
//	int sum = num_a*num_b;
//
//	return sum;
//}

void printHelloWorld() // void는 return 값이 없다.
{
	cout << "Hello World" << endl;
}

void addTwoNumbers(int a, int b)
{
	printHelloWorld();

}

int main()
{
	//cout << multiTwoNmbers(1, 2) << endl;
	//cout << multiTwoNmbers(3, 4) << endl;
	//cout << multiTwoNmbers(8, 13) << endl;

	addTwoNumbers(1, 2);

	return 0;

}
// 식별자 주소 : https://en.cppreference.com/w/cpp/keyword