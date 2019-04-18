void rightRotate(vector<int> &A, int outOfPlace, int idx) {
    int temp = A[idx];
    for(int i = idx; i > outOfPlace; i--) {
        A[i] = A[i - 1];
    }
    A[outOfPlace] = temp;
}

vector<int> Solution::solve(vector<int> &A) {
    int outOfPlace = -1;
    for(int i = 0; i < A.size(); i++) {
        if(outOfPlace >= 0) {
            if((A[i] >= 0 && A[outOfPlace] < 0) || (A[i] < 0 && A[outOfPlace] >= 0)) {
                rightRotate(A, outOfPlace, i);
                if(i - outOfPlace > 2)
                    outOfPlace += 2;
                else
                    outOfPlace = -1;
            }
        }
        if(outOfPlace == -1) {
            if((A[i] >= 0 && (i % 2) == 0) || (A[i] < 0 && (i % 2) == 1))
                outOfPlace = i;
        }
    }
    return A;
}

