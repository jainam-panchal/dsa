#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int start,int end, int x)
{
	if(start>end){
		return -1;
	}
	int mid = (start + end) / 2;
	if(arr[mid] == x){
		return mid;
	}
	else if(arr[mid] > x){
		binarySearch(arr,start,end-1,x);
	}
	else{
		binarySearch(arr,start+1,end,x);
	}
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};
	int n = 6;
	int x = 60;
	cout<<binarySearch(arr,0,n-1, x);
	return 0;
}
