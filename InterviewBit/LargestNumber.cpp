bool cmp(int a, int b) {
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab >ba;
}

string Solution::largestNumber(const vector<int> &A) {
    string res;
    vector<int> B = A;
    sort(B.begin(), B.end(), cmp);
    for(auto x : B) {
        res += to_string(x);
    }
    int i = 0;
    while(i < res.size() - 1 && res[i] == '0')
        res.erase(res.begin());
    return res;
}

