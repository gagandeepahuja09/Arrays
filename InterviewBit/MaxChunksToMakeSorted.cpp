int Solution::solve(vector<int> &A) {
    int mx = INT_MIN, cnt = 0;
    for(int i = 0; i < A.size(); i++) {
        mx = max(mx, A[i]);
        if(mx == i)
            cnt++;
    }
    return cnt;
}

