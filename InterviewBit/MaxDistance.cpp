int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector<int> lMin(n, 0);
    vector<int> rMax(n, 0);
    lMin[0] = A[0];
    for(int i = 1; i < n; i++) {
        lMin[i] = min(A[i], lMin[i - 1]);
    }
    rMax[n - 1] = A[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        rMax[i] = max(A[i], rMax[i + 1]);
    }
    int maxDiff = 0;
    int i = 0, j = 0;
    while(i < n && j < n) {
        if(lMin[i] <= rMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j++;
        }
        else {
            i++;
        }
    }
    return maxDiff;
}

