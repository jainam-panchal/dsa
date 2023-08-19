#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target)
{
    int ans = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
            return i;
    }

    return ans;
}

int binarySearch(vector<int> arr, int target)
{

    int ans = -1;
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            return ans;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 7, 8, 9, 10, 55, 100};
    int n;
    cout << "Enter Target Value : ";
    cin >> n;

    int in;
    cout << "\nEnter 1 for Linear Search" << endl;
    cout << "Enter 2 for Binary Search" << endl;
    cout << "Input : ";
    cin >> in;

    int ans;
    switch (in)
    {
    case 1:
        ans = linearSearch(arr, n);
        break;
    case 2:
        ans = binarySearch(arr, n);
        break;
    default:
        break;
    }

    cout << "\nIndex : " << ans << endl;
}
