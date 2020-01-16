class RLEIterator {
public:
    int pos = 0;
    vector<int>& v;
    RLEIterator(vector<int>& A) : v(A) {}
    
    int next(int n) {
        if(pos >= v.size())
            return -1;
        int count = v[pos];
        if(count >= n) {
            // cout << v[pos] << endl;
            v[pos] -= n;
            int ans = v[pos + 1];
            if(count == n)
                pos += 2;
            return ans;
        }
        else {
            int num = v[pos];
            v[pos] = 0;
            pos += 2;
            return next(n - num);
        }
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */
