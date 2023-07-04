#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {
    // Write your code here.
    int max = 0;
    bool flag = true;

    for(int i=0 ; i<n ; i++) {
        int sum = 0;
        for(int j=0 ; j<m ; j++) {
            sum += mat[i][j];
        }
        if(flag) {
            max = sum;
            flag = false;
        }
        else {
            if(sum > max) {
                max = sum;
            }
        }
    }

    return max;
}