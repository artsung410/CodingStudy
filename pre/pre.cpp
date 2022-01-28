#include <iostream>
#include <algorithm>
using namespace std;


void doSomething();
#define MY_NUMBER "Hello, World" // define : 매크로 지정
#define MAX(a, b) (((a) > (b)) ? (a) : (b))  // define : 매크로 지정
#define LIKE_APPLE  // define : 매크로 지정

//void doSomething()
//{
//#ifdef LIKE_APPLE 
//    cout << "Apple" << endl; // 조건문이 true일 때 밝게 표시
//#else
//    cout << "Orange" << endl; // 조건문이 false일 때 흐리게 표시
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

