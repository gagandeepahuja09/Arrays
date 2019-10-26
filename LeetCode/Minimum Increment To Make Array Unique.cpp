class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int ans = 0;
        sort(A.begin(), A.end());
        for(int i = 1; i < A.size(); i++) {
            if(A[i] <= A[i - 1]) {
                ans += (A[i - 1] - A[i]) + 1;
                A[i] = A[i - 1] + 1;
            }
        }
        return ans;
    }
};
