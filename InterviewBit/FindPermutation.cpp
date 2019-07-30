void rev(vector<int>& ret, int i, int j) {
    while(i < j) {
        swap(ret[i], ret[j]);
        i++;    j--;
    }
}

vector<int> Solution::findPerm(const string A, int B) {
    int n = A.size();
    vector<int> ret(n + 1);
    for(int i = 0; i < ret.size(); i++)
        ret[i] = i + 1;
    int i = 0;     
    while(i <= n) {
        int j = i;
        while(i < n && A[i] == 'D')
            i++;
        rev(ret, j, i);
        i++;
    }
    return ret;
}

