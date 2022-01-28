#include <iostream>

using namespace std;

class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl;
    }
};

class First
{
    Second sec;

public:
    First()
    {
        cout << "Class First constructor()" << endl;
    }

};

int main()
{
    First fir;

    return 0;
}
