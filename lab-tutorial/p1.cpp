#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr, int n)
{
    auto start = chrono::steady_clock::now();
    for (int i = 1; i < n; i++)
    {
        // select one value and insert it
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // move elements
                swap(arr[j], arr[j + 1]);
            }
            else
                // found the right spot
                break;
            j--;
        }

        // put the value;
        arr[j + 1] = temp;
    }
    auto end = chrono::steady_clock::now();
    cout << "Time Analysis of Sorting Algo" << endl;
    cout << "Elapsed time in nanoseconds: "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
 
    cout << "Elapsed time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
 
    cout << "Elapsed time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()
        << " ms" << endl;
 
    cout << "Elapsed time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec";
}

void selection_sort(vector<int> &arr, int n)
{
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
    auto end = chrono::steady_clock::now();
    cout << "Time Analysis of Sorting Algo" << endl;
    cout << "Elapsed time in nanoseconds: "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
 
    cout << "Elapsed time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
 
    cout << "Elapsed time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()
        << " ms" << endl;
 
    cout << "Elapsed time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec";
}

void bubble_sort(vector<int> &arr, int n)
{
    auto start = chrono::steady_clock::now();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    auto end = chrono::steady_clock::now();
    cout << "Time Analysis of Sorting Algo" << endl;
    cout << "Elapsed time in nanoseconds: "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count()
        << " ns" << endl;
 
    cout << "Elapsed time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
 
    cout << "Elapsed time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count()
        << " ms" << endl;
 
    cout << "Elapsed time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " sec";
}

int main()
{
    vector<int> arr;
    ifstream inputFile("randomNumbers.txt");

    // reading file and adding it to vector
    cout << "Reading File..." << endl;
    int value;
    while (inputFile >> value)
    {
        arr.push_back(value);
    }

    // sorting
    cout << "Select a Sorting Algorithm:" << endl;
    cout << "1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort\nChoose : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        bubble_sort(arr, arr.size());
        break;
    case 2:
        insertion_sort(arr, arr.size());
        break;
    case 3:
        selection_sort(arr, arr.size());
        break;
    default:
        break;
    }
    return 0;
}
