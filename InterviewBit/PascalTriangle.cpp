vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    res.push_back({ 1 });
    if(A == 1)
        return res;
    res.push_back({ 1, 1 });
    if(A == 2)
        return res;
    for(int i = 3; i <= A; i++) {
        vector<int> v(i);
        vector<int> temp = res.back();
        for(int j = 0; j < i; j++) {
            if(j - 1 >= 0)
                v[j] += temp[j - 1];
            if(j < i - 1)
                v[j] += temp[j];
        }
        res.push_back(v);
    }
    return res;
}

