int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int c1 = 0, c2 = 0;
    // Moore's Voting Algo: 
    int first = INT_MAX, second = INT_MAX, n = A.size();
    for(int i=0; i<n; i++) {
        if(A[i] == first)
            c1++;
        else if(A[i] == second)
            c2++;
        else if(c1 == 0) {
            first = A[i];
            c1++;
        }
        else if(c2 == 0) {
            second = A[i];
            c2++;
        }
        else {
            c1--; c2--;
        }
    }
    c1 = 0;
    c2 = 0;
    for(int i=0; i<n; i++) {
        if(A[i] == first)
            c1++;
        else if(A[i] == second)
            c2++;
    }
    if(c1 > n/3)
        return first;
    if(c2 > n/3)
        return second;
    return -1;    
}

