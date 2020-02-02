class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> res;
        for(int i = 0; i < n; i++) {
            int count = 0;
            for(int j = 0; j < m; j++) {
                count += (mat[i][j] == 1);
            }
            res.push_back({ count, i });
        }
        sort(res.begin(), res.end());
        vector<int> ret;
        for(int i = 0; i < k; i++) {
            ret.push_back(res[i][1]);
        }
        return ret;
    }
};
