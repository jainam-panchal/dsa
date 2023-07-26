#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    // create new temp vector
    // add elements to temp vector in sort order
    // copy that to the original vector

    vector<int> temp;
    int right = low;
    int left = mid + 1;

    while (right <= mid && left <= high)
    {
        // just push the smaller one
        if (arr[right] >= arr[left])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // add left out elements
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements to the original vec
    for (int i = low; i <= high; i++)
    {
        // [i-low] is because temp vector always stores from the start,
        // it doesn't have any idea about for which indexing this merging is begin done
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    // base condition
    if (low >= high)
        return;

    // calc mid
    int mid = low + (high - low) / 2;

    // sort the left part
    mergeSort(arr, low, mid);

    // sort the right part
    mergeSort(arr, mid + 1, high);

    // merge both parts
    merge(arr, low, mid, high);
}

int main()
{
    // merge sort
    vector<int> vec = {7, 1, 3, 5, 2, 1};
    int n = vec.size();

    // before sorting
    cout << "before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    mergeSort(vec, 0, n - 1);

    // after sorting
    cout << "\nafter sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
