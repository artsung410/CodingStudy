
#include <iostream>
#include <iomanip>
#include <limits>


int main()
{
    using namespace std;

    //float f(123456789.0f); // 3.14 = 31.4 * 0.1
    //double d(0.1);

    //cout << std::setprecision(9);
    //cout << f << endl;

    //cout << d << endl;
    //cout << std::setprecision(17);
    //cout << d << endl;

    //cout << 3.14 << endl;
    //cout << 31.4e-1 << endl;
    //cout << 31.4e-2 << endl;
    //cout << 31.4e1 << endl;
    //cout << 31.4e2 << endl; // e-2 : 10ÀÇ -2Á¦°ö, e2 : 10ÀÇ 2Á¦°ö

    double zero = 0.0;
    double p = 5.0 / zero;
    double n = -5.0 / zero;
    double nn = zero / zero;

    cout << p << endl;
    cout << n << endl;
    cout << nn << endl;

}

