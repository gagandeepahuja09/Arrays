int Solution::maxArr(vector<int> &A) {
    int mx1, mx2, mn1, mn2;
    mx1 = mx2 = INT_MIN;
    mn1 = mn2 = INT_MAX;
    for(int i = 0; i < A.size(); i++) {
        mx1 = max(mx1, A[i] + i);
        mx2 = max(mx2, A[i] - i);
        mn1 = min(mn1, A[i] + i);
        mn2 = min(mn2, A[i] - i);
    }
    return max(mx1 - mn1, mx2 - mn2);
}

