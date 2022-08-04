#include <iostream>
using namespace std;

//Time Complexity : Theta(d)
//Aux Space : Theta(d)

int sum(int x){
	if(x <= 9){
		return 9;
	}
	return (x%10) + sum(x/10);
}

int main()
{
	int x;
	cin >> x;
	cout << sum(x);
    return 0;
}
