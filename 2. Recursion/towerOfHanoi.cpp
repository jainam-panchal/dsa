#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c)
{
    if(n == 1)
    {
        cout << "Move " << a << " to " << c << endl;
        return;
    }

    towerOfHanoi(n-1,a,c,b);
    cout << "Move " << a << " to " << c << endl;
    towerOfHanoi(n-1,b,a,c);
}

int main(){
    cout << "Tower of Hanoi : \nTo move 3 discs from A to C using B\n" << endl;
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}

/*
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c){

    if(n==1){
        cout << "Move 1 disc from " << a << " to " << c << endl;
        return;
    }
    towerOfHanoi(n-1,a,c,b);
    cout << "Move 1 disc from " << a << " to " << c << endl;
    towerOfHanoi(n-1,b,a,c);

}

int main(){
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}
*/

