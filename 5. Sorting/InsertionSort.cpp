// sorting algorithm that places an unsorted element at its suitable place in each iteration

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int value, j;
    for (int i = 1; i < n; i++)
    {
        value = arr[i];
        j = i;

        while (j >= 1 && arr[j - 1] > value)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = value;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};   
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
