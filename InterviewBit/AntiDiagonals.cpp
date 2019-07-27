vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> ret;
    for(int j = 0; j < A[0].size(); j++) {
        vector<int> v;
        int k = j, i = 0;
        while(k >= 0) {
            v.push_back(A[i++][k--]);
        }
        ret.push_back(v);
    }
    for(int i = 1; i < A.size(); i++) {
        vector<int> v;
        int k = i, j = A[0].size() - 1;
        while(k < A.size()) {
            v.push_back(A[k++][j--]);
        }
        ret.push_back(v);
    }
    return ret;
}

