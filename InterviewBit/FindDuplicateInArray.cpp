int Solution::repeatedNumber(const vector<int> &A) {
    /*vector<int> v  = A;
    for(int i = 0; i < v.size(); i++) {
        int idx = abs(v[i]) - 1;
        if(v[idx] < 0)
            return idx + 1;
        v[idx] = -v[idx];
    }
    return -1;*/
    int slow = A[0], fast = A[A[0]];
    while(slow != fast) {
        slow = A[slow];
        fast = A[A[fast]];
    }
    fast = 0;
    while(slow != fast) {
        slow = A[slow];
        fast = A[fast];
    }
    return slow == 0 ? -1 : slow;
}

