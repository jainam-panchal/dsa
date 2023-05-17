#include <iostream>
using namespace std;

int maxRope (int n, int a, int b, int c){
	
	if(n == 0)
		return 0;
	if(n < 0) 
		return -1;

    int first = max(maxRope(n-a,a,b,c) , maxRope(n-b,a,b,c));
    int result = max(first, maxRope(n-c,a,b,c));


    // to handle corner case (9,2,2,2)
	if(result == -1)
		return -1;
	
	return result+1 ;

}

int main(){
    cout << maxRope(23,11,9,12);
}