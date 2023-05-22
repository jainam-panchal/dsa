#include <iostream>
using namespace std;

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

    int odd[] = {1,3,5,7,9,11};
    int oddIndex = binarySearch(odd,6,1);
    cout << "Index : " << oddIndex << endl;
    
}