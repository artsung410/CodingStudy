#include <iostream>


void doSomething()
{
    using namespace std;
#ifdef LIKE_APPLE 
    cout << "Apple" << endl; // ���ǹ��� true�� �� ��� ǥ��
#else
    cout << "Orange" << endl; // ���ǹ��� false�� �� �帮�� ǥ��
#endif

}
