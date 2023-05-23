// https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559

bool isPossible(vector<int> &stalls, int k, int mid) {

    int cow = 1;
    int lastPos = stalls[0];

    for(int i=0; i<stalls.size(); i++) {
        if(stalls[i] - lastPos  >= mid) {
            cow++;
            if(cow == k)
                return true;
            lastPos = stalls[i];
        }
    }
    return false;

}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    int start = 0;
    
    sort(stalls.begin(), stalls.end());
    int maxi = -1;
    int n = stalls.size();
    int end = stalls[n-1];
    int ans = -1;

    int mid = start + (end-start)/2 ;
    while(start<=end) {
        if(isPossible(stalls,k,mid)){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end-start)/2 ;
    }
    return ans;
}