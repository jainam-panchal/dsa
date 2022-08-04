// Optimized with Tail Recursion

#include <iostream>
using namespace std;

int fact(int n,int k){
	if(n== 1 || n==0){
		return k;
	}
	return fact(n-1,n*k);
}

int main() {
	int n;
	cin >> n;
	int k = 1;
    cout << fact(n,k);
}



/*
int fact(int n){
    if(n == 1 || n == 0){
    	return 1;
	}
	return n * fact(n-1);
}
int main() {
	int n;
	cin >> n;
    cout << fact(n);
}
*/

