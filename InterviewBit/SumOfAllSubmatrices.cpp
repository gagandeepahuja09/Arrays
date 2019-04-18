int Solution::solve(vector<vector<int> > &A) {
    int sum = 0;
    int n = A.size(), m = A[0].size();
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += (A[i][j] * (i + 1) * (j + 1) * (m - i) * (n - j));
        }
    }
    return sum;
}

