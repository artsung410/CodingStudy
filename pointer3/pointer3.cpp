#include <iostream>


using namespace std;

int main()
{
    //int array[] = { 9, 7, 5, 3, 1 };
    //int* ptr = array;

    //for (int i = 0; i < 5; ++i)
    //{
    //    /*cout << array[i] << " " << (uintptr_t) & array[i] << endl;*/
    //    cout << *(ptr + i) << "  " << (uintptr_t)(ptr + i) << endl;
    //}

 /*   char name[] = "Jack jack";

    const int n_name = sizeof(name) / sizeof(char);

    char* ptr = name;

    for (int i = 0; i < n_name; ++i)
    {
        cout << *(ptr + i);
    }*/

    //char name[] = "jack jack";
    //const char* name = "jack jack";
    //const char* name2 = "jack jack2";

    //cout << (uintptr_t)name << endl;
    //cout << (uintptr_t)name2 << endl;

    char c = 'Q';
    cout << *&c << endl;

    return 0;

}

