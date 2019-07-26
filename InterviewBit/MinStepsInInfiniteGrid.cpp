int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ret = 0;
    for(int i = 1; i < A.size(); i++) {
        ret += max(abs(A[i] - A[i - 1]), abs(B[i] - B[i - 1])); 
    }
    return ret;
}

