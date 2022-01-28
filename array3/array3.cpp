#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    //char myString[255];

    ////cin >> myString;

    //cin.getline(myString, 255);
    //
    ////cout << myString << endl;

    //int ix = 0;
    //while (true)
    //{
    //    if (myString[ix] == '\0') break;
    //    cout << myString[ix] << " " << (int)myString[ix] << endl;
    //    ++ix;
    //}

    char source[] = "copy this!";
    char dest[50];
    strcpy_s(dest, 50, source);

    cout << source << endl;
    cout << dest << endl;

    //strcat()
    //strcmp()




    return 0;
}
