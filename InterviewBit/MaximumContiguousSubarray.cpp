// Kadane

int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
    int currSum = 0, maxSubArray = INT_MIN;
    for(int i=0; i<n; i++) {
        currSum += A[i];
        if(currSum < 0)
            currSum = 0;
        if(currSum > 0)    
            maxSubArray = max(maxSubArray, currSum);    
    }
    if(maxSubArray == INT_MIN) {
        for(int i=0; i<n; i++) {
            maxSubArray = max(maxSubArray, A[i]);
        }
    }
    return maxSubArray;
}

