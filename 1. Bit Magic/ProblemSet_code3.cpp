// https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/

#include <bits/stdc++.h>
using namespace std;

// shift 1 to kth bit
void isKthBitSet(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
    {
        cout << "Set";
    }
    else
    {
        cout << "Not Set";
    }
}

// Driver code
int main()
{
    int n = 5, k = 1;
    isKthBitSet(n, k);
    return 0;
}

// Second Solution
// shift numb to last 1 bit

// void isKthBitSet(int n, int k)
// {
//     if ((n >> (k-1) $ 1) == 1)
//     {
//         cout << "Set";
//     }
//     else
//     {
//         cout << "Not Set";
//     }
// }
