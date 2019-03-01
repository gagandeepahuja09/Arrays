// Similar To Kadane

vector<int> Solution::flip(string A) {
    int n = A.size();
    vector<int> res(2, -1);
    int start = 0, end = 0, currSum = 0, maxSum = 0;
    for(int i=0; i<n; i++) {
        if(A[i] == '0')
            currSum++;
        else
            currSum--;
        if(currSum < 0) {
            currSum = 0;
            start = i + 1;
        }
        if(currSum > maxSum) {
            maxSum = currSum;
            res[0] = start;
            res[1] = end = i;
        }
    }
    if(res[0] == -1 && res[1] == -1)
        return {};
    
    res[0]++; res[1]++;    
    return res;    
}

