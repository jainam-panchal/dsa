#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int profit, weight;
    Item(int profit, int weight)
    {
        this->profit = profit;
        this->weight = weight;
    }
};

// according to profit / weight
static bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}

// according to maximum profit
static bool cmp1(struct Item a, struct Item b)
{
    if (a.profit > b.profit)
        return true;
}

// accending min weight
static bool cmp2(struct Item a, struct Item b)
{
    if (a.weight < b.weight)
        return true;
}

double fractionalKnapsack(int totalWeight, struct Item arr[], int n)
{
    // 1st variation according to p/w
    // sort(arr, arr + n, cmp);

    // 2nd according to max profit / descending profit
    // sort(arr, arr + n, cmp1);

    // 3rd min weight / ascending weight
    sort(arr, arr + n, cmp2);

    double ans = 0.0;
    // if w is less than totalWeight then include and if not just include the fraction
    for (int i = 0; i < n; i++)
    {
        if (arr[i].weight <= totalWeight)
        {
            // no overflow include that and decrese the weight
            totalWeight = totalWeight - arr[i].weight;
            ans += arr[i].profit;
        }
        else
        {
            ans += arr[i].profit * ((double)totalWeight / (double)arr[i].weight);
            break;
        }
    }
    return ans;
}

int main()
{
    int W = 15;
    Item arr[] = {{15, 6}, {10, 4}, {8, 1}, {9, 3}, {7, 3}};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << fractionalKnapsack(W, arr, N);
    return 0;
}
