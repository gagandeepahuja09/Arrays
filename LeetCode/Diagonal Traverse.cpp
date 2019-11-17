class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& A) {
        if(!A.size())
            return {};
        int cnt = 1;
        int n = A.size(), m = A[0].size();
        vector<int> ret(n * m);
        vector<vector<int>> dir = { { -1, 1}, { 1, -1} };
        int row = 0, col = 0, d = 0;
        for(int i = 0; i < n * m; i++) {
            ret[i] = A[row][col];
            row += dir[d][0];
            col += dir[d][1];
            if(row >= m) row = m - 1, col += 2, d = 1 - d;
            if(col >= n) col = n - 1, row += 2, d = 1 - d;
            if(row < 0) row = 0, d = 1 - d;
            if(col < 0) col = 0, d = 1 - d;
        }
        return ret;
    }
};
