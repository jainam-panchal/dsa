// sorting algorithm that places an unsorted element at its suitable place in each iteration

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    
    for(int i=1 ; i<n ; i++)
    {
        // select one element and insert it into the correct spot in the array
        int temp = arr[i];
        int j = i-1;

        while(j >= 0) {
            if(arr[j] > temp)
                // move elements 
                arr[j+1] = arr[j];
            else
                // found the right spot
                break;
            j--;
        }

        // put the value
        arr[j+1] = temp;
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
    insertion_sort(arr,size);
    print(arr,size);

}