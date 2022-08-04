#include <iostream>
using namespace std;

// Theta(n)
// T(n) = T(n-1) + Theta(1)

int sum(int x){
	if(x==0){
		return 0;
	}
	return x + sum(x-1);
}

int main()
{
	int x;
	cin >> x;
	cout << sum(x);
    return 0;
}
