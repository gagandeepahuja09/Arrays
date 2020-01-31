class Solution {
public:
    bool isValid(int i, int j, int r, int c) {
        return (i >= 0 && j >= 0 && i < r && j < c);
    }
    
    vector<vector<int>> spiralMatrixIII(int r, int c, int r0, int c0) {
        int dir = 1;
        int target = 1;
        vector<vector<int>> ret;
        ret.push_back({ r0, c0 });
        int curR = r0, curC = c0;
        while(ret.size() < (r * c)) {
            int i = curR, j = curC;
            for(curC = j + dir; curC != j + ((target + 1) * dir); curC += dir) {
                if(isValid(curR, curC, r, c)) {
                    ret.push_back({ curR, curC });
                }        
            }
            curC -= dir;
            for(curR = i + dir; curR != i + ((target + 1) * dir); curR += dir) {
                if(isValid(curR, curC, r, c)) {
                    ret.push_back({ curR, curC });
                }        
            }
            curR -= dir;
            target++; 
            dir = -dir;
        }
        return ret;
    }
};
