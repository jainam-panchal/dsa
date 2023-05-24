// Unstable algorithm
// selection sort --  in every round the smallest value takes their correct place.

#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    int i,j,min_index;

    for(i=0; i<n-1; i++) {
        min_index = i;

        for(j=i+1; j<n; j++) {
            if(arr[min_index] > arr[j]) {
                min_index = j;
            }
        }

        if(min_index != i) {
            swap(arr[min_index], arr[i]);
        }
    }
}

void print(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}


int main() {

    int arr[] = {1,5,1,2,4,51,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted : " ;
    print(arr,size);
    cout << "Sorted   : " ;
    selection_sort(arr,size);
    print(arr,size);

}