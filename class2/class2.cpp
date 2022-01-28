#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Date
{
   // access specifier, public을 안써주면 private가 default값
    int m_month;
    int m_day;
    int m_year;

public:
    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }
    void setMonth(const int& month_input)
    {
        m_month = month_input;
    }

    const int& getDay()
    {
        return m_day;
    }

    void copyFrom(const Date& origianl)
    {
        m_month = origianl.m_month;
        m_day = origianl.m_day;
        m_year = origianl.m_year;

    }
};

int main()
{
    Date today; // { 8, 4, 2025 };
    today.setDate(8, 4, 2025);
    today.setMonth(8);

    Date copy;
    copy.copyFrom(today);

    cout << today.getDay() << endl;


    return 0;
}
