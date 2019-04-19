int Solution::solve(vector<int> &A) {
    int cnt = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == i)
            continue;
        else {
            cnt++;
            swap(A[i], A[A[i]]);
            i--;
        }    
    }
    return cnt;
}

