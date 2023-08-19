#include <bits/stdc++.h>
using namespace std;

// *QUICK SORT STARTS //
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
// *QUICK SORT FINISHED //

// *MERGE SORT STARTS //
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;

    // [low..mid]
    // [mid+1..high]

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
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

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}
// *MERGE SORT FINISHED //

int main()
{
    vector<int> arr = {12, 4, 5, 1, 2, 4, 6, 2};
    int start = 0;
    int end = arr.size() - 1;

    // mergeSort(arr, start, end);
    quickSort(arr, start, end);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
