int Solution::maxArr(vector<int> &A) {
    int maxDiff = INT_MIN, minDiff = INT_MAX, maxSum = INT_MIN, 
    minSum = INT_MAX, ret = 0;
    for(int i = 0; i < A.size(); i++) {
        maxSum = max(maxSum, A[i] + i);
        maxDiff = max(maxDiff, A[i] - i);
        minSum = min(minSum, A[i] + i);
        minDiff = min(minDiff, A[i] - i);
    }
    ret = max(ret, maxSum - minSum);
    ret = max(ret, maxDiff - minDiff);
    return ret;
}

