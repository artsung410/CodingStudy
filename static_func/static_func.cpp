#include <iostream>

using namespace std;

class Something
{
private:
    static int s_value;
    int m_value;
    
public:
    Something()
        : m_value(123)
    {}

    static int getValue()
    {
        return s_value;
        /*return m_value;*/ // static에서는 this 접근 불가
    }

    int temp()
    {
        return this->s_value;
    }
};

int Something::s_value = 1024;


int main()
{
    Something s1;

    //cout << Something::getValue() << endl;

    //cout << s1.getValue() << endl; // s1에 this라는 포인터를 주고 멤버평션들을 작동시켜라!

    int(Something:: * fptr1)() = &Something::temp; //none static functions type--- > s1에 포인터를 넘겨주고 s1에 있는 this로 값을 

    cout << (s1.*fptr1)() << endl; 

    int(*fptr2)() = &Something::getValue; // static functions type

    cout << fptr2() << endl;

    return 0;
}
