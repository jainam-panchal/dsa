// expected output : 8
#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = 7;
    
    int min_value = arr[0];
    int max_diff = arr[1] - arr[0];
    int i;
    
    for(int i=1;i<n;i++){
    	if(arr[i] - min_value > max_diff){
			max_diff = arr[i] - min_value;
		}
		if(arr[i] < min_value){
    		min_value = arr[i];
		}
		
	}
	cout << max_diff;
}
