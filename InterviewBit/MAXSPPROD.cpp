#define MOD 1000000007
#define ll long long int

vector<ll> spl(vector<int>& A, bool flag) {
    int n = A.size();
    vector<ll> ret(n, 0);
    stack<ll> stk;
    if(!flag) {
        for(int i = 0; i < A.size(); i++) {
            while(!stk.empty() && A[i] >= A[stk.top()]) {
                stk.pop();
            }
            if(stk.size())
                ret[i] = stk.top();
            stk.push(i);
        }
    }
    else {
        for(int i = A.size() - 1; i >= 0; i--) {
            while(!stk.empty() && A[i] >= A[stk.top()]) {
                stk.pop();
            }
            if(stk.size())
                ret[i] = stk.top();
            stk.push(i);
        }
    }
    return ret;
}

int Solution::maxSpecialProduct(vector<int> &A) {
    vector<ll> l = spl(A, 0);
    vector<ll> r = spl(A, 1);
    ll ret = 0;
    for(int i = 0; i < A.size(); i++) {
        ll prod = (l[i] % MOD * 1LL * r[i] % MOD) % MOD;
        ret = max(ret, prod);
    }
    return ret;
}

