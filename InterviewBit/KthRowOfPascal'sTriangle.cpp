vector<int> Solution::getRow(int A) {
    vector<int> ret;
    int n = 1;
    ret.push_back(n);
    for(int i = 1; i <= A; i++) {
        n *= (A + 1 - i);
        n /= i;
        ret.push_back(n);
    }
    return ret;
}

