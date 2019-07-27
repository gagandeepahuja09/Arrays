#define ll long long int

vector<int> Solution::maxset(vector<int> &A) {
    ll currMax = INT_MIN, retMax = INT_MIN, l = -1, r = -1, start = 0;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] < 0) {
            currMax = INT_MIN;
            start = i + 1;
        }
        else {
            currMax += A[i];
            if(retMax < currMax || (retMax == currMax && i - start > 
            r - l)) {
                retMax = currMax;
                r = i;
                l = start;
            }
        }
    }
    if(l == -1)
        return {};
    vector<int> ret;
    for(int i = l; i <= r; i++) {
        ret.push_back(A[i]);
    }
    return ret;
}

