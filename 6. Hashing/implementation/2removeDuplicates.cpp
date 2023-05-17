#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(int *a, int n)
{
    unordered_map<int,bool> map;
    vector<int> output;
    for(int i=0;i<n;i++)
    {
        if(map[a[i]] > 0)
            continue;
        
        output.push_back(a[i]);
        map[a[i]] = true;
    }
    return output;
}

int main(){
    int arr[10]  = {1,2,3,4,5,6,1,2,3,4};
    vector<int> uniqueElements = removeDuplicates(arr,10);
    for(int i=0;i<uniqueElements.size();i++)
        cout<<uniqueElements[i]<<" ";
    return 0;
}