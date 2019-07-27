vector<int> Solution::plusOne(vector<int> &A) {
    int carry = 1;
    vector<int> ret;
    for(int i = A.size() - 1; i >= 0; i--) {
        carry += A[i];
        ret.push_back(carry % 10);
        carry /= 10;
    }
    if(carry != 0)
        ret.push_back(carry);
    while(ret.size() && ret.back() == 0) {
        ret.pop_back();
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

