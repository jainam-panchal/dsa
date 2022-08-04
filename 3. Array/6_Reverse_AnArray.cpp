#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	
	for(int i=0,j=size-1;i<=j;i++,j--){
		swap(arr[i],arr[j]);
	}
	
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
