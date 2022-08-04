// 02. Bitwise Operators in CPP (Part 02)

// LEFT SHITFT (<<) can be evaluated like x*2^y
// begining y characters will be ignored and at last 0 will be added at last
// (X << Y) IS EQUIVALENT TO X * 2^Y
// ASSUMING THAT THE LEADING Y BITS ARE 0

// RIGHT SHIFT (>>)
// last y characters will be ingored and 0 will be filled at begining
// (X >> Y) IS EQUIVALENT TO FLOOR OF (X / 2^Y)

// BITWISE NOT (~) which will be evaluated like (value of 2^highest bit - x)
// x = 5 --> (2^32 - 1) - x --> (2^32 - 1) - 5
// Signed bit uses special notation if leading bit is zero then this number is positive and if 1 then it's negative number

#include <iostream>
using namespace std;

int main()
{
    cout << "Left Shift operator\n";
    int x = 3;
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;

    int y = 4;
    y = (x << y);
    cout << y;

    cout << "\n\nRight Shift operator\n";
    x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    y = 4;
    y = (x >> y);
    cout << y;

    cout << "\n\nBitwise Not operator\n";
    unsigned int j = 1;
    cout << (~j) << endl;
    j = 5;
    cout << (~j) << endl;
    return 0;
}
