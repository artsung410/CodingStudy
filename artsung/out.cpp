#include <iostream> // cout, cin, endl...
#include <cstdio>  //printf


//syntax error : ���� ����


int main()
{
	using namespace std;

	int x = 123; // initialization
	x = 123; // assignment �޸� �ּҸ� ������ �ִ� �� : l-value

	int y = 1024;
	double pi = 3.141592;

	cout << x << std::endl;
	cout << "I lovce this lecture\n"; // << std::endl; // n: �ٹٲ� ��� endl�� ����
	cout << "x is " << x << " pi is " << pi << std::endl;

	cout << "abc" << "\t" << "def" << std::endl;
	cout << "ab" << "\t" << "cdef" << std::endl;//t : tab���, �ٸ���

	cout << "\a";
	return 0;
}

