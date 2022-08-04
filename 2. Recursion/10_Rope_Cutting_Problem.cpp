// You are given N ropes. A cut operation is performed on ropes such that all of them are reduced by the length of the smallest rope. Display the number of ropes left after every cut operation until the length of each rope is zero.
/*
i/p = n=5,a=2,b=5,c=1
o/p = 5
we make 5 pieces of lenght 1 each

i/p = n=23,a=12,b=9,c=11
o/p = 2
we make 2 pieces of length 12 and 11

i/p = n=5,a=4,b=2,c=6
o/p = -1
not possible
*/

#include <iostream>
using namespace std;

int maxPieces(int n,int a,int b, int c){
	if(n==0) return 0;
	if(n<0) return -1;
	
	int res;
	int x = maxPieces(n-a,a,b,c);
	int y = maxPieces(n-b,a,b,c);
	int z = maxPieces(n-c,a,b,c);
	
	//finding max
	if(x>y){
		if(x>z)
      		res = x;
      	else
     	 	res = z;
   }else {
      	if(y>z)
      		res = y;
      	else
      		res = z;
   }
	
	if(res == -1) return -1;
	return res+1;
}

int main()
{
	int totalLength,part1,part2,part3;
	cin >> totalLength >> part1 >> part2 >> part3;
	cout << maxPieces(totalLength,part1,part2,part3);
    return 0;
}
