#include <bits/stdc++.h>
using namespace std;

int lcs(char *str1, char *str2, int size1, int size2, vector<vector<int>> &dp)
{
    if (size1 == 0 || size2 == 0)
    {
        return 0;
    }

    if (str1[size1 - 1] == str2[size2 - 1])
    {
        // characters matched now decrese the size
        return dp[size1][size2] = 1 + lcs(str1, str2, size1 - 1, size2 - 1, dp);
    }

    if (dp[size1][size2] != -1)
    {
        return dp[size1][size2];
    }
    else
    {
        // calculate two possibilities
        return dp[size1][size2] = max(
                   lcs(str1, str2, size1, size2 - 1, dp),
                   lcs(str1, str2, size1 - 1, size2, dp));
    }
}

int main()
{
    char X[] = "ABA";
    char Y[] = "BA";

    int m = strlen(X);
    int n = strlen(Y);
    
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    cout << "Length of LCS is " << lcs(X, Y, m, n, dp);

    return 0;
}
