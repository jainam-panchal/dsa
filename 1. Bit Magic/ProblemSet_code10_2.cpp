#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);

    // one line of code is
    // return (n != 0 && (n & (n - 1)) == 0);
}

int main()
{
    int x;
    cin >> x;
    isPowerOfTwo(x) ? cout << "Yes" << endl : cout << "No" << endl;

    return 0;
}