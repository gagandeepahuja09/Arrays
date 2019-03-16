int Solution::solve(vector<string> &A) {
    int n = A.size();
    double a = stod(A[0]), b = stod(A[1]), c = stod(A[2]);
    for(int i=3; i<n; i++) {
        if((a + b + c) > 1 && (a + b + c) < 2)
            return 1;
        else if(a + b + c >= 2) {
            // Replace max number with the current number    
            if(a > b && a > c) {
                a = stod(A[i]);
            }
            else if(b > c) {
                b = stod(A[i]);
            }
            else 
                c = stod(A[i]);
        }
        else if((a + b + c) <= 1) {
            // Replace min num with current
            if(a < b && a < c) {
                a = stod(A[i]);
            }
            else if(b < c) {
                b = stod(A[i]);
            }
            else 
                c = stod(A[i]);
        }
        if((a + b + c) > 1 && (a + b + c) < 2)
            return 1;
        return 0;    
    }
}

