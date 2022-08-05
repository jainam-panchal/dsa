// expected output : 10,6,5,2 (or in reverse)
#include <iostream>
using namespace std;

int main(){
	int arr[] = {7,10,4,10,6,5,2};
	int n = 7;
	
	int current = arr[n-1];
	cout << current << " ";
	
	// reverse leader printing 
	for(int i=n-2;i>=0;i--){
		if(current < arr[i]){
			current = arr[i];
			cout << current << " ";
		}
	}
	
	// modified	

}
