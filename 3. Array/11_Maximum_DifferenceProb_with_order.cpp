// expected output : 8
#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = 7;
    
    int res = arr[1] - arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i] > res){
                res = arr[j]-arr[i];
            }
        }
    }
    cout << res << endl;
}
