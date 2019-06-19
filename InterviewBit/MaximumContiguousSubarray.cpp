int Solution::maxSubArray(const vector<int> &A) {
    int maxSum = INT_MIN, currMax = 0;
    for(int i = 0; i < A.size(); i++) {
        currMax += A[i];
        if(currMax < 0)
            currMax = 0;
        if(currMax > 0)    
            maxSum = max(maxSum, currMax);
    }
    if(maxSum == INT_MIN) {
        for(int i = 0; i < A.size(); i++)
            maxSum = max(maxSum, A[i]);
    }
    return maxSum;
}

