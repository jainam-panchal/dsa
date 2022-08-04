// 10. Power of 2
// https://www.geeksforgeeks.org/program-to-find-whether-a-given-number-is-power-of-2/

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    isPowerOfTwo(x) ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}