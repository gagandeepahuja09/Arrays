int Solution::solve(vector<int> &A) {
    int c0 = 0, c1 = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] % 2 == 0)
            c0++;
        else
            c1++;
    }
    return min(c0, c1);
}

