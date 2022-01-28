#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
    int a, b, c, d;
};

int main()
{
    int x = 5;
    double d = 123.0;
    
    int *ptr_x = &x;
    double* ptr_d;

    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << "  " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << "  " << sizeof(ptr_d) << endl;

    //double* ptr_d = &d;

    //cout << ptr_x << endl;
    //cout << *ptr_x << endl;

    //cout << ptr_d << endl;
    //cout << *ptr_d << endl;

    //cout << typeid(ptr_x).name() << endl;

    Something ss;
    Something* ptr_s;

    cout << sizeof(Something) << endl;
    cout << sizeof(ptr_s) << endl;

    return 0; 
}
