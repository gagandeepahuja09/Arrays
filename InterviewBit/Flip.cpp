vector<int> Solution::flip(string A) {
    int mx = 0, cnt = 0, start = 0;
    vector<int> ret(2, -1);
    for(int i = 0; i < A.size(); i++) {
        cnt += (A[i] == '0' ? 1 : -1);
        if(cnt < 0) {
            cnt = 0;
            start = i + 1;
        }
        if(cnt > mx) {
            mx = cnt;
            ret[0] = start;
            ret[1] = i;
        }
    }
    if(ret[0] == -1)
        return {};
    ret[0]++; ret[1]++;    
    return ret;    
}

