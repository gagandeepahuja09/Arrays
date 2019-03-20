vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> res;
    vector<int> sol;
    int n = A.size();
    for(int i=0; i<n; i++) {
        int x = i, j = 0;
        sol.clear();
        while(x >= 0) {
            sol.push_back(A[x][j]);
            x--;
            j++;
        }
        reverse(sol.begin(), sol.end());
        res.push_back(sol);
    }
    for(int i=1; i<n; i++) {
        int x = i, y = n-1;
        sol.clear();
        while(x <= n-1) {
            sol.push_back(A[x][y]);
            x++;
            y--;
        }
        res.push_back(sol);
    }
    return res;
}

