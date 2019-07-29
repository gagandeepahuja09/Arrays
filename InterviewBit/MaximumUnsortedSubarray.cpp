vector<int> Solution::subUnsort(vector<int> &A) {
    int l = 0, r = A.size() - 1;
    while(l <= r && A[l] <= A[l + 1])
        l++;
    if(l >= r)
        return { -1 };
    while(A[r] >= A[r - 1])
        r--;
    int mn = INT_MAX, mx = INT_MIN;
    for(int k = l; k <= r; k++) {
        mx = max(A[k], mx);
        mn = min(A[k], mn);
    }
    while(l >= 0 && A[l] > mn)
        l--;
    while(r < A.size() && A[r] < mx)
        r++;
    return { l + 1, r - 1 };    
}

