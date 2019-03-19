int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if(n < 2)
        return 0;
    int maxE = *max_element(A.begin(), A.end());
    int minE = *min_element(A.begin(), A.end());
    int len = maxE - minE;
    if(len <= 1)
        return len;
    vector<int> bucketMax(n, INT_MIN);
    vector<int> bucketMin(n, INT_MAX);
    
    for(int i=0; i<n; i++) {
        int bucket = (double)(A[i] - minE)/len * (n-1);
        bucketMin[bucket] = min(bucketMin[bucket], A[i]);
        bucketMax[bucket] = max(bucketMax[bucket], A[i]);
    }
    int maxGap = 0, pre = bucketMax[0];
    for(int i=1; i<n; i++) {
        if(bucketMax[i] == INT_MIN)
            continue;
        maxGap = max(maxGap, bucketMin[i] - pre);
        pre = bucketMax[i];
    }
    return maxGap;
}

