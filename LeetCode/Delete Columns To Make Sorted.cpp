class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int rows = A.size(), cols = A[0].size(), count = 0;
        for(int c = 0; c < cols; c++) {
            for(int r = 0; r < rows - 1; r++) {
                if(A[r][c] > A[r + 1][c]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
