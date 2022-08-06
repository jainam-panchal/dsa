#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {0,1,1,1,0,0,1,1};
	int n=7;
	int count, res;
	count = res = 0;
	
	for(int i=1;i<n;i++){
		if(arr[i] == 0){
			count=0;
		}
		else{
			count++;
			res = max(res,count);
		}
	}
	cout << res << endl;
	return 0;
}
