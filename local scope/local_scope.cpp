#include <iostream>


using namespace std;

int main()
{
    int x = 0;

    cout << x << " " << &x << endl;

    {
        int x = 1;

        cout << x << " " << &x << endl;
    }

    {
        int x = 2;
    }
    
    int x(0); // x = 0;


    return 0;
}
