int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n <= 1)
        return 0;
    vector<int> lMin(n), rMax(n);
    lMin[0] = A[0];
    for(int i=1; i<n; i++) {
        lMin[i] = min(lMin[i-1], A[i]);
    }
    rMax[n-1] = A[n-1];
    for(int i=n-2; i>=0; i--) {
        rMax[i] = max(rMax[i+1], A[i]);
    }
    int i = 0, j = 0, maxDiff = -1;
    while(i < n && j < n) {
        if(lMin[i] <= rMax[j]) {
            maxDiff = max(maxDiff, j-i);
            j++;
        }
        else
            i++;
    }
    return maxDiff;
}

