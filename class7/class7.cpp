#include <iostream>
using namespace std;


class Cents
{
private:
    int m_cents;

public:

    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    // =, [], () ... 멤버 펑션으로만 가능
    Cents operator + (const Cents& c2)
    {
        return Cents(this->m_cents + c2.m_cents);
    }
};

//Cents add(const Cents& c1, const Cents& c2)
//{
//    return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
    Cents cents1(6);
    Cents cents2(8);

    //Cents sum;
    //add(cents1, cents2, sum);

    cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(100)).getCents() << endl;

    return 0;
    
    // >: :: sizeof.. * 연산자 오버로딩 x

    std::cout << "Hello World!\n";
}
