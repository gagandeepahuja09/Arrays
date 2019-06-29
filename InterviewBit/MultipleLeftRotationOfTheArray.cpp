/*
Multiple left rotations of the array

Given an array of integers A and multiple values in B which represents the indices of the array A around which left rotation of the array A needs to be performed.

Find the rotated array for each value and return the result in the from of a matrix where i'th row represents the rotated array for the i'th value in B.*/

vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    int n = A.size();
    vector<int> temp(2 * n);
    for(int i = 0; i < A.size(); i++) {
        temp[i] = temp[i + n] = A[i];
    }
    vector<vector<int>> ret;
    for(int i = 0; i < B.size(); i++) {
        int k = B[i] % n;
        vector<int> v;
        for(int i = k; i < n + k; i++) {
            v.push_back(temp[i]);
        }
        ret.push_back(v);
    }
    return ret;
}

