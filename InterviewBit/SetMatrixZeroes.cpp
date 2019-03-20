void Solution::setZeroes(vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
    /*
    // Memory Limit Exceeded
    vector<pair<int, int>> v;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(A[i][j] == 0)
                v.push_back({ i, j });
        }
    }
    for(int x = 0; x < v.size(); x++) {
        int a = v[x].first, b = v[x].second;
        for(int i=0; i<m; i++) {
            A[i][b] = 0;
        }
        for(int j=0; j<n; j++) {
            A[a][j] = 0;
        }
    }
    */
    bool firstRowZero = false, firstColumnZero = false;
    for(int i=0; i<m; i++) {
        if(A[i][0] == 0) {
            firstColumnZero = true;
            break;
        }
    }
    for(int j = 0; j<n; j++) {
        if(A[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }
    for(int i=1; i<m; i++) {
        for(int j=1; j<n; j++) {
            if(A[i][j] == 0) {
                A[i][0] = 0; 
                A[0][j] = 0;
            }
        }
    }
    for(int i=1; i<m; i++) {
        for(int j=1; j<n; j++) {
            if(A[i][0] == 0 || A[0][j] == 0)
                A[i][j] = 0;
        }
    }
    if(firstColumnZero) {
        for(int i=0; i<m; i++)
            A[i][0] = 0;
    }
    if(firstRowZero) {
        for(int j=0; j<n; j++)
            A[0][j] = 0;
    }
}

