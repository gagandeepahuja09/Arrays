vector<int> Solution::subUnsort(vector<int> &A) {
    /*stack<int> stk;
    int l = A.size(), r = 0;
    for(int i=0; i<A.size(); i++) {
        while(!stk.empty() && A[i] < A[stk.top()]) {
            l = min(l, stk.top());
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty())
        stk.pop();
    for(int i=A.size() - 1; i>=0; i--) {
        while(!stk.empty() && A[i] > A[stk.top()]) {
            r = max(r, stk.top());
            stk.pop();
        }
        stk.push(i);
    }
    if(r - l > 0)
        return {l, r}; 
    return { -1 }; */
    int mn = INT_MAX, mx = INT_MIN;
    bool flag = false;
    for(int i=1; i<A.size(); i++) {
        if(A[i] < A[i-1])
            flag = true;
        if(flag)
            mn = min(mn, A[i]);
    }
    flag = false;
    for(int i=A.size() - 2; i>=0; i--) {
        if(A[i] > A[i+1])
            flag = true;
        if(flag)
            mx = max(mx, A[i]);
    }
    int l = 0, r = A.size() - 1;
    for(; l < A.size(); l++) {
        if(A[l] > mn)
            break;
    }
    for(; r >=0; r--) {
        if(A[r] < mx)
            break;
    }
    if(r - l > 0)
        return {l, r}; 
    return { -1 };
}

