// 04. Count total set bits
// https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/

#include <bits/stdc++.h>
using namespace std;

int countSet(int n)
{
    int res = 0;
    while (n > 0) // if((n$1) == 1)
    {
        if (n % 2 != 0)
            res++;
        n = n / 2; // n = n >> 1
    }
    return res;
}

int main()
{
    int x;
    cin >> x;
    int value = countSet(x);
    cout << value << endl;
    return 0;
}