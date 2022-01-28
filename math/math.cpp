#include <iostream>

using namespace std;

int add(int x, int y){ return x + y;}

int main()
{
    int x = -2;

    int y = (x > 0) ? 1 : 2; // 만약 x가 영보다 크면 true : 1, false : 2
    cout << y << endl;

    return 0;
}
