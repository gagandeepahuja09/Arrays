class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int maxSum = A[0], minSum = A[0], currMax = A[0], currMin = A[0], total = A[0];
        for(int i = 1; i < A.size(); i++) {
            currMax = max(A[i], currMax + A[i]);
            currMin = min(A[i], currMin + A[i]);
            maxSum = max(maxSum, currMax);
            minSum = min(minSum, currMin);
            total += A[i];
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};
