#include <iostream>

using namespace std;

int main()
{
    //// case1 
    //const int value1 = 5;
    //const int* ptr1 = &value1;
    //cout << *ptr1 << endl;
    //// *ptr = 6;*/ // value =6; const를 앞에 붙으면 역참조해서 값을 수정할 수 없음.

    //// case2
    //int value2 = 5;
    //int* const ptr2 = &value2;W

    //*ptr2 = 10; // const를 뒤에 붙이면 역참조해서 값을 수정할 수 있음.
    //cout << *ptr2 << endl;

    ////int value3 = 8;
    ////ptr2 = &value3; // 포인터에 있는 주소값을 바꿀 수 없음.

    ////case3
    //int value = 5;
    //const int* const ptr = &value;

    //*ptr = 10; // 아무것도 안되는 구조.
    //----------------------------------------------------

    int value = 5;
    const int* ptr1 = &value; //역참조 수정 불가
    int* const ptr2 = &value; //주소 수정 불가
    const int* const ptr3 = &value; // 둘다 불가


    return 0;
}

