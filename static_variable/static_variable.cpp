#include <iostream>

using namespace std;

class Something
{
public:
    static int s_value;
};

int Something::s_value = 1;

int main()
{
    Something st1;
    Something st2;

    st1.s_value = 2;

    cout << &st1.s_value << "  " << st1.s_value << endl;   
    cout << &st2.s_value << "  " << st2.s_value << endl;

    return 0;

}
