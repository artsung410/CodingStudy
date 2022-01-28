#include <iostream>


void doSomething()
{
    using namespace std;
#ifdef LIKE_APPLE 
    cout << "Apple" << endl; // 조건문이 true일 때 밝게 표시
#else
    cout << "Orange" << endl; // 조건문이 false일 때 흐리게 표시
#endif

}
