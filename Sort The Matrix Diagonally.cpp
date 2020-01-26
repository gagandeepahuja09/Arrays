class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++) {
            int ci = i, cj = 0;
            vector<int> v;
            while(ci < n && cj < m) {
                v.push_back(mat[ci++][cj++]);
            }
            sort(v.begin(), v.end());
            int k = 0; ci = i, cj = 0;
            while(ci < n && cj < m) {
                mat[ci++][cj++] = v[k++];
            }
        }
        
        for(int j = 0; j < m; j++) {
            int ci = 0, cj = j;
            vector<int> v;
            while(ci < n && cj < m) {
                v.push_back(mat[ci++][cj++]);
            }
            sort(v.begin(), v.end());
            int k = 0; ci = 0, cj = j;
            while(ci < n && cj < m) {
                mat[ci++][cj++] = v[k++];
            }
        }
        return mat;
    }
};
