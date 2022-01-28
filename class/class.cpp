#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object
// Friend : name, address, age, height, weight....
//          print()


class Friend
{
public: // access specifier(public, private, protected)
    string m_name;
    string address;
    int age;
    double height;
    double weight;

    void print()
    {
        cout << m_name << "  " << address << "  " << age << "  " << height << "  "
            << weight << endl;
    } 
};


int main()
{
    Friend jj{ "Jack Jack", "Uptown", 2, 30, 10 }; // instanciation, instance
    jj.print();

    vector<Friend> my_friends;
    my_friends.resize(2);

    for (auto& ele : my_friends)
        ele.print();


}

