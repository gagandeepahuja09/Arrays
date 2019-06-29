/*
Max Chunks To Make Sorted II

Given an array of integers (not necessarily distinct) A, if we split the array into some number of "chunks" (partitions), and individually sort each chunk. After concatenating them, the result equals the sorted array.

What is the most number of chunks we could have made?
*/

int Solution::solve(vector<int> &A) {
    vector<int> v = A;
    int chunks = 0, mx = INT_MIN;
    sort(v.begin(), v.end());
    int mp1 = 0, mp2 = 0;
    for(int i = 0; i < A.size(); i++) {
        mp1 += A[i];
        mp2 += v[i];
        if(mp1 == mp2) {
            chunks++;
        }
    }
    return chunks;
}

