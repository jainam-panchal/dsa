// Find Odd Occuring Number
// https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1
// Given an array of N positive integers where all numbers occur even number of times except one number which occurs odd number of times. Find the exceptional number.

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
		// naive solution
		int count = 0;
		for(int i=0; i<n;i++){
			for(int j=0;j<n;j++){
				if(arr[j] == arr[i])
					count ++;
			}
			if(count % 2 != 0){
				return arr[i];
			}
		}
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends
