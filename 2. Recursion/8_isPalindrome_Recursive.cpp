#include <iostream>
using namespace std;

//Worst Case: O(N)
//T(n) = T(n-2) + Theta(1)

bool pali(string &str,int start, int end){
	if(start >= end){
		return true;
	}
	return (str[start] == str[end]) && pali(str,start+1,end-1);  
}

int main()
{
	string value;
	cin >> value;
	cout << pali(value,0,value.length()-1);
    return 0;
}
