// stable algorithm
// bubble sort - in every round the largest value takes their correct place.

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n) {

    bool swapped = false;
    for (int i=0 ; i<n-1 ; i++)
    {   
        swapped = false;
        for(int j=0 ; j<n-i-1 ; j++) {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
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
    bubble_sort(arr,size);
    print(arr,size);

}