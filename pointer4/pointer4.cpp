#include <iostream>

using namespace std;

int main()
{
    //int var;
    //var = 7;
    //int *ptr = new int{ 7 }; // os에서 메모리를 받음.


    //cout << ptr << endl;
    //cout << *ptr << endl;

    //delete ptr; 
    //ptr = nullptr;

    //cout << "After delete" << endl;
    //if (ptr != nullptr)
    //{
    //    cout << ptr << endl;
    //    cout << *ptr << endl;
    //}
    //else 
    //{
    //    cout << "could not allocate" << endl;
    //}

    //int* ptr = new (std::nothrow) int{ 7 };
    //int* ptr2 = ptr;

    //delete ptr;
    //ptr = nullptr;
    //ptr2 = nullptr;
    // 
    //memory leak

    //while (true)
    //{
    //    int* ptr = new int;
    //    cout << ptr << endl;

    //    delete ptr;
    //}

    //return 0;

    int fixedArray[5] = { 1 ,2, 3, 4, 5 };

    int* array = new int[3]{ 1, 2, 3};

    // resizing

    delete[] array;

    return 0;
}
 