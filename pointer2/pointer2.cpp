#include <iostream>

using namespace std;


void printArray(int array[])
{
    cout << sizeof(array) << endl;
    cout << *array << endl;//20 ?
    *array = 100;
}
int main()
{

    int array[5] = { 9, 7, 5, 3, 1 };

    cout << sizeof(array) << endl;
    
    int* ptr = array;

    cout << sizeof(ptr) << endl;

    printArray(array);

    cout << array[0] << "  " << *array << endl;
    
    return 0;
}
