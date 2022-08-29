#include <bits/stdc++.h>
using namespace std;
int maxWater(int arr[], int n)
{
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int left_max = arr[i];
        int right_max = arr[i];
        for (int j = i; j >= 0; j--)
        {
            left_max = max(left_max, arr[j]);
        }
        for (int j = i; j < n; j++)
        {
            right_max = max(right_max, arr[j]);
        }
        water += min(left_max, right_max) - arr[i];
    }
    return water;
}

int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxWater(arr, n);

    return 0;
}
