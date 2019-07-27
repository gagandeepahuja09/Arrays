vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xxor = A[0];
    int n = A.size();
    for(int i = 1; i < n; i++) {
        xxor ^= A[i];
    }
    for(int i = 1; i <= n; i++) {
        xxor ^= i;
    }
    vector<int> ret(2, 0);
    int x = 0, y = 0;
    int sb = xxor & (~(xxor - 1));
    for(int i = 0; i < n; i++) {
        if(A[i] & sb)
            x ^= A[i];
        else
            y ^= A[i];
    }
    for(int i = 1; i <= n; i++) {
        if(i & sb)
            x ^= i;
        else
            y ^= i;
    }
    for(int i = 0; i < n; i++) {
        if(A[i] == x) {
            ret[0] = x;
            ret[1] = y;
            return ret;
        }
        if(A[i] == y) {
            ret[0] = y;
            ret[1] = x;
            return ret;
        }
    }
}

