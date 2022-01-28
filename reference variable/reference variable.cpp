#include <iostream>


using namespace std;

int main()
{
    int x = 5;
    const int& ref_x = x;

    const int& ref_2 = ref_x;

    return 0;


    
}
