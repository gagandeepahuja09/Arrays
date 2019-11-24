class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int maxSum = -30001, minSum = 30001, currMax = 0, currMin = 0, total = 0;
        for(int a : A) {
            currMax = max(a, currMax + a);
            currMin = min(a, currMin + a);
            maxSum = max(maxSum, currMax);
            minSum = min(minSum, currMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};
