// https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298

#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int k)
{
	int s = k+1;
	int e = arr.size()-1;

	while(s<=e)
	{
		swap(arr[s], arr[e]);
		s++;
		e--;
	}
}
