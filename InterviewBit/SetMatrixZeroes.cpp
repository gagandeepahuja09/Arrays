void Solution::setZeroes(vector<vector<int> > &A) {
    int m = A.size(), n = A[0].size();
    bool firstRow = false, firstCol = false;
    for(int i = 0; i < m; i++) {
        if(A[i][0] == 0) {
            firstCol = true;
            break;
        }
    }
    for(int j = 0; j < n; j++) {
        if(A[0][j] == 0) {
            firstRow = true;
            break;
        }
    }
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(A[i][j] == 0) {
                A[i][0] = 0; A[0][j] = 0;
            }
        }
    }
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(A[i][0] == 0 || A[0][j] == 0) {
                A[i][j] = 0;
            }
        }
    }
    if(firstCol) {
        for(int i = 0; i < m; i++) {
            A[i][0] = 0;
        }
    }
    if(firstRow) {
        for(int j = 0; j < n; j++) {
            A[0][j] = 0;
        }
    }
}

