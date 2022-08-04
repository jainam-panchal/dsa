// Brian Kerningam's Algorithm
// complexity Theta of (total set bits)
#include <bits/stdc++.h>
using namespace std;

int countSet(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
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