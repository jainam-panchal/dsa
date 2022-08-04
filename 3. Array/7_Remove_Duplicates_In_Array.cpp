#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int arr[],int n){
        int temp[n];
        temp[0] = arr[0];
        int count = 1;
        
        for(int i=1; i<n ; i++){
            if(temp[count-1] != arr[i]){
                temp[count] = arr[i];
                count ++;
            }
        }
        for(int i=0;i<count;i++){
            arr[i] = temp[i];
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends
