#include <iostream>
using namespace std;

int main(){
	int arr[] = {40,50,50,50};
	int n = 4;
	
	
	// printing freq of sorted array
	int i=1;
	int freq=1;
	while(i<n){
		while(i<n && arr[i] == arr[i-1]){
			freq++;
			i++;
		}
		cout << arr[i-1] << " " << freq << endl;
		i++;
		freq=1;
		if(n == 1 || arr[n-1] != arr[n-2]){
			cout << arr[n-1] << " " << freq << endl; 
		}
	}
	
	return 0;
}
