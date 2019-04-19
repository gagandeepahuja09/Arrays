vector<int> Solution::solve(vector<vector<int> > &A, vector<int> &B, vector<int> &C, vector<int> &D, vector<int> &E) {
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
    vector<int> ret;
    for(int i = 0; i < B.size(); i++) {
        int x1 = B[i] - 1, x2 = D[i] - 1, y1 = C[i] - 1, y2 = E[i] - 1;
        int ans = A[x2][y2];
        if(x1 > 0)
            ans -= A[x1 - 1][y2];
        if(y1 > 0)
            ans -= A[x2][y1 - 1];
        if(x1 > 0 && y1 > 0)
            ans += A[x1 - 1][y1 - 1];
        ret.push_back(ans);
    }
    return ret;
}

