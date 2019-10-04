class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ret = 0, n = grid.size(), x, y;
        for(int i = 0; i < n; i++) {
            x = y = 0;
            for(int j = 0; j < n; j++) {
                x = max(x, grid[i][j]);
                y = max(y, grid[j][i]);
                if(grid[i][j])
                    ret++;
            }
            ret += (x + y);
        }
        return ret;
    }
};
