#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // std::vector
    
    //std::vector<int> array;

    //std::vector<int> array2 = { 1, 2, 3, 4, 5 };

    //cout << array2.size() << endl;

    //std::vector<int> array3 = { 1, 2, 3};

    //cout << array3.size() << endl;

    //std::vector<int> array4 { 1, 2, 3 };

    //cout << array4.size() << endl;


    vector<int> arr = { 1, 2, 3, 4, 5 }; // 메모리를 자동으로 지워준다.

    arr.resize(10);

    for (auto& itr : arr)
        cout << itr << "  ";
    cout << endl;

    cout << arr.size() << endl;
    cout << arr[1] << endl;
    cout << arr.at(1) << endl;

    return 0;
}
