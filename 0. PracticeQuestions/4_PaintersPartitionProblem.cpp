bool isPossible(vector<int>& boards, int k, int mid, int sum) {
    int painter = 1;
    int boardsPainted = 0;

    for (int i=0; i<boards.size(); i++)
    {
        if(boardsPainted + boards[i] <= mid ) {
            boardsPainted = boardsPainted + boards[i];
        }
        else {
            painter++;
            if(painter>k || boards[i]>mid)
                return false;
            boardsPainted = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int start = 0;
    int sum = 0;
    for (int i=0; i<boards.size(); i++) {
        sum += boards[i];
    }
    int end = sum;
    
    int ans = -1;

    int mid = start + (end - start) / 2;
    while(start <= end) {
        if(isPossible(boards,k,mid,sum)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}