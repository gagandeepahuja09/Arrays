int Solution::solve(vector<vector<int> > &A, int B) {
    int n = A.size();
    int i = 0, j = A[0].size() - 1;
    while(i < n && j >= 0) {
        if(A[i][j] == B) {
            return ((i + 1) * 1009 + (j + 1));
        }
        else if(A[i][j] > B) {
            j--;
        }
        else
            i++;
    }
    return -1;
}

