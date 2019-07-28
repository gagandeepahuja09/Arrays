int Solution::solve(vector<string> &A) {
    double a = stod(A[0]), b = stod(A[1]), c = stod(A[2]);
    for(int i = 3; i < A.size(); i++) {
        if(a + b + c > 1 && a + b + c < 2)
            return 1;
        else if(a + b + c >= 2) {
            double mx = max(a, max(b, c));
            if(mx == a)
                a = stod(A[i]);
            else if(mx == b)
                b = stod(A[i]);
            else
                c = stod(A[i]);
        }
        else {
            double mn = min(a, min(b, c));
            if(mn == a)
                a = stod(A[i]);
            else if(mn == b)
                b = stod(A[i]);
            else
                c = stod(A[i]);
        }
    }
    return (a + b + c > 1 && a + b + c < 2);
}

