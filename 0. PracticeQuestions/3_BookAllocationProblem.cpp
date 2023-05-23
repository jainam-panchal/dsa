// https://www.codingninjas.com/codestudio/problems/allocate-books_1090540

bool isPossibleAns(vector<int>& arr,int n,int m, int mid) {
    int pageSum = 0;
    int studentCount = 1;
    for (int i=0; i<n; i++) {
        if(pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else {
            studentCount++;
            if(studentCount>m || arr[i]>mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(n<m) {
        return -1;
    }
    int start = 0;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start)/2;
    
    int ans = -1;
    while(start <= end)
    {
        if(isPossibleAns(arr,n,m,mid)){
            end = mid - 1;
            ans = mid;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}