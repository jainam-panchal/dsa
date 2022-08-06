#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5,6,7,7};
	int n = 8;
	int res,count;
	res = count = 1;
	
	for(int i=1;i<n;i++){
		if( (arr[i]%2==0 && arr[i-1]%2!=0) ||
			(arr[i]%2!=0 && arr[i-1]%2==0) )
		{
			count ++;
			res = max(res,count);
		}
		else{
			count=1;
		}
	}
	
	if(res == 1){
		res = 0;
	}
	cout << res << endl;
}
