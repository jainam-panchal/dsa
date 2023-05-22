#include <iostream>
using namespace std;

int firstIndex (int arr[],int n,int k) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2 ;
    int result = -1;

    while(start <= end) {
        
        if(arr[mid] == k) {
            result = mid;
            end = mid - 1;
        }
        // left side of mid
        else if (k <= arr[mid]) {
            end = mid - 1;
        }
        // right part
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return result;
}

int lastIndex (int arr[], int n, int k) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2 ;
    int result = -1;

    while(start <= end) {
        
        if(arr[mid] == k) {
            result = mid;
            start = mid + 1;
        }
        // left side of mid
        else if (k <= arr[mid]) {
            end = mid - 1;
        }
        // right part
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return result;
}

// 0(log N)
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2 ;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        // left side of mid
        else if (key <= arr[mid]) {
            end = mid - 1;
        }
        // right part
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return -1;
}

int main(){

    int odd[] = {1,1,5,5,5,5};

    int oddIndex = firstIndex(odd,6,1);
    cout << "Index : " << oddIndex << endl;
    
}