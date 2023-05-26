#include <iostream>
using namespace std;

void merge (int arr1[], int m, int arr2[], int n, int ans[])
{
    int i=0,j=0;
    int k=0;
        while(i<m && j<n)
        {
            if(arr1[i] < arr2[j])
            {
                ans[k] = arr1[i];
                k++; i++;
            }
            else {
                ans[k] = arr2[j];
                k++; j++;
            }
        }
        
        if(i<m)
        {
            ans[k] = arr1[i];
            k++,i++;
        }
        else if(j<n)
        {
            ans[k] = arr2[j];
            k++,j++;
        }
}

void display (int arr[], int n)
{
    for (int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << endl;
}


int main() {
    int arr1[] = {1,3,5,10};
    int arr2[] = {2,4,6};
    int ans[7] = {};
    merge(arr1,4,arr2,3,ans);
    display(ans,7);
    return 0;
}