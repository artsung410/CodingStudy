
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

// stack 은 사이즈가 작아서, 큰 데이트들을 넣으면 스택오버플로우가 일어날 수 있음 (재귀호출..
// heap 은 stack에 비해 메모리가 어디에 생길지 예측이 힘들다, 큰 데이터에 강점.

