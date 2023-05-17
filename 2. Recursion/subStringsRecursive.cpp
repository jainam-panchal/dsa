#include <bits/stdc++.h>
using namespace std;

void powerSet(string str, int index = 0, string current = ""){
    
    int size = str.length();

    if(index == size){
        cout << "\"" << current << "\" , ";
        return;
    }

    powerSet(str, index+1, current);
    powerSet(str, index+1, current + str[index]);
}


int main(){
    powerSet("abc");
    return 0;
}