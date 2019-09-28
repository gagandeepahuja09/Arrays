class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        int n = A.size();
        vector<int>leftMax(n, 0), rightMin(n, 30005);
        for(int i = 0; i < n; i++) {
            if(i == 0)
                leftMax[i] = A[i];
            else
                leftMax[i] = max(leftMax[i - 1], A[i]);
        }
        for(int i = n - 1; i >= 0; i--) {
            if(i == n - 1)
                rightMin[i] = A[i];
            else
                rightMin[i] = min(rightMin[i + 1], A[i]);
        }
        for(int i = 0; i < n - 1; i++) {
            // cout << leftMax[i] << " " << rightMin[i + 1] << endl;
            if(leftMax[i] < rightMin[i + 1])
                return i + 1;
        }
        return -1;
    }
};
