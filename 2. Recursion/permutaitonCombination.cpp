#include<bits/stdc++.h>
using namespace std;

void permComb(string s, int i=0)
{
    if (i == s.length()-1)
    {
        cout << s << " " ;
        return ;
    }
    for(int j=i; j<s.length(); j++)
    {
        swap(s[i],s[j]);
        permComb(s,i+1);
        swap(s[i],s[j]);    
    }
}

int main(){
    permComb("ABC");
    return 0;
}