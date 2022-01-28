
#include <iostream>



bool isEqual(int a, int b)
{
    bool result = (a == b);

    return result;
}


int main()
{
    using namespace std;

    //cout << std::boolalpha;
    //cout << isEqual(1, 1) << endl;
    //cout << isEqual(0, 3) << endl;

    //if (5)
    //{
    //    cout << "True" << endl;
    //}
    //else
    //    cout << "False" << endl;

    bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << "your input : " << b << endl;
    return 0;

    //bool b1 = true; // copy initialization
    //bool b2(false); // direct '''
    //bool b3 { true }; // uniform ini...
    //b3 = false;

    //if (true)
    //{ 
    //    cout << " this is true " << endl;
    //    cout << " this is true " << endl;
    //}     

    //else
    //{
    //    cout << " this is false " << endl;
    //}
        


}
