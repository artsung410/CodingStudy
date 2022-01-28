
#include <iostream>
#include <array>

using namespace std;

bool isEven(const int& number)
{
    if (number % 2 == 0) return true;
    else return false;
}

bool isOdd(const int& number)
{
    if (number % 2 != 0) return true;
    else return false;
}

void printNumbers(const std::array<int, 10>& my_array, 
    bool (*check_fun)(const int&) = isEven)
{
    for (auto element : my_array)
    {
        if (check_fun(element) == true) cout << element;
    }
    cout << endl;
}

int main()
{
    std::array<int, 10> my_array = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printNumbers(my_array);
    printNumbers(my_array, isOdd);

    return 0;
}

// stack �� ����� �۾Ƽ�, ū ����Ʈ���� ������ ���ÿ����÷ο찡 �Ͼ �� ���� (���ȣ��..
// heap �� stack�� ���� �޸𸮰� ��� ������ ������ �����, ū �����Ϳ� ����.

