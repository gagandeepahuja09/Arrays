int Solution::majorityElement(const vector<int> &A) {
    int count = 1, element = A[0];
    for(int i = 1; i < A.size(); i++) {
        if(A[i] == element)
            count++;
        else
            count--;
        if(count == 0) {
            element = A[i];
            count = 1;
        }    
    }
    return element;
}

