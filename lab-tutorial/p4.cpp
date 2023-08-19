#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &heap, int curr, int size)
{
    int largest = curr;
    int l = 2 * curr + 1;
    int r = 2 * curr + 2;

    if (l < size && heap[l] > heap[largest])
        largest = l;
    if (r < size && heap[r] > heap[largest])
        largest = r;

    if (largest != curr)
    {
        swap(heap[largest], heap[curr]);
        heapify(heap, largest, size);
    }
}

void heapSort(vector<int> &heap)
{

    // building heap
    for (int i = heap.size() / 2 - 1; i >= 0; i--)
    {
        heapify(heap, i, heap.size());
    }

    for (int i = heap.size() - 1; i > 0; i--)
    {
        swap(heap[0], heap[i]);
        heapify(heap, 0, i);
    }
}

int main()
{
    vector<int> heap{9, 6, 8, 2, 1, 4, 3};
    heapSort(heap);

    for (int i = 0; i < heap.size(); i++)
    {
        cout << heap[i] << " ";
    }
    return 0;
}
