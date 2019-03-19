vector<int> Solution::findPerm(const string A, int B) {
    vector<int> res(A.size() + 1);
    int count = 1;
    for(int i=0; i<=A.size(); i++) {
        if(A[i] == 'I' || i == A.size()) {
            for(int j = i-1; j>=-1; j--) {
                res[j+1] = count++;
                if(j >= 0 && A[j] == 'I')
                    break;
            }
        } 
    }
    return res;
}

