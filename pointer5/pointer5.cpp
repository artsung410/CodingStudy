#include <iostream>

using namespace std;

int main()
{
    //// case1 
    //const int value1 = 5;
    //const int* ptr1 = &value1;
    //cout << *ptr1 << endl;
    //// *ptr = 6;*/ // value =6; const�� �տ� ������ �������ؼ� ���� ������ �� ����.

    //// case2
    //int value2 = 5;
    //int* const ptr2 = &value2;W

    //*ptr2 = 10; // const�� �ڿ� ���̸� �������ؼ� ���� ������ �� ����.
    //cout << *ptr2 << endl;

    ////int value3 = 8;
    ////ptr2 = &value3; // �����Ϳ� �ִ� �ּҰ��� �ٲ� �� ����.

    ////case3
    //int value = 5;
    //const int* const ptr = &value;

    //*ptr = 10; // �ƹ��͵� �ȵǴ� ����.
    //----------------------------------------------------

    int value = 5;
    const int* ptr1 = &value; //������ ���� �Ұ�
    int* const ptr2 = &value; //�ּ� ���� �Ұ�
    const int* const ptr3 = &value; // �Ѵ� �Ұ�


    return 0;
}

