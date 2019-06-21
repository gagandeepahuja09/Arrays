/*
Next Permutation

Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

The replacement must be in-place, do not allocate extra memory.

Examples:

1,2,3 → 1,3,2

3,2,1 → 1,2,3

1,1,5 → 1,5,1

20, 50, 113 → 20, 113, 50
*/

// This is the region which cannot be increased to next permutation
int idxPeak(vector<int>& A) {
    int i = A.size() - 1;
    while(A[i] <= A[i - 1]) {
        i--;
    }
    return i;
}

int lastIdxOfGrt(vector<int>& A, int val) {
    int i = A.size() - 1;
    while(A[i] <= val) {
        i--;
    }
    return i;
}

void Solution::nextPermutation(vector<int> &A) {
    int pivot = idxPeak(A) - 1;
    if(pivot != -1) {
        int successor = lastIdxOfGrt(A, A[pivot]);
        swap(A[pivot], A[successor]);
    }
    reverse(A.begin() + pivot + 1, A.end());
}

