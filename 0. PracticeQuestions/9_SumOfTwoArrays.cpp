// Sum Of Two Arrays
// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186

#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int value1 = 0;
	int value2 = 0;

	int mul = 0;
	for(int i=(n-1) ; i>=0 ; i--) {
		if(mul == 0) {
			value1 += a[i];
			mul = 10;
		}
		else {
			value1 += (mul * a[i]);
			mul *= 10;
		}
	}

	mul = 0;
	for(int i=(m-1) ; i>=0 ; i--) {
		if(mul == 0) {
			value2 += b[i];
			mul = 10;
		}
		else {
			value2 += (mul * b[i]);
			mul *= 10;
		}
	}

	value1 += value2;
	int rem;
	vector<int> ans;
	while(value1 != 0) {
		rem = value1 % 10;
		ans.push_back(rem);
		value1 /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}