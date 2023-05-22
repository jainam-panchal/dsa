int firstIndex (vector<int>& arr,int n,int k) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2 ;
    int result = -1;

    while(start <= end) {
        
        if(arr[mid] == k) {
            result = mid;
            end = mid - 1;
        }
        // left side of mid
        else if (k <= arr[mid]) {
            end = mid - 1;
        }
        // right part
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return result;
}

int lastIndex (vector<int>& arr,int n, int k) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2 ;
    int result = -1;

    while(start <= end) {
        
        if(arr[mid] == k) {
            result = mid;
            start = mid + 1;
        }
        // left side of mid
        else if (k <= arr[mid]) {
            end = mid - 1;
        }
        // right part
        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return result;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int first = firstIndex(arr,n,x);
    int last = lastIndex(arr,n,x);
	if (first == -1 || last == -1)
		return 0;
	return (last-first)+1;
}
