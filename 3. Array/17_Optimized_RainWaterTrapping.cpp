#include <bits/stdc++.h>
using namespace std;
int maxWater(int arr[], int n)
{
    int left[n];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    int right[n];
    right[n - 1] = arr[n - 1]; // last element
    for (int i = n - 2 /* second last element*/; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    // calculating trapped water values
    int water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (min(left[i - 1], right[i + 1]) > arr[i])
        {
            water += min(left[i - 1], right[i + 1]) - arr[i];
        }
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
