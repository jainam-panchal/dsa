#include <iostream>
using namespace std;


int firstOcc(int arr[], int start, int end, int x,int size)
{
	if(start>end){
		return -1;
	}
	int mid = (start + end) / 2;
	if(arr[mid] > x){
		firstOcc(arr,start,mid-1,x,size);
	}
	else if(arr[mid] < x){
		firstOcc(arr,mid+1,end,x,size);
	}
	else{
		if(mid == 0 || arr[mid] != arr[mid-1]){
			return mid;
		}
		else{
			firstOcc(arr,start,mid-1,x,size);
		}
	}
}

int main() {

    int arr[] = {5,10, 10, 10, 10, 20};
	int n = 6;
	int target = 5;

	cout<<firstOcc(arr,0, n-1 , target,n);
	return 0;
}
