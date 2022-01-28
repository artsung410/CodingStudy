
#include <iostream>
#include <cstdlib> // std::radn(), std::srand()
#include <ctime> // std::time()


using namespace std;


int main()
{
    //std::srand(5323); //seed
    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int count = 1; count <= 100; ++count)
    {
        cout << std::rand() << "\t";

        if (count % 5 == 0) cout << endl; 
    }

    return 0;
 
    
}

