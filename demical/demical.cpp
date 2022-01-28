#include <iostream>
#include <bitset>

int main()
{
    // ------------------------------------------- Bit Mask -------------------------------------------
    //using namespace std;

    //const unsigned int red_mask = 0xFF0000;
    //const unsigned int green_mask = 0x00FF00;
    //const unsigned int blue_mask = 0x0000FF;

    //cout << std::bitset<32>(red_mask) << endl;
    //cout << std::bitset<32>(green_mask) << endl;
    //cout << std::bitset<32>(blue_mask) << endl;

    //unsigned int pixel_color = 0xDAA520;

    //cout << std::bitset<32>(pixel_color) << endl;

    //unsigned char blue = pixel_color & blue_mask;

    //cout << "blue" << bitset<8>(blue) << "  " << int(blue) << endl;

    //return 0;

    // ------------------------------------------- Bit Flag -------------------------------------------
    //using namespace std;

    //const unsigned char opt0 = 1 << 0;
    //const unsigned char opt1 = 1 << 1;
    //const unsigned char opt2 = 1 << 2;
    //const unsigned char opt3 = 1 << 3;

    //cout << bitset<8>(opt0) << endl;
    //cout << bitset<8>(opt1) << endl;
    //cout << bitset<8>(opt2) << endl;
    //cout << bitset<8>(opt3) << endl;

    //unsigned char items_flag = 0;
    //cout << "No item " << bitset<8>(items_flag) << endl;

    //// item0 on
    //items_flag |= opt0;
    //cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

    //// item3 on
    //items_flag |= opt3;
    //cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

    //// item3 lost
    //items_flag &= ~opt3;
    //cout << "Item3 lost " << bitset<8>(items_flag) << endl;


    //// has item1?
    //if (items_flag & opt1) { cout << "Has item1" << endl; }
    //else { cout << "Not Have item1" << endl; }

    //// has item0?
    //if (items_flag & opt0) { cout << "Has item0" << endl; }

    //// obtain item 2, 3
    //items_flag |= (opt2 | opt3);

    //cout << bitset<8>(opt2 | opt3) << endl;
    //cout << "Item2, 3 obtained" << bitset<8>(items_flag) << endl;

    //if ((items_flag & opt2) && !(items_flag & opt1))
    //{
    //    items_flag ^= opt2;
    //    items_flag ^= opt1;
    //}
    //cout << bitset<8>(items_flag) << endl;

    //return 0;

    // ------------------------------------------- Bit Flag-------------------------------------------
    // 
    //unsigned int a = 0b1100;
    //unsigned int b = 0b0110;

    ////cout << a << "   " << b << endl;

    //cout << std::bitset<4>(a & b) << endl; //bitwise AND
    //cout << std::bitset<4>(a | b) << endl; //bitwise OR
    //cout << std::bitset<4>(a ^ b) << endl; //bitwise XOR


    //cout << std::bitset<16>(~a) << "  " << (~a) <<  endl; // ! = logical

    //cout << std::bitset<16>(a >> 1) << "  " << (a >> 1) << endl;
    //cout << std::bitset<16>(a >> 2) << "  " << (a >> 2) << endl;
    //cout << std::bitset<16>(a >> 3) << "  " << (a >> 3) << endl;
    //cout << std::bitset<16>(a >> 4) << "  " << (a >> 4) << endl;


}
