#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(array<int, 5> my_arr)
{
    cout << my_arr.size() << endl;
}

int main()
{

    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };

    for (auto &element : my_arr)
        cout << element << "  ";
    cout << endl;

    std::sort(my_arr.begin(), my_arr.end());

    for (auto &element : my_arr)
        cout << element << "  ";
    cout << endl;

    return 0;
}
