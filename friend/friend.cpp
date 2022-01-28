#include <iostream>
using namespace std;

class B; //전방 선언 : Foward Declaration

class A
{
private:
    int m_value = 1;
    friend class B;
};

class B
{
private:
    int m_value = 2;

    void doSomething(A& a)
    {
        cout << a.m_value << endl;
    }
};

int main()
{
    A a;
    doSomething(a);
}

