#include <iostream>
#include <algorithm>
using namespace std;


void doSomething();
#define MY_NUMBER "Hello, World" // define : ��ũ�� ����
#define MAX(a, b) (((a) > (b)) ? (a) : (b))  // define : ��ũ�� ����
#define LIKE_APPLE  // define : ��ũ�� ����

//void doSomething()
//{
//#ifdef LIKE_APPLE 
//    cout << "Apple" << endl; // ���ǹ��� true�� �� ��� ǥ��
//#else
//    cout << "Orange" << endl; // ���ǹ��� false�� �� �帮�� ǥ��
//#endif
//
//}

int main()
{
    doSomething();
    //cout << MY_NUMBER << endl;
    //cout << MAX(1 + 3, 2) << endl;
    //cout << std::max(1 + 3, 2) << endl;
    return 0;
}

