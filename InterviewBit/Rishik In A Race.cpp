int Solution::solve(int A, vector<int> &B) {
    vector<int> v(100);
    for(int i = 0; i < 100; i++) {
        v[i] = i;
    }
    for(int i = 0; i < B.size(); i++) {
        swap(v[B[i] - 1], v[B[i]]);
    }
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == A - 1)
            return i + 1;
    }
}

