// O(N * N)

int Solution::solve(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < m; j++) {
            A[i][j] += A[i][j - 1];
        }
    }
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < m; j++) {
            A[i][j] += A[i - 1][j];
        }
    }
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int x2 = n - 1, y2 = m - 1, x1 = i, y1 = j;
            int ans = A[x2][y2];
            if(x1 > 0)
                ans -= A[x1 - 1][y2];
            if(y1 > 0)
                ans -= A[x2][y1 - 1];
            if(x1 > 0 && y1 > 0)
                ans += A[x1 - 1][y1 - 1];
            mx = max(mx, ans);
        }
    }
    return mx;
}

