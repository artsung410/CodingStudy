#include <iostream>
#include <limits>


int main()
{
    using namespace std;

    //char c1(65);
    //char c2('A'); // "Hellow, world" 문자 하나를 표현할때는 싱글따음표, 여러문장은 격따음표

    //cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    //// c - style casting
    //cout << (char)65 << endl;
    //cout << (int)'A' << endl;

    //// cpp style
    //cout << char(65) << endl;
    //cout << int('A') << endl;

    //cout << static_cast<char>(65) << endl;
    //cout << static_cast<int>('A') << endl;

    //char ch(97);
    //cout << ch << endl;
    //cout << static_cast<int>(ch) << endl;
    //cout << ch << endl;

    char c1(65);

    cout << int('\t') << endl;
    cout << "This is first line \a second line \?";
    cout << "This is first line" << endl;
    cout << "second line" << endl;

    return 0;
}
