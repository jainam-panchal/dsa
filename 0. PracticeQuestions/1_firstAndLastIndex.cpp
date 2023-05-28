// https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

#include <bits/stdc++.h> 
using namespace std;

int firstIndex (vector<int>& arr,int n,int k) {
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

int lastIndex (vector<int>& arr,int n, int k) {
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

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first = firstIndex(arr,n,k);
    int last = lastIndex(arr,n,k);

    return {first,last};
}