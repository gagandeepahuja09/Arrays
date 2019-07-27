int Solution::maxSubArray(const vector<int> &A) {
    int currMax = A[0], retMax = A[0];
    for(int i = 1; i < A.size(); i++) {
        currMax = max(A[i], currMax + A[i]);
        retMax = max(retMax, currMax);
    }
    return retMax;
}

