vector<vector<int> > Solution::generateMatrix(int A) {
    int r1 = 0, c1 = 0, r2 = A - 1, c2 = A - 1;
    int num = 1;
    vector<vector<int>> ret(A, vector<int>(A, 0));
    while(r1 <= r2 && c1 <= c2) {
        for(int i = c1; i <= c2; i++)
            ret[r1][i] = num++;
        r1++;
        for(int i = r1; i <= r2; i++)
            ret[i][c2] = num++;
        c2--;
        for(int i = c2; i >= c1; i--)
            ret[r2][i] = num++;
        r2--;
        for(int i = r2; i>= r1; i--)
            ret[i][c1] = num++;
        c1++;    
    }
    return ret;
}

