#include <iostream>
using namespace std;


int lastOcc(int arr[], int start, int end, int x,int size)
{
	if(start>end){
		return -1;
	}
	int mid = (start + end) / 2;
	if(arr[mid] > x){
		lastOcc(arr,start,mid-1,x,size);
	}
	else if(arr[mid] < x){
		lastOcc(arr,mid+1,end,x,size);
	}
	else{
		if(mid == size-1 || arr[mid] != arr[mid+1]){
			return mid;
		}
		else{
			lastOcc(arr,mid+1,end,x,size);
		}
	}
}

int main() {

    int arr[] = {5,10, 10, 10, 10, 20};
	int n = 6;
	int target = 20;

	cout<<lastOcc(arr,0, n-1 , target,n);
	return 0;
}
