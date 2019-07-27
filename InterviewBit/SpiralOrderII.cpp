vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> ret(A, vector<int>(A));
    int r1, c1, r2, c2;
    int k = 1;
    r1 = 0, r2 = A - 1, c1 = 0, c2 = A - 1;
    while(r1 <= r2 && c1 <= c2) {
        if(r1 <= r2) {
            for(int i = c1; i <= c2; i++) {
                ret[r1][i] = k++;
            }
            r1++;
        }
        if(c1 <= c2) {
            for(int i = r1; i <= r2; i++) {
                ret[i][c2] = k++;
            }
            c2--;
        }
        if(r1 <= r2) {
            for(int i = c2; i >= c1; i--) {
                ret[r2][i] = k++;
            }
            r2--;
        }
        if(c1 <= c2) {
            for(int i = r2; i >= r1; i--) {
                ret[i][c1] = k++;
            }
            c1++;
        }
    }
    return ret;
}

