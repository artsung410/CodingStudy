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
        /*return m_value;*/ // static������ this ���� �Ұ�
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

    //cout << s1.getValue() << endl; // s1�� this��� �����͸� �ְ� �����ǵ��� �۵����Ѷ�!

    int(Something:: * fptr1)() = &Something::temp; //none static functions type--- > s1�� �����͸� �Ѱ��ְ� s1�� �ִ� this�� ���� 

    cout << (s1.*fptr1)() << endl; 

    int(*fptr2)() = &Something::getValue; // static functions type

    cout << fptr2() << endl;

    return 0;
}
