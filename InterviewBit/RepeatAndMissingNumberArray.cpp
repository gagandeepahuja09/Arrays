vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int xxor = 0;
    int n = A.size();
    for(int i=0; i<A.size(); i++) {
        xxor ^= A[i];
        xxor ^= (i+1);
    }
    // Get LSB set bit in xor result
    int setBit = xxor & (~(xxor - 1));
    int x = 0, y = 0;
    for(int i=0; i < n; i++) {
        if(A[i] & setBit)
            x = x ^ A[i];
        else
            y = y ^ A[i];
        if(i+1 & setBit)
            x = x ^ (i+1);
        else
            y = y ^ (i+1);
    }
    vector<int> res(2);
    for(int i=0; i<n; i++) {
        if(A[i] == x) {
            res[0] = x;
            res[1] = y;
            break;
        }
        else if(A[i] == y) {
            res[0] = y;
            res[1] = x;
            break;
        }
    }
    return res;
}

