#include <iostream> // cout, cin, endl...
#include <cstdio>  //printf


//syntax error : 문법 오류


int main()
{
	using namespace std;

	int x = 123; // initialization
	x = 123; // assignment 메모리 주소를 가지고 있는 값 : l-value

	int y = 1024;
	double pi = 3.141592;

	cout << x << std::endl;
	cout << "I lovce this lecture\n"; // << std::endl; // n: 줄바꿈 기능 endl과 동일
	cout << "x is " << x << " pi is " << pi << std::endl;

	cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cdef" << std::endl;//t : tab기능, 줄맞춤

	cout << "\a";
	return 0;
}

