#include <iostream>
using namespace std;


int firstOcc(int arr[], int n, int x)
{
	int start,end,i;
	start = 0; end = n - 1;
	while(start <= end){
		int mid = (start + end) / 2;

		if(arr[mid] > x){
			end = mid - 1;
		}
		else if(arr[mid] < x){
			start = mid + 1;
		}
		else{
			if(mid == 0 || arr[mid] != arr[mid+1]){
				return mid;
			}
			else{
				start = mid + 1;
			}
		}
	}
	return -1;
}

int main() {

    int arr[] = {5,10, 10, 10, 10, 20};
	int n = 6;
	int target = 10;

	cout<<firstOcc(arr, n, target);
	return 0;
}
